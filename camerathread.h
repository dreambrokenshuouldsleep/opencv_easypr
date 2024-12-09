#ifndef CAMERATHREAD_H
#define CAMERATHREAD_H


#include <QThread>
#include <QImage>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/videodev2.h>
#include <QMutex>
typedef struct
 {
      char* start;
      size_t length;
} buffer_t;

class CameraThread : public QThread
{
    Q_OBJECT
public:
    CameraThread();
    explicit CameraThread(QObject *parent = nullptr);
   ~CameraThread();
   //重写线程函数
   void run();

private:
    buffer_t buffer[4];
    buffer_t current;//取出的一块
    unsigned int sign3;
    int camera_fd;
    int yuyv2rgb(int y, int u, int v);
    int yuyv2rgb0(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height);
    void camera_init();
    void camera_destory();
signals:
    void send_image(QImage image);
public slots:
    void get_stop();

private:
    quint16 flag;
    QMutex *mutex;
};

#endif // CAMERATHREAD_H
