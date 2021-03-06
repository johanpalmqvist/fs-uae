#ifndef UAE_GAYLE_H
#define UAE_GAYLE_H

#ifdef FSUAE // NL
#include "uae/types.h"
#endif

extern void gayle_reset (int);
extern void gayle_hsync (void);
extern void gayle_free (void);
extern int gayle_add_ide_unit (int ch, struct uaedev_config_info *ci);
extern int gayle_modify_pcmcia_sram_unit (const TCHAR *path, int readonly, int insert);
extern int gayle_modify_pcmcia_ide_unit (const TCHAR *path, int readonly, int insert);
extern int gayle_add_pcmcia_sram_unit (const TCHAR *path, int readonly);
extern int gayle_add_pcmcia_ide_unit (const TCHAR *path, int readonly);
extern void gayle_free_units (void);
extern void rethink_gayle (void);
extern void gayle_map_pcmcia (void);

extern int gary_toenb; // non-existing memory access = bus error.
extern int gary_timeout; // non-existing memory access = delay

#define PCMCIA_COMMON_START 0x600000
#define PCMCIA_COMMON_SIZE 0x400000

#endif // UAE_GAYLE_H
