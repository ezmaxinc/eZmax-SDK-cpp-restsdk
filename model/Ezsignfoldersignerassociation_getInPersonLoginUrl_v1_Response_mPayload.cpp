/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.43
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload()
{
    m_SLoginUrl = utility::conversions::to_string_t("");
    m_SLoginUrlIsSet = false;
}

Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::~Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload()
{
}

void Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SLoginUrlIsSet)
    {
        val[utility::conversions::to_string_t("sLoginUrl")] = ModelBase::toJson(m_SLoginUrl);
    }

    return val;
}

bool Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sLoginUrl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sLoginUrl"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sLoginUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_sLoginUrl);
            setSLoginUrl(refVal_sLoginUrl);
        }
    }
    return ok;
}

void Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SLoginUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sLoginUrl"), m_SLoginUrl));
    }
}

bool Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sLoginUrl")))
    {
        utility::string_t refVal_sLoginUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sLoginUrl")), refVal_sLoginUrl );
        setSLoginUrl(refVal_sLoginUrl);
    }
    return ok;
}

utility::string_t Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::getSLoginUrl() const
{
    return m_SLoginUrl;
}

void Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::setSLoginUrl(const utility::string_t& value)
{
    m_SLoginUrl = value;
    m_SLoginUrlIsSet = true;
}

bool Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::sLoginUrlIsSet() const
{
    return m_SLoginUrlIsSet;
}

void Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::unsetSLoginUrl()
{
    m_SLoginUrlIsSet = false;
}
}
}
}
}


