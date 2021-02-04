/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
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


