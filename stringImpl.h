

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from stringImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef stringImpl_1574212639_h
#define stringImpl_1574212639_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern const char *std_msgs_msg_dds__String__cTYPENAME;

typedef struct std_msgs_msg_dds__String__c {

    DDS_Char *   data_ ;

    std_msgs_msg_dds__String__c() {}

} std_msgs_msg_dds__String__c ;
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* std_msgs_msg_dds__String__c_get_typecode(void); /* Type code */

DDS_SEQUENCE(std_msgs_msg_dds__String__cSeq, std_msgs_msg_dds__String__c);

NDDSUSERDllExport
RTIBool std_msgs_msg_dds__String__c_initialize(
    std_msgs_msg_dds__String__c* self);

NDDSUSERDllExport
RTIBool std_msgs_msg_dds__String__c_initialize_ex(
    std_msgs_msg_dds__String__c* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool std_msgs_msg_dds__String__c_initialize_w_params(
    std_msgs_msg_dds__String__c* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
void std_msgs_msg_dds__String__c_finalize(
    std_msgs_msg_dds__String__c* self);

NDDSUSERDllExport
void std_msgs_msg_dds__String__c_finalize_ex(
    std_msgs_msg_dds__String__c* self,RTIBool deletePointers);

NDDSUSERDllExport
void std_msgs_msg_dds__String__c_finalize_w_params(
    std_msgs_msg_dds__String__c* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void std_msgs_msg_dds__String__c_finalize_optional_members(
    std_msgs_msg_dds__String__c* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool std_msgs_msg_dds__String__c_copy(
    std_msgs_msg_dds__String__c* dst,
    const std_msgs_msg_dds__String__c* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* stringImpl */

