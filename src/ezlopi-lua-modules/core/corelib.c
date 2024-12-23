
#include "ezlopi-components/lua/lua.h"
#include "ezlopi-components/lua/lauxlib.h"
#include "ezlopi-components/lua/lstate.h"

#include "ezlopi-core/ezlopi-core-factory-info/ezlopi_core_factory_info.h"

#include "ezlopi-lua-modules/core/corelib.h"
#include "ezlopi-util/ezlopi-util-trace/ezlopi_util_trace.h"

#include "ezlopi-lua-modules/core/core_getters_api.h"
#include "ezlopi-lua-modules/core/core_adders_api.h"
#include "ezlopi-lua-modules/core/core_removers_api.h"
#include "ezlopi-lua-modules/core/core_updaters_api.h"
#include "ezlopi-lua-modules/core/core_others_api.h"
#include "ezlopi-lua-modules/core/core_external_gateway_api.h"

static const struct luaL_Reg lcore_funcs[] = {
#define CORELIB_FUNCTION(f_name, l_func) {.name = f_name, .func = l_func},
#include "corelib_macro.h"
#undef CORELIB_FUNCTION
    {.name = NULL, .func = NULL},
};

int luaopen_lcore(lua_State *lua_state)
{
    luaL_newlib(lua_state, lcore_funcs);
    return 1;
}
