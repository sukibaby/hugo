#ifndef _INCLUDE_LINUX_OSD_INIT_MACHINE
#define _INCLUDE_LINUX_OSD_INIT_MACHINE

#include <allegro.h>
#include "sys_dep.h"
#include "lang.h"
#include "pce.h"
#include "osd_gfx.h"

extern UChar gamepad;
// gamepad detected ?

extern int gamepad_driver;
// what kind of jypad must we have to handle

extern char synchro;
// � fond, � fond, � fond? (french joke ;)

extern char dump_snd;
// Do we write sound to file

extern int *fd[4];
// handle for joypad devices


#endif
