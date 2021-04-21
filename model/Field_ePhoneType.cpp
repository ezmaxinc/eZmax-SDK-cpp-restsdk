/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Field_ePhoneType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Field_ePhoneType::Field_ePhoneType()
{
}

Field_ePhoneType::~Field_ePhoneType()
{
}

void Field_ePhoneType::validate()
{
    // TODO: implement validation
}

web::json::value Field_ePhoneType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eField_ePhoneType::Field_ePhoneType_LOCAL) val = web::json::value::string(U(Local));
    if (m_value == eField_ePhoneType::Field_ePhoneType_INTERNATIONAL) val = web::json::value::string(U(International));

    return val;
}

bool Field_ePhoneType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(Local)) m_value = eField_ePhoneType::Field_ePhoneType_LOCAL;
    if (s == utility::conversions::to_string_t(International)) m_value = eField_ePhoneType::Field_ePhoneType_INTERNATIONAL;
    return true;
}

void Field_ePhoneType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eField_ePhoneType::Field_ePhoneType_LOCAL) s = utility::conversions::to_string_t(Local);
    if (m_value == eField_ePhoneType::Field_ePhoneType_INTERNATIONAL) s = utility::conversions::to_string_t(International);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool Field_ePhoneType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eField_ePhoneType v;

        
        if (s == utility::conversions::to_string_t(Local)) v = eField_ePhoneType::Field_ePhoneType_LOCAL;
        if (s == utility::conversions::to_string_t(International)) v = eField_ePhoneType::Field_ePhoneType_INTERNATIONAL;

        setValue(v);
    }
    return ok;
}

Field_ePhoneType::eField_ePhoneType Field_ePhoneType::getValue() const
{
   return m_value;
}

void Field_ePhoneType::setValue(Field_ePhoneType::eField_ePhoneType const value)
{
   m_value = value;
}


}
}
}
}


