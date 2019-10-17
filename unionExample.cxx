

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from unionExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "unionExample.hpp"
#include "unionExamplePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- PrimitiveUnion: 

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
PrimitiveUnion::PrimitiveUnion(PrimitiveUnion&& other_) OMG_NOEXCEPT 
{
    _d(std::move(other_._d()));
    switch(rti::topic::cdr::integer_case(_d())){
        case 1:
        {  
            dbl( std::move(other_.dbl()));
        } break;
        case 2:
        {  
            flt( std::move(other_.flt()));
        } break;
        default:
        {  
            lng( std::move(other_.lng()));
        } ;

    }

}

PrimitiveUnion& PrimitiveUnion::operator=(PrimitiveUnion&&  other_) OMG_NOEXCEPT {
    PrimitiveUnion tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif 

PrimitiveUnion::Union_::Union_() :
    m_dbl_ (0.0) ,
    m_flt_ (0.0f) ,
    m_lng_ (0)  {
}

PrimitiveUnion::Union_::Union_(
    double dbl,
    float flt,
    int32_t lng)
    :
        m_dbl_( dbl ),
        m_flt_( flt ),
        m_lng_( lng ) {
}

PrimitiveUnion::PrimitiveUnion() :m_d_(default_discriminator())
{
}

void PrimitiveUnion::swap(PrimitiveUnion& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap (m_d_,other_.m_d_);
    switch(rti::topic::cdr::integer_case(_d())){
        case 1:
        {  
            swap(m_u_.m_dbl_, other_.m_u_.m_dbl_);
        } break;
        case 2:
        {  
            swap(m_u_.m_flt_, other_.m_u_.m_flt_);
        } break;
        default:
        {  
            swap(m_u_.m_lng_, other_.m_u_.m_lng_);
        } ;

    }
    if (_d() != other_._d()){
        switch(rti::topic::cdr::integer_case(other_._d())){
            case 1:
            {  
                swap(m_u_.m_dbl_, other_.m_u_.m_dbl_);
            } break;
            case 2:
            {  
                swap(m_u_.m_flt_, other_.m_u_.m_flt_);
            } break;
            default:
            {  
                swap(m_u_.m_lng_, other_.m_u_.m_lng_);
            } ;

        }
    }
}  

bool PrimitiveUnion::operator == (const PrimitiveUnion& other_) const {
    if (_d() != other_._d()){
        return false;
    }
    switch(rti::topic::cdr::integer_case(_d())){
        case 1:
        {  
            if ( m_u_.m_dbl_ != other_.m_u_.m_dbl_) {
                return false;
            }
        } break ;
        case 2:
        {  
            if ( m_u_.m_flt_ != other_.m_u_.m_flt_) {
                return false;
            }
        } break ;
        default:
        {  
            if ( m_u_.m_lng_ != other_.m_u_.m_lng_) {
                return false;
            }
        } ;
    }
    return true;
}
bool PrimitiveUnion::operator != (const PrimitiveUnion& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
int32_t& PrimitiveUnion::_d()  {
    return m_d_;
}

const int32_t& PrimitiveUnion::_d() const  {
    return m_d_;
}

void PrimitiveUnion::_d(int32_t value) {
    m_d_ = value;
}

double& PrimitiveUnion::dbl()  {
    if ( _d() != 1) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::dbl not selected by the discriminator" );
    }
    return m_u_.m_dbl_;
}

const double& PrimitiveUnion::dbl() const  {
    if ( _d() != 1) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::dbl not selected by the discriminator" );
    }
    return m_u_.m_dbl_;
}

void PrimitiveUnion::dbl(double value) {
    m_u_.m_dbl_ = value;
    m_d_= 1;
}

float& PrimitiveUnion::flt()  {
    if ( _d() != 2) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::flt not selected by the discriminator" );
    }
    return m_u_.m_flt_;
}

const float& PrimitiveUnion::flt() const  {
    if ( _d() != 2) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::flt not selected by the discriminator" );
    }
    return m_u_.m_flt_;
}

void PrimitiveUnion::flt(float value) {
    m_u_.m_flt_ = value;
    m_d_= 2;
}

int32_t& PrimitiveUnion::lng()  {
    if (!(_d() != 1 &&
    _d() != 2)) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::lng not selected by the discriminator" );
    }
    return m_u_.m_lng_;
}

const int32_t& PrimitiveUnion::lng() const  {
    if (!(_d() != 1 &&
    _d() != 2)) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::lng not selected by the discriminator" );
    }
    return m_u_.m_lng_;
}

void PrimitiveUnion::lng(int32_t value) {
    if (!(_d() != 1 &&
    _d() != 2)) {
        throw dds::core::PreconditionNotMetError(
            "PrimitiveUnion::lng not selected by the discriminator" );
    }
    m_u_.m_lng_ = value;
}

std::ostream& operator << (std::ostream& o,const PrimitiveUnion& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "_d: " << sample._d() <<", ";
    switch(rti::topic::cdr::integer_case(sample._d())){
        case 1:
        {  
            o << "dbl: " << std::setprecision(15) <<sample.dbl()<<", ";
        } break ;
        case 2:
        {  
            o << "flt: " << std::setprecision(9) <<sample.flt()<<", ";
        } break ;
        default:
        {  
            o << "lng: " << sample.lng() ;        } ;

    }
    o <<"]";
    return o;
}

int32_t PrimitiveUnion::default_discriminator() {
    return 0;
}  

// ---- myStruct: 

myStruct::myStruct()  {
}   

myStruct::myStruct (
    const PrimitiveUnion& theUnion)
    :
        m_theUnion_( theUnion ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
myStruct::myStruct(myStruct&& other_) OMG_NOEXCEPT  :m_theUnion_ (std::move(other_.m_theUnion_))
{
} 

myStruct& myStruct::operator=(myStruct&&  other_) OMG_NOEXCEPT {
    myStruct tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void myStruct::swap(myStruct& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_theUnion_, other_.m_theUnion_);
}  

bool myStruct::operator == (const myStruct& other_) const {
    if (m_theUnion_ != other_.m_theUnion_) {
        return false;
    }
    return true;
}
bool myStruct::operator != (const myStruct& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
PrimitiveUnion& myStruct::theUnion() OMG_NOEXCEPT {
    return m_theUnion_;
}

const PrimitiveUnion& myStruct::theUnion() const OMG_NOEXCEPT {
    return m_theUnion_;
}

void myStruct::theUnion(const PrimitiveUnion& value) {
    m_theUnion_ = value;
}

std::ostream& operator << (std::ostream& o,const myStruct& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "theUnion: " << sample.theUnion() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<PrimitiveUnion> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member PrimitiveUnion_g_tc_members[3]=
                {

                    {
                        (char *)"dbl",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        1, /* First label cpp03stl 1 */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"flt",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        2, /* First label cpp03stl 2 */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"lng",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        RTI_CDR_TYPE_CODE_UNION_DEFAULT_LABEL, /* First label */
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode PrimitiveUnion_g_tc =
                {{
                        DDS_TK_UNION,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        2, /*Ignored*/
                        (char *)"PrimitiveUnion", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PrimitiveUnion_g_tc_members, /* Members */
                        DDS_VM_NONE   /* Type Modifier */        
                    }}; /* Type code for PrimitiveUnion*/

                if (is_initialized) {
                    return &PrimitiveUnion_g_tc;
                }

                PrimitiveUnion_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                PrimitiveUnion_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                PrimitiveUnion_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                /* Discriminator type code */
                PrimitiveUnion_g_tc._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &PrimitiveUnion_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::UnionType& dynamic_type<PrimitiveUnion>::get()
        {
            return static_cast<const dds::core::xtypes::UnionType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<PrimitiveUnion>::get())));
        }

        template<>
        struct native_type_code<myStruct> {
            static DDS_TypeCode * get()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member myStruct_g_tc_members[1]=
                {

                    {
                        (char *)"theUnion",/* Member name */
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

                static DDS_TypeCode myStruct_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"myStruct", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        myStruct_g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for myStruct*/

                if (is_initialized) {
                    return &myStruct_g_tc;
                }

                myStruct_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::dynamic_type< PrimitiveUnion>::get().native();

                is_initialized = RTI_TRUE;

                return &myStruct_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<myStruct>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<myStruct>::get())));
        }

    }
}  

namespace dds { 
    namespace topic {
        void topic_type_support<PrimitiveUnion>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                PrimitiveUnionPlugin_new,
                PrimitiveUnionPlugin_delete);
        }

        std::vector<char>& topic_type_support<PrimitiveUnion>::to_cdr_buffer(
            std::vector<char>& buffer, const PrimitiveUnion& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = PrimitiveUnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = PrimitiveUnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<PrimitiveUnion>::from_cdr_buffer(PrimitiveUnion& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = PrimitiveUnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create PrimitiveUnion from cdr buffer");
        }

        void topic_type_support<PrimitiveUnion>::reset_sample(PrimitiveUnion& sample) 
        {
            sample._d() = 1;
            rti::topic::reset_sample(sample.dbl());
            sample._d() = 2;
            rti::topic::reset_sample(sample.flt());
            sample._d() = PrimitiveUnion::default_discriminator();
            rti::topic::reset_sample(sample.lng());

            sample._d() = PrimitiveUnion::default_discriminator();
        }

        void topic_type_support<PrimitiveUnion>::allocate_sample(PrimitiveUnion& sample, int, int) 
        {

            sample._d() = PrimitiveUnion::default_discriminator();
        }

        void topic_type_support<myStruct>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                myStructPlugin_new,
                myStructPlugin_delete);
        }

        std::vector<char>& topic_type_support<myStruct>::to_cdr_buffer(
            std::vector<char>& buffer, const myStruct& sample)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = myStructPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = myStructPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<myStruct>::from_cdr_buffer(myStruct& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = myStructPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create myStruct from cdr buffer");
        }

        void topic_type_support<myStruct>::reset_sample(myStruct& sample) 
        {
            rti::topic::reset_sample(sample.theUnion());
        }

        void topic_type_support<myStruct>::allocate_sample(myStruct& sample, int, int) 
        {
            rti::topic::allocate_sample(sample.theUnion(),  -1, -1);
        }

    }
}  

