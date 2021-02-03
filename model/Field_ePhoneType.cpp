/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
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

    
    if (m_value == eField_ePhoneType::Field_ePhoneType_LOCAL) val = web::json::value::string(U("Local"));
    if (m_value == eField_ePhoneType::Field_ePhoneType_INTERNATIONAL) val = web::json::value::string(U("International"));

    return val;
}

bool Field_ePhoneType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("Local")) m_value = eField_ePhoneType::Field_ePhoneType_LOCAL;
    if (s == utility::conversions::to_string_t("International")) m_value = eField_ePhoneType::Field_ePhoneType_INTERNATIONAL;
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

    
    if (m_value == eField_ePhoneType::Field_ePhoneType_LOCAL) s = utility::conversions::to_string_t("Local");
    if (m_value == eField_ePhoneType::Field_ePhoneType_INTERNATIONAL) s = utility::conversions::to_string_t("International");

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

        
        if (s == utility::conversions::to_string_t("Local")) v = eField_ePhoneType::Field_ePhoneType_LOCAL;
        if (s == utility::conversions::to_string_t("International")) v = eField_ePhoneType::Field_ePhoneType_INTERNATIONAL;

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


