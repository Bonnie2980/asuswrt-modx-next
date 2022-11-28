/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "autoconf/librpc/gen_ndr/browser.h"

#ifndef _HEADER_NDR_browser
#define _HEADER_NDR_browser

#define NDR_BROWSER_UUID "6bffd098-a112-3610-9833-012892020162"
#define NDR_BROWSER_VERSION 0.0
#define NDR_BROWSER_NAME "browser"
#define NDR_BROWSER_HELPSTRING "Browsing"
extern const struct ndr_interface_table ndr_table_browser;
#define NDR_BROWSERRSERVERENUM (0x00)

#define NDR_BROWSERRDEBUGCALL (0x01)

#define NDR_BROWSERRQUERYOTHERDOMAINS (0x02)

#define NDR_BROWSERRRESETNETLOGONSTATE (0x03)

#define NDR_BROWSERRDEBUGTRACE (0x04)

#define NDR_BROWSERRQUERYSTATISTICS (0x05)

#define NDR_BROWSERRESETSTATISTICS (0x06)

#define NDR_NETRBROWSERSTATISTICSCLEAR (0x07)

#define NDR_NETRBROWSERSTATISTICSGET (0x08)

#define NDR_BROWSERRSETNETLOGONSTATE (0x09)

#define NDR_BROWSERRQUERYEMULATEDDOMAINS (0x0a)

#define NDR_BROWSERRSERVERENUMEX (0x0b)

#define NDR_BROWSER_CALL_COUNT (12)
void ndr_print_BrowserrSrvInfo100Ctr(struct ndr_print *ndr, const char *name, const struct BrowserrSrvInfo100Ctr *r);
void ndr_print_BrowserrSrvInfo101Ctr(struct ndr_print *ndr, const char *name, const struct BrowserrSrvInfo101Ctr *r);
void ndr_print_BrowserrSrvInfoUnion(struct ndr_print *ndr, const char *name, const union BrowserrSrvInfoUnion *r);
void ndr_print_BrowserrSrvInfo(struct ndr_print *ndr, const char *name, const struct BrowserrSrvInfo *r);
void ndr_print_BrowserrServerEnum(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrServerEnum *r);
void ndr_print_BrowserrDebugCall(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrDebugCall *r);
void ndr_print_BrowserrQueryOtherDomains(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrQueryOtherDomains *r);
void ndr_print_BrowserrResetNetlogonState(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrResetNetlogonState *r);
void ndr_print_BrowserrDebugTrace(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrDebugTrace *r);
void ndr_print_BrowserrQueryStatistics(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrQueryStatistics *r);
void ndr_print_BrowserResetStatistics(struct ndr_print *ndr, const char *name, int flags, const struct BrowserResetStatistics *r);
void ndr_print_NetrBrowserStatisticsClear(struct ndr_print *ndr, const char *name, int flags, const struct NetrBrowserStatisticsClear *r);
void ndr_print_NetrBrowserStatisticsGet(struct ndr_print *ndr, const char *name, int flags, const struct NetrBrowserStatisticsGet *r);
void ndr_print_BrowserrSetNetlogonState(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrSetNetlogonState *r);
void ndr_print_BrowserrQueryEmulatedDomains(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrQueryEmulatedDomains *r);
void ndr_print_BrowserrServerEnumEx(struct ndr_print *ndr, const char *name, int flags, const struct BrowserrServerEnumEx *r);
#endif /* _HEADER_NDR_browser */