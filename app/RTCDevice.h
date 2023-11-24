//
//  RTCDevice.h
//  iSH-AOK
//
//  Created by Michael Miller on 11/22/23.
//
#include"fs/tty.h"

extern struct dev_ops rtc_dev;
extern int rtc_close(struct fd *fd);
extern ssize_t rtc_read(struct fd *fd, void *buf, size_t bufsize);
extern int rtc_ioctl(struct fd *fd, int cmd, void *arg);
extern int rtc_poll(struct fd *fd);
extern int rtc_open(int major, int minor, struct fd *fd);
