

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from stringImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "stringImpl.h"

/* ========================================================================= */
const char *std_msgs_msg_dds__String__cTYPENAME = "std_msgs::msg::dds_::String_";

DDS_TypeCode* std_msgs_msg_dds__String__c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode std_msgs_msg_dds__String__c_g_tc_data__string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode_Member std_msgs_msg_dds__String__c_g_tc_members[1]=
    {

        {
            (char *)"data_",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode std_msgs_msg_dds__String__c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"std_msgs::msg::dds_::String_", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            std_msgs_msg_dds__String__c_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for std_msgs_msg_dds__String__c*/

    if (is_initialized) {
        return &std_msgs_msg_dds__String__c_g_tc;
    }

    std_msgs_msg_dds__String__c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&std_msgs_msg_dds__String__c_g_tc_data__string;

    is_initialized = RTI_TRUE;

    return &std_msgs_msg_dds__String__c_g_tc;
}

RTIBool std_msgs_msg_dds__String__c_initialize(
    std_msgs_msg_dds__String__c* sample) {
    return std_msgs_msg_dds__String__c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool std_msgs_msg_dds__String__c_initialize_ex(
    std_msgs_msg_dds__String__c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return std_msgs_msg_dds__String__c_initialize_w_params(
        sample,&allocParams);

}

RTIBool std_msgs_msg_dds__String__c_initialize_w_params(
    std_msgs_msg_dds__String__c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory){
        sample->data_= DDS_String_alloc ((255));
        if (sample->data_ == NULL) {
            return RTI_FALSE;
        }

    } else {
        if (sample->data_!= NULL) { 
            sample->data_[0] = '\0';
        }
    }

    return RTI_TRUE;
}

void std_msgs_msg_dds__String__c_finalize(
    std_msgs_msg_dds__String__c* sample)
{

    std_msgs_msg_dds__String__c_finalize_ex(sample,RTI_TRUE);
}

void std_msgs_msg_dds__String__c_finalize_ex(
    std_msgs_msg_dds__String__c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    std_msgs_msg_dds__String__c_finalize_w_params(
        sample,&deallocParams);
}

void std_msgs_msg_dds__String__c_finalize_w_params(
    std_msgs_msg_dds__String__c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->data_ != NULL) {
        DDS_String_free(sample->data_);
        sample->data_=NULL;

    }
}

void std_msgs_msg_dds__String__c_finalize_optional_members(
    std_msgs_msg_dds__String__c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool std_msgs_msg_dds__String__c_copy(
    std_msgs_msg_dds__String__c* dst,
    const std_msgs_msg_dds__String__c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyStringEx (
        &dst->data_, src->data_, 
        (255) + 1,RTI_TRUE)){
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'std_msgs_msg_dds__String__c' sequence class.
*/
#define T std_msgs_msg_dds__String__c
#define TSeq std_msgs_msg_dds__String__cSeq

#define T_initialize_w_params std_msgs_msg_dds__String__c_initialize_w_params

#define T_finalize_w_params   std_msgs_msg_dds__String__c_finalize_w_params
#define T_copy       std_msgs_msg_dds__String__c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

