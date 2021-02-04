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



#include "Ezsigndocument_getDownloadUrl_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_getDownloadUrl_v1_Response_mPayload::Ezsigndocument_getDownloadUrl_v1_Response_mPayload()
{
    m_SDownloadUrl = utility::conversions::to_string_t("");
    m_SDownloadUrlIsSet = false;
}

Ezsigndocument_getDownloadUrl_v1_Response_mPayload::~Ezsigndocument_getDownloadUrl_v1_Response_mPayload()
{
}

void Ezsigndocument_getDownloadUrl_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_getDownloadUrl_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SDownloadUrlIsSet)
    {
        val[utility::conversions::to_string_t("sDownloadUrl")] = ModelBase::toJson(m_SDownloadUrl);
    }

    return val;
}

bool Ezsigndocument_getDownloadUrl_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sDownloadUrl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sDownloadUrl"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sDownloadUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_sDownloadUrl);
            setSDownloadUrl(refVal_sDownloadUrl);
        }
    }
    return ok;
}

void Ezsigndocument_getDownloadUrl_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SDownloadUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sDownloadUrl"), m_SDownloadUrl));
    }
}

bool Ezsigndocument_getDownloadUrl_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sDownloadUrl")))
    {
        utility::string_t refVal_sDownloadUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sDownloadUrl")), refVal_sDownloadUrl );
        setSDownloadUrl(refVal_sDownloadUrl);
    }
    return ok;
}

utility::string_t Ezsigndocument_getDownloadUrl_v1_Response_mPayload::getSDownloadUrl() const
{
    return m_SDownloadUrl;
}

void Ezsigndocument_getDownloadUrl_v1_Response_mPayload::setSDownloadUrl(const utility::string_t& value)
{
    m_SDownloadUrl = value;
    m_SDownloadUrlIsSet = true;
}

bool Ezsigndocument_getDownloadUrl_v1_Response_mPayload::sDownloadUrlIsSet() const
{
    return m_SDownloadUrlIsSet;
}

void Ezsigndocument_getDownloadUrl_v1_Response_mPayload::unsetSDownloadUrl()
{
    m_SDownloadUrlIsSet = false;
}
}
}
}
}


