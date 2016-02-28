#ifndef _HELLO_ANDROID_H
#define _HELLO_ANDROID_H

#include <linux/cdev.h>
#include <linux/semaphore.h>

#define HELLO_DEVICE_NODE_NAME "hello"
#define HELLO_DEVICE_FILE_NAME "hello"
#define HELLO_DEVICE_PROC_NAME "hello"
#define HELLO_DEVICE_CLASS_NAME "hello"

struct hello_android_dev{
    int val;
    struct semaphore sem;
    struct cdev dev;
};

#endif //~_HELLO_ANDROID_H
