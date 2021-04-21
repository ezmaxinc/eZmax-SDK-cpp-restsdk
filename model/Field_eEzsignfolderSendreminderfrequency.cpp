/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Field_eEzsignfolderSendreminderfrequency.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Field_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency()
{
}

Field_eEzsignfolderSendreminderfrequency::~Field_eEzsignfolderSendreminderfrequency()
{
}

void Field_eEzsignfolderSendreminderfrequency::validate()
{
    // TODO: implement validation
}

web::json::value Field_eEzsignfolderSendreminderfrequency::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_NONE) val = web::json::value::string(U(None));
    if (m_value == eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_DAILY) val = web::json::value::string(U(Daily));
    if (m_value == eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_WEEKLY) val = web::json::value::string(U(Weekly));

    return val;
}

bool Field_eEzsignfolderSendreminderfrequency::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t(None)) m_value = eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_NONE;
    if (s == utility::conversions::to_string_t(Daily)) m_value = eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_DAILY;
    if (s == utility::conversions::to_string_t(Weekly)) m_value = eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_WEEKLY;
    return true;
}

void Field_eEzsignfolderSendreminderfrequency::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_NONE) s = utility::conversions::to_string_t(None);
    if (m_value == eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_DAILY) s = utility::conversions::to_string_t(Daily);
    if (m_value == eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_WEEKLY) s = utility::conversions::to_string_t(Weekly);

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool Field_eEzsignfolderSendreminderfrequency::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eField_eEzsignfolderSendreminderfrequency v;

        
        if (s == utility::conversions::to_string_t(None)) v = eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_NONE;
        if (s == utility::conversions::to_string_t(Daily)) v = eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_DAILY;
        if (s == utility::conversions::to_string_t(Weekly)) v = eField_eEzsignfolderSendreminderfrequency::Field_eEzsignfolderSendreminderfrequency_WEEKLY;

        setValue(v);
    }
    return ok;
}

Field_eEzsignfolderSendreminderfrequency::eField_eEzsignfolderSendreminderfrequency Field_eEzsignfolderSendreminderfrequency::getValue() const
{
   return m_value;
}

void Field_eEzsignfolderSendreminderfrequency::setValue(Field_eEzsignfolderSendreminderfrequency::eField_eEzsignfolderSendreminderfrequency const value)
{
   m_value = value;
}


}
}
}
}


