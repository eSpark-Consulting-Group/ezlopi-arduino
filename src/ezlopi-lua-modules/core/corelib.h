#ifndef __CORELIB_H__
#define __CORELIB_H__

#include "ezlopi-components/lua/lua.h"
#include "ezlopi-components/lua/lauxlib.h"
#include "ezlopi-components/lua/lstate.h"

int luaopen_lcore(lua_State *lua_state);

#endif // __CORELIB_H__
