

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from string.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>
#include "string.hpp"
#include "stringImplPlugin.h"

#include <rti/util/ostream_operators.hpp>

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            // ---- String_: 

            String_::String_() {
            }   

            String_::String_ (
                const dds::core::string& data__param)
                :
                    m_data__( data__param ) {
            }
            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            String_::String_(String_&& other_) OMG_NOEXCEPT  :m_data__ (std::move(other_.m_data__))
            {
            } 

            String_& String_::operator=(String_&&  other_) OMG_NOEXCEPT {
                String_ tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void String_::swap(String_& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_data__, other_.m_data__);
            }  

            bool String_::operator == (const String_& other_) const {
                if (m_data__ != other_.m_data__) {
                    return false;
                }
                return true;
            }
            bool String_::operator != (const String_& other_) const {
                return !this->operator ==(other_);
            }

            // --- Getters and Setters: -------------------------------------------------
            dds::core::string& std_msgs::msg::dds_::String_::data_() OMG_NOEXCEPT {
                return m_data__;
            }

            const dds::core::string& std_msgs::msg::dds_::String_::data_() const OMG_NOEXCEPT {
                return m_data__;
            }

            void std_msgs::msg::dds_::String_::data_(const dds::core::string& value) {
                m_data__ = value;
            }

            std::ostream& operator << (std::ostream& o,const String_& sample)
            {
                rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "data_: " << sample.data_() ;
                o <<"]";
                return o;
            }

        } // namespace dds_  
    } // namespace msg  
} // namespace std_msgs  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        const dds::core::xtypes::StructType& dynamic_type<std_msgs::msg::dds_::String_>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(std_msgs_msg_dds__String__c_get_typecode())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<std_msgs::msg::dds_::String_>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name){

            rti::domain::register_type_plugin(
                participant,
                type_name,
                std_msgs_msg_dds__String__cPlugin_new,
                std_msgs_msg_dds__String__cPlugin_delete);
        }

        void topic_type_support<std_msgs::msg::dds_::String_>::initialize_sample(std_msgs::msg::dds_::String_& sample){

            std_msgs_msg_dds__String__c* native_sample=reinterpret_cast<std_msgs_msg_dds__String__c*> (&sample);

            struct DDS_TypeDeallocationParams_t deAllocParams = {RTI_FALSE, RTI_FALSE};
            std_msgs_msg_dds__String__c_finalize_w_params(native_sample,&deAllocParams);

            struct DDS_TypeAllocationParams_t allocParams = {RTI_FALSE, RTI_FALSE, RTI_TRUE}; 
            RTIBool ok=std_msgs_msg_dds__String__c_initialize_w_params(native_sample,&allocParams);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to initialize_w_params");

        } 

        std::vector<char>& topic_type_support<std_msgs::msg::dds_::String_>::to_cdr_buffer(
            std::vector<char>& buffer, const std_msgs::msg::dds_::String_& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = std_msgs_msg_dds__String__cPlugin_serialize_to_cdr_buffer(
                NULL, &length,reinterpret_cast<const std_msgs_msg_dds__String__c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = std_msgs_msg_dds__String__cPlugin_serialize_to_cdr_buffer(
                &buffer[0], &length, reinterpret_cast<const std_msgs_msg_dds__String__c*>(&sample));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;

        }

        void topic_type_support<std_msgs::msg::dds_::String_>::from_cdr_buffer(std_msgs::msg::dds_::String_& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = std_msgs_msg_dds__String__cPlugin_deserialize_from_cdr_buffer(
                reinterpret_cast<std_msgs_msg_dds__String__c*> (&sample), &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to create std_msgs::msg::dds_::String_ from cdr buffer");
        }

    }
}  

