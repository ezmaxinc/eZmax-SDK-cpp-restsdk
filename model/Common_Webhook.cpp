/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Common_Webhook.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_Webhook::Common_Webhook()
{
    m_ObjWebhookIsSet = false;
    m_A_objAttemptIsSet = false;
}

Common_Webhook::~Common_Webhook()
{
}

void Common_Webhook::validate()
{
    // TODO: implement validation
}

web::json::value Common_Webhook::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjWebhookIsSet)
    {
        val[utility::conversions::to_string_t("objWebhook")] = ModelBase::toJson(m_ObjWebhook);
    }
    if(m_A_objAttemptIsSet)
    {
        val[utility::conversions::to_string_t("a_objAttempt")] = ModelBase::toJson(m_A_objAttempt);
    }

    return val;
}

bool Common_Webhook::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objWebhook")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objWebhook"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Webhook_Response> refVal_objWebhook;
            ok &= ModelBase::fromJson(fieldValue, refVal_objWebhook);
            setObjWebhook(refVal_objWebhook);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_objAttempt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_objAttempt"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Attempt_Response>> refVal_a_objAttempt;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_objAttempt);
            setAObjAttempt(refVal_a_objAttempt);
        }
    }
    return ok;
}

void Common_Webhook::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjWebhookIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objWebhook"), m_ObjWebhook));
    }
    if(m_A_objAttemptIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_objAttempt"), m_A_objAttempt));
    }
}

bool Common_Webhook::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objWebhook")))
    {
        std::shared_ptr<Webhook_Response> refVal_objWebhook;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objWebhook")), refVal_objWebhook );
        setObjWebhook(refVal_objWebhook);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_objAttempt")))
    {
        std::vector<std::shared_ptr<Attempt_Response>> refVal_a_objAttempt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_objAttempt")), refVal_a_objAttempt );
        setAObjAttempt(refVal_a_objAttempt);
    }
    return ok;
}

std::shared_ptr<Webhook_Response> Common_Webhook::getObjWebhook() const
{
    return m_ObjWebhook;
}

void Common_Webhook::setObjWebhook(const std::shared_ptr<Webhook_Response>& value)
{
    m_ObjWebhook = value;
    m_ObjWebhookIsSet = true;
}

bool Common_Webhook::objWebhookIsSet() const
{
    return m_ObjWebhookIsSet;
}

void Common_Webhook::unsetObjWebhook()
{
    m_ObjWebhookIsSet = false;
}
std::vector<std::shared_ptr<Attempt_Response>>& Common_Webhook::getAObjAttempt()
{
    return m_A_objAttempt;
}

void Common_Webhook::setAObjAttempt(const std::vector<std::shared_ptr<Attempt_Response>>& value)
{
    m_A_objAttempt = value;
    m_A_objAttemptIsSet = true;
}

bool Common_Webhook::aObjAttemptIsSet() const
{
    return m_A_objAttemptIsSet;
}

void Common_Webhook::unsetA_objAttempt()
{
    m_A_objAttemptIsSet = false;
}
}
}
}
}


