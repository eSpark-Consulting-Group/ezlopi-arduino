# ezlopi-arduino

## To Revert
devices macro 				comment
devices header inclusion 		comment
#include "mbedtls/certs.h" 		comment
#include "ezlopi_sdkconfig_missing.h" 	for missing #defines
sensor devices				removed
ezlopi-components/lua			removed
ezlopi-lua-modules			removed
esp_websocket_client 			files added
tcpip_adapter				files added
esp_netif_sta_list.h			file added

tcp_adapter : esp_netif_get_sta_list(wifi_sta_list, tcpip_sta_list);  commented
#include "esp_netif_sta_list.h"		comment
tcpip_adapter_get_sta_list		comment