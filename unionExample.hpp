

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from unionExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef unionExample_10032775_hpp
#define unionExample_10032775_hpp

#include <iosfwd>

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
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
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

class NDDSUSERDllExport PrimitiveUnion {

  public:
    PrimitiveUnion();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    PrimitiveUnion (PrimitiveUnion&&) = default;
    PrimitiveUnion& operator=(PrimitiveUnion&&) = default;
    PrimitiveUnion& operator=(const PrimitiveUnion&) = default;
    PrimitiveUnion(const PrimitiveUnion&) = default;
    #else
    PrimitiveUnion(PrimitiveUnion&& other_) OMG_NOEXCEPT;  
    PrimitiveUnion& operator=(PrimitiveUnion&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int32_t& _d() ; 
    const int32_t& _d() const ;
    void _d(int32_t value);

    double& dbl() ; 
    const double& dbl() const ;
    void dbl(double value);

    float& flt() ; 
    const float& flt() const ;
    void flt(float value);

    int32_t& lng() ; 
    const int32_t& lng() const ;
    void lng(int32_t value);

    bool operator == (const PrimitiveUnion& other_) const;
    bool operator != (const PrimitiveUnion& other_) const;

    static int32_t default_discriminator();  

    void swap(PrimitiveUnion& other_) OMG_NOEXCEPT ;

  private:

    int32_t m_d_;
    struct NDDSUSERDllExport Union_ {
        double m_dbl_;
        float m_flt_;
        int32_t m_lng_;
        Union_();
        Union_(
            double dbl,
            float flt,
            int32_t lng);
    };
    Union_ m_u_;

};

inline void swap(PrimitiveUnion& a, PrimitiveUnion& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PrimitiveUnion& sample);

class NDDSUSERDllExport myStruct {

  public:
    myStruct();

    explicit myStruct(
        const PrimitiveUnion& theUnion);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    myStruct (myStruct&&) = default;
    myStruct& operator=(myStruct&&) = default;
    myStruct& operator=(const myStruct&) = default;
    myStruct(const myStruct&) = default;
    #else
    myStruct(myStruct&& other_) OMG_NOEXCEPT;  
    myStruct& operator=(myStruct&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    PrimitiveUnion& theUnion() OMG_NOEXCEPT; 
    const PrimitiveUnion& theUnion() const OMG_NOEXCEPT;
    void theUnion(const PrimitiveUnion& value);

    bool operator == (const myStruct& other_) const;
    bool operator != (const myStruct& other_) const;

    void swap(myStruct& other_) OMG_NOEXCEPT ;

  private:

    PrimitiveUnion m_theUnion_;

};

inline void swap(myStruct& a, myStruct& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const myStruct& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<PrimitiveUnion> {
            NDDSUSERDllExport static std::string value() {
                return "PrimitiveUnion";
            }
        };

        template<>
        struct is_topic_type<PrimitiveUnion> : public dds::core::true_type {};

        template<>
        struct topic_type_support<PrimitiveUnion> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const PrimitiveUnion& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(PrimitiveUnion& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(PrimitiveUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(PrimitiveUnion& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<myStruct> {
            NDDSUSERDllExport static std::string value() {
                return "myStruct";
            }
        };

        template<>
        struct is_topic_type<myStruct> : public dds::core::true_type {};

        template<>
        struct topic_type_support<myStruct> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const myStruct& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(myStruct& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(myStruct& sample);

            NDDSUSERDllExport 
            static void allocate_sample(myStruct& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<PrimitiveUnion> {
            typedef dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility<PrimitiveUnion> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<myStruct> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<myStruct> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // unionExample_10032775_hpp

