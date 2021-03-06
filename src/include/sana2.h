 /*
  * UAE - The Un*x Amiga Emulator
  *
  * SANAII compatible network driver emulation
  *
  * (c) 2007 Toni Wilen
  */

#ifndef UAE_SANA2_H
#define UAE_SANA2_H

#ifdef FSUAE // NL
#include "uae/types.h"
#endif

#define MAX_TOTAL_NET_DEVICES 10

uaecptr netdev_startup (uaecptr resaddr);
void netdev_install (void);
void netdev_reset (void);
void netdev_start_threads (void);

extern int log_net;

#endif // UAE_SANA2_H
