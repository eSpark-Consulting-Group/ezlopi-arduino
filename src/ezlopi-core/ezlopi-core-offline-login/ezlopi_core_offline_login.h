

#ifndef __EZLOPI_CORE_OFFLINE_LOGIN_H_
#define __EZLOPI_CORE_OFFLINE_LOGIN_H_

#include "ezlopi-components/cjext/cjext.h"
#include "ezlopi-core/ezlopi-core-errors/ezlopi_core_errors.h"

ezlopi_error_t ezlopi_core_offline_login_perform(cJSON *cj_params);
ezlopi_error_t ezlopi_core_offline_logout_perform();
bool is_user_logged_in();

#endif // __EZLOPI_CORE_OFFLINE_LOGIN_H_
