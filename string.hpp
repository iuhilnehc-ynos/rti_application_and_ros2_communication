

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from string.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef string_1574212639_hpp
#define string_1574212639_hpp

#include <iosfwd>
#include "stringImpl.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            class NDDSUSERDllExport String_ {

              public:
                String_();

                explicit String_(
                    const dds::core::string& data__param);

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                String_ (String_&&) = default;
                String_& operator=(String_&&) = default;
                String_& operator=(const String_&) = default;
                String_(const String_&) = default;
                #else
                String_(String_&& other_) OMG_NOEXCEPT;  
                String_& operator=(String_&&  other_) OMG_NOEXCEPT;
                #endif
                #endif 

                dds::core::string& data_() OMG_NOEXCEPT; 
                const dds::core::string& data_() const OMG_NOEXCEPT;
                void data_(const dds::core::string& value);

                bool operator == (const String_& other_) const;
                bool operator != (const String_& other_) const;

                void swap(String_& other_) OMG_NOEXCEPT;

              private:

                dds::core::string m_data__;

            };

            inline void swap(String_& a, String_& b)  OMG_NOEXCEPT 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o,const String_& sample);

        } // namespace dds_  
    } // namespace msg  
} // namespace std_msgs  
namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<std_msgs::msg::dds_::String_> {
            NDDSUSERDllExport static std::string value() {
                return "std_msgs::msg::dds_::String_";
            }
        };

        template<>
        struct is_topic_type<std_msgs::msg::dds_::String_> : public dds::core::true_type {};

        template<>
        struct topic_type_support<std_msgs::msg::dds_::String_> {

            NDDSUSERDllExport static void initialize_sample(std_msgs::msg::dds_::String_& sample);

            NDDSUSERDllExport static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const std_msgs::msg::dds_::String_& sample);

            NDDSUSERDllExport static void from_cdr_buffer(std_msgs::msg::dds_::String_& sample, const std::vector<char>& buffer);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::NON_STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<std_msgs::msg::dds_::String_> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template<>
        struct impl_type<std_msgs::msg::dds_::String_> {
            typedef std_msgs_msg_dds__String__c type;
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // string_1574212639_hpp

