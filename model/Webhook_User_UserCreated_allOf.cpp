/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.44
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Webhook_User_UserCreated_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Webhook_User_UserCreated_allOf::Webhook_User_UserCreated_allOf()
{
    m_ObjUserIsSet = false;
}

Webhook_User_UserCreated_allOf::~Webhook_User_UserCreated_allOf()
{
}

void Webhook_User_UserCreated_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Webhook_User_UserCreated_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjUserIsSet)
    {
        val[utility::conversions::to_string_t("objUser")] = ModelBase::toJson(m_ObjUser);
    }

    return val;
}

bool Webhook_User_UserCreated_allOf::fromJson(const web::json::value& val)
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
    return ok;
}

void Webhook_User_UserCreated_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool Webhook_User_UserCreated_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::shared_ptr<User_Response> Webhook_User_UserCreated_allOf::getObjUser() const
{
    return m_ObjUser;
}

void Webhook_User_UserCreated_allOf::setObjUser(const std::shared_ptr<User_Response>& value)
{
    m_ObjUser = value;
    m_ObjUserIsSet = true;
}

bool Webhook_User_UserCreated_allOf::objUserIsSet() const
{
    return m_ObjUserIsSet;
}

void Webhook_User_UserCreated_allOf::unsetObjUser()
{
    m_ObjUserIsSet = false;
}
}
}
}
}


