/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Field_eEzsigndocumentStep.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Field_eEzsigndocumentStep::Field_eEzsigndocumentStep()
{
}

Field_eEzsigndocumentStep::~Field_eEzsigndocumentStep()
{
}

void Field_eEzsigndocumentStep::validate()
{
    // TODO: implement validation
}

web::json::value Field_eEzsigndocumentStep::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSENT) val = web::json::value::string(U("Unsent"));
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSIGNED) val = web::json::value::string(U("Unsigned"));
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_PARTIALLYSIGNED) val = web::json::value::string(U("PartiallySigned"));
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_COMPLETED) val = web::json::value::string(U("Completed"));

    return val;
}

bool Field_eEzsigndocumentStep::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("Unsent")) m_value = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSENT;
    if (s == utility::conversions::to_string_t("Unsigned")) m_value = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSIGNED;
    if (s == utility::conversions::to_string_t("PartiallySigned")) m_value = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_PARTIALLYSIGNED;
    if (s == utility::conversions::to_string_t("Completed")) m_value = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_COMPLETED;
    return true;
}

void Field_eEzsigndocumentStep::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSENT) s = utility::conversions::to_string_t("Unsent");
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSIGNED) s = utility::conversions::to_string_t("Unsigned");
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_PARTIALLYSIGNED) s = utility::conversions::to_string_t("PartiallySigned");
    if (m_value == eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_COMPLETED) s = utility::conversions::to_string_t("Completed");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool Field_eEzsigndocumentStep::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eField_eEzsigndocumentStep v;

        
        if (s == utility::conversions::to_string_t("Unsent")) v = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSENT;
        if (s == utility::conversions::to_string_t("Unsigned")) v = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_UNSIGNED;
        if (s == utility::conversions::to_string_t("PartiallySigned")) v = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_PARTIALLYSIGNED;
        if (s == utility::conversions::to_string_t("Completed")) v = eField_eEzsigndocumentStep::Field_eEzsigndocumentStep_COMPLETED;

        setValue(v);
    }
    return ok;
}

Field_eEzsigndocumentStep::eField_eEzsigndocumentStep Field_eEzsigndocumentStep::getValue() const
{
   return m_value;
}

void Field_eEzsigndocumentStep::setValue(Field_eEzsigndocumentStep::eField_eEzsigndocumentStep const value)
{
   m_value = value;
}


}
}
}
}


