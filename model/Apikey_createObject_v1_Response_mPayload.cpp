/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.37
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Apikey_createObject_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Apikey_createObject_v1_Response_mPayload::Apikey_createObject_v1_Response_mPayload()
{
    m_A_objApikeyIsSet = false;
}

Apikey_createObject_v1_Response_mPayload::~Apikey_createObject_v1_Response_mPayload()
{
}

void Apikey_createObject_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Apikey_createObject_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_A_objApikeyIsSet)
    {
        val[utility::conversions::to_string_t("a_objApikey")] = ModelBase::toJson(m_A_objApikey);
    }

    return val;
}

bool Apikey_createObject_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("a_objApikey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_objApikey"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Apikey_Response>> refVal_a_objApikey;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_objApikey);
            setAObjApikey(refVal_a_objApikey);
        }
    }
    return ok;
}

void Apikey_createObject_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_A_objApikeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_objApikey"), m_A_objApikey));
    }
}

bool Apikey_createObject_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("a_objApikey")))
    {
        std::vector<std::shared_ptr<Apikey_Response>> refVal_a_objApikey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_objApikey")), refVal_a_objApikey );
        setAObjApikey(refVal_a_objApikey);
    }
    return ok;
}

std::vector<std::shared_ptr<Apikey_Response>>& Apikey_createObject_v1_Response_mPayload::getAObjApikey()
{
    return m_A_objApikey;
}

void Apikey_createObject_v1_Response_mPayload::setAObjApikey(const std::vector<std::shared_ptr<Apikey_Response>>& value)
{
    m_A_objApikey = value;
    m_A_objApikeyIsSet = true;
}

bool Apikey_createObject_v1_Response_mPayload::aObjApikeyIsSet() const
{
    return m_A_objApikeyIsSet;
}

void Apikey_createObject_v1_Response_mPayload::unsetA_objApikey()
{
    m_A_objApikeyIsSet = false;
}
}
}
}
}


