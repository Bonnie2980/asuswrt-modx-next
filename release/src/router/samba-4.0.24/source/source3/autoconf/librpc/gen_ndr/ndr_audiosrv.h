/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/audiosrv.h"

#ifndef _HEADER_NDR_audiosrv
#define _HEADER_NDR_audiosrv

#define NDR_AUDIOSRV_UUID "0a74ef1c-41a4-4e06-83ae-dc74fb1cdd53"
#define NDR_AUDIOSRV_VERSION 1.0
#define NDR_AUDIOSRV_NAME "audiosrv"
#define NDR_AUDIOSRV_HELPSTRING "Audio Server"
extern const struct ndr_interface_table ndr_table_audiosrv;
#define NDR_AUDIOSRV_CREATEZONEFACTORIESLIST (0x00)

#define NDR_AUDIOSRV_CREATEGFXFACTORIESLIST (0x01)

#define NDR_AUDIOSRV_CREATEGFXLIST (0x02)

#define NDR_AUDIOSRV_REMOVEGFX (0x03)

#define NDR_AUDIOSRV_ADDGFX (0x04)

#define NDR_AUDIOSRV_MODIFYGFX (0x05)

#define NDR_AUDIOSRV_OPENGFX (0x06)

#define NDR_AUDIOSRV_LOGON (0x07)

#define NDR_AUDIOSRV_LOGOFF (0x08)

#define NDR_AUDIOSRV_REGISTERSESSIONNOTIFICATIONEVENT (0x09)

#define NDR_AUDIOSRV_UNREGISTERSESSIONNOTIFICATIONEVENT (0x0a)

#define NDR_AUDIOSRV_SESSIONCONNECTSTATE (0x0b)

#define NDR_AUDIOSRV_DRIVEROPENDRVREGKEY (0x0c)

#define NDR_AUDIOSRV_ADVISEPREFERREDDEVICECHANGE (0x0d)

#define NDR_AUDIOSRV_GETPNPINFO (0x0e)

#define NDR_AUDIOSRV_CALL_COUNT (15)
void ndr_print_audiosrv_CreatezoneFactoriesList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreatezoneFactoriesList *r);
void ndr_print_audiosrv_CreateGfxFactoriesList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreateGfxFactoriesList *r);
void ndr_print_audiosrv_CreateGfxList(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_CreateGfxList *r);
void ndr_print_audiosrv_RemoveGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_RemoveGfx *r);
void ndr_print_audiosrv_AddGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_AddGfx *r);
void ndr_print_audiosrv_ModifyGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_ModifyGfx *r);
void ndr_print_audiosrv_OpenGfx(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_OpenGfx *r);
void ndr_print_audiosrv_Logon(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_Logon *r);
void ndr_print_audiosrv_Logoff(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_Logoff *r);
void ndr_print_audiosrv_RegisterSessionNotificationEvent(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_RegisterSessionNotificationEvent *r);
void ndr_print_audiosrv_UnregisterSessionNotificationEvent(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_UnregisterSessionNotificationEvent *r);
void ndr_print_audiosrv_SessionConnectState(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_SessionConnectState *r);
void ndr_print_audiosrv_DriverOpenDrvRegKey(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_DriverOpenDrvRegKey *r);
void ndr_print_audiosrv_AdvisePreferredDeviceChange(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_AdvisePreferredDeviceChange *r);
void ndr_print_audiosrv_GetPnpInfo(struct ndr_print *ndr, const char *name, int flags, const struct audiosrv_GetPnpInfo *r);
#endif /* _HEADER_NDR_audiosrv */