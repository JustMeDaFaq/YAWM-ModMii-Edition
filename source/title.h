#ifndef _TITLE_H_
#define _TITLE_H_

#include <ogc/es.h>

/* Constants */
#define BLOCK_SIZE	0x4000

/* Variables */
extern aeskey WiiCommonKey, vWiiCommonKey;

/* Prototypes */
s32 Title_ZeroSignature(signed_blob *);
s32 Title_FakesignTik(signed_blob *);
s32 Title_FakesignTMD(signed_blob *);
s32 Title_GetList(u64 **, u32 *);
s32 Title_GetTicketViews(u64, tikview **, u32 *);
s32 Title_GetTMD(u64, signed_blob **, u32 *);
s32 Title_GetVersion(u64, u16 *);
s32 Title_GetSysVersion(u64, u64 *);
s32 Title_GetSize(u64, u32 *);
s32 Title_GetIOSVersions(u8 **, u32 *);
void Title_SetupCommonKeys(void);

#endif
