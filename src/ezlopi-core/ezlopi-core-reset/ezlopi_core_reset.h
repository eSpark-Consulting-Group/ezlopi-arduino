#ifndef _EZLOPI_CORE_RESET_H_
#define _EZLOPI_CORE_RESET_H_

/*******************************************************************************
 *                          C++ Declaration Wrapper
 *******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

void EZPI_CORE_reset_reboot(void);
void EZPI_CORE_reset_factory_restore(void);

#ifdef __cplusplus
}
#endif

#endif // _EZLOPI_CORE_RESET_H_
