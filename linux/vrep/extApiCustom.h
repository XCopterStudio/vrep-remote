//PUT_VREP_REMOTEAPI_COPYRIGHT_NOTICE_HERE

#ifndef _EXTAPICUSTOM__
#define _EXTAPICUSTOM__

#include "extApiPlatform.h"

#ifdef _WIN32
	#define EXTAPI_DLLEXPORT extern __declspec(dllexport)
#endif
#if defined (__linux) || defined (__APPLE__)
	#define EXTAPI_DLLEXPORT extern
#endif

/* Your custom remote API functions. Following are examples: */
EXTAPI_DLLEXPORT simxInt simxCustomGetObjectCount(simxInt clientID,simxInt* objectCount,simxInt operationMode); /* related to command ID: simx_customcmd_get_object_count */
EXTAPI_DLLEXPORT simxInt simxCustomGetObjectType(simxInt clientID,simxInt objectHandle,simxInt* objectType,simxInt operationMode); /* related to command ID: simx_customcmd_get_object_type */
EXTAPI_DLLEXPORT simxInt simxCustomSetObjectName(simxInt clientID,simxInt objectHandle,const simxChar* objectName,simxInt operationMode); /* related to command ID: simx_customcmd_set_object_name */
EXTAPI_DLLEXPORT simxInt simxCustomGetUIButtonLabel(simxInt clientID,simxInt uiHandle,simxInt buttonID,simxChar** label,simxInt operationMode); /* related to command ID: simx_customcmd_get_ui_button_label */
EXTAPI_DLLEXPORT simxInt simxCustomGetScriptHandle(simxInt clientID,const simxChar* objectName,simxInt* scriptHandle,simxInt operationMode); /* related to command ID: simx_customcmd_get_script_handle */

#endif /* _EXTAPICUSTOM__ */		
