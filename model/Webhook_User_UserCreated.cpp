/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Webhook_User_UserCreated.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Webhook_User_UserCreated::Webhook_User_UserCreated()
{
    m_ObjUserIsSet = false;
    m_ObjWebhookIsSet = false;
    m_A_objAttemptIsSet = false;
}

Webhook_User_UserCreated::~Webhook_User_UserCreated()
{
}

void Webhook_User_UserCreated::validate()
{
    // TODO: implement validation
}

web::json::value Webhook_User_UserCreated::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjUserIsSet)
    {
        val[utility::conversions::to_string_t("objUser")] = ModelBase::toJson(m_ObjUser);
    }
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

bool Webhook_User_UserCreated::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objUser")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objUser"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<User_Response> refVal_objUser;
            ok &= ModelBase::fromJson(fieldValue, refVal_objUser);
            setObjUser(refVal_objUser);
        }
    }
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

void Webhook_User_UserCreated::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjUserIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objUser"), m_ObjUser));
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

bool Webhook_User_UserCreated::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objUser")))
    {
        std::shared_ptr<User_Response> refVal_objUser;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objUser")), refVal_objUser );
        setObjUser(refVal_objUser);
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

std::shared_ptr<User_Response> Webhook_User_UserCreated::getObjUser() const
{
    return m_ObjUser;
}

void Webhook_User_UserCreated::setObjUser(const std::shared_ptr<User_Response>& value)
{
    m_ObjUser = value;
    m_ObjUserIsSet = true;
}

bool Webhook_User_UserCreated::objUserIsSet() const
{
    return m_ObjUserIsSet;
}

void Webhook_User_UserCreated::unsetObjUser()
{
    m_ObjUserIsSet = false;
}
std::shared_ptr<Webhook_Response> Webhook_User_UserCreated::getObjWebhook() const
{
    return m_ObjWebhook;
}

void Webhook_User_UserCreated::setObjWebhook(const std::shared_ptr<Webhook_Response>& value)
{
    m_ObjWebhook = value;
    m_ObjWebhookIsSet = true;
}

bool Webhook_User_UserCreated::objWebhookIsSet() const
{
    return m_ObjWebhookIsSet;
}

void Webhook_User_UserCreated::unsetObjWebhook()
{
    m_ObjWebhookIsSet = false;
}
std::vector<std::shared_ptr<Attempt_Response>>& Webhook_User_UserCreated::getAObjAttempt()
{
    return m_A_objAttempt;
}

void Webhook_User_UserCreated::setAObjAttempt(const std::vector<std::shared_ptr<Attempt_Response>>& value)
{
    m_A_objAttempt = value;
    m_A_objAttemptIsSet = true;
}

bool Webhook_User_UserCreated::aObjAttemptIsSet() const
{
    return m_A_objAttemptIsSet;
}

void Webhook_User_UserCreated::unsetA_objAttempt()
{
    m_A_objAttemptIsSet = false;
}
}
}
}
}


