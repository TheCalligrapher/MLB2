#include "mlb_co.h"

#ifdef CO_TRACK_STACK_USAGE
void (*g_co_susg_reporter)(unsigned id, size_t usage);
#endif /* CO_TRACK_STACK_USAGE */

#ifdef CO_REPORT_STACK_SIZE
void (*g_co_ssize_reporter)(unsigned id, size_t size);
#endif /* CO_REPORT_STACK_SIZE */
