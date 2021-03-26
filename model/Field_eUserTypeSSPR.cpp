/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Field_eUserTypeSSPR.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Field_eUserTypeSSPR::Field_eUserTypeSSPR()
{
}

Field_eUserTypeSSPR::~Field_eUserTypeSSPR()
{
}

void Field_eUserTypeSSPR::validate()
{
    // TODO: implement validation
}

web::json::value Field_eUserTypeSSPR::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eField_eUserTypeSSPR::Field_eUserTypeSSPR_EZSIGNUSER) val = web::json::value::string(U(EzsignUser));
    if (m_value == eField_eUserTypeSSPR::Field_eUserTypeSSPR_NATIVE) val = web::json::value::string(U(Native));

    return val;
}

bool Field_eUserTypeSSPR::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(EzsignUser)) m_value = eField_eUserTypeSSPR::Field_eUserTypeSSPR_EZSIGNUSER;
    if (s == utility::conversions::to_string_t(Native)) m_value = eField_eUserTypeSSPR::Field_eUserTypeSSPR_NATIVE;
    return true;
}

void Field_eUserTypeSSPR::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eField_eUserTypeSSPR::Field_eUserTypeSSPR_EZSIGNUSER) s = utility::conversions::to_string_t(EzsignUser);
    if (m_value == eField_eUserTypeSSPR::Field_eUserTypeSSPR_NATIVE) s = utility::conversions::to_string_t(Native);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool Field_eUserTypeSSPR::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eField_eUserTypeSSPR v;

        
        if (s == utility::conversions::to_string_t(EzsignUser)) v = eField_eUserTypeSSPR::Field_eUserTypeSSPR_EZSIGNUSER;
        if (s == utility::conversions::to_string_t(Native)) v = eField_eUserTypeSSPR::Field_eUserTypeSSPR_NATIVE;

        setValue(v);
    }
    return ok;
}

Field_eUserTypeSSPR::eField_eUserTypeSSPR Field_eUserTypeSSPR::getValue() const
{
   return m_value;
}

void Field_eUserTypeSSPR::setValue(Field_eUserTypeSSPR::eField_eUserTypeSSPR const value)
{
   m_value = value;
}


}
}
}
}


