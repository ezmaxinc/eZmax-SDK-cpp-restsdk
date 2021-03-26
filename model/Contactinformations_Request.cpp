/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Contactinformations_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Contactinformations_Request::Contactinformations_Request()
{
    m_IAddressDefault = 0;
    m_IAddressDefaultIsSet = false;
    m_IPhoneDefault = 0;
    m_IPhoneDefaultIsSet = false;
    m_IEmailDefault = 0;
    m_IEmailDefaultIsSet = false;
    m_IWebsiteDefault = 0;
    m_IWebsiteDefaultIsSet = false;
}

Contactinformations_Request::~Contactinformations_Request()
{
}

void Contactinformations_Request::validate()
{
    // TODO: implement validation
}

web::json::value Contactinformations_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IAddressDefaultIsSet)
    {
        val[utility::conversions::to_string_t("iAddressDefault")] = ModelBase::toJson(m_IAddressDefault);
    }
    if(m_IPhoneDefaultIsSet)
    {
        val[utility::conversions::to_string_t("iPhoneDefault")] = ModelBase::toJson(m_IPhoneDefault);
    }
    if(m_IEmailDefaultIsSet)
    {
        val[utility::conversions::to_string_t("iEmailDefault")] = ModelBase::toJson(m_IEmailDefault);
    }
    if(m_IWebsiteDefaultIsSet)
    {
        val[utility::conversions::to_string_t("iWebsiteDefault")] = ModelBase::toJson(m_IWebsiteDefault);
    }

    return val;
}

bool Contactinformations_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iAddressDefault")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iAddressDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iAddressDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_iAddressDefault);
            setIAddressDefault(refVal_iAddressDefault);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iPhoneDefault")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iPhoneDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iPhoneDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_iPhoneDefault);
            setIPhoneDefault(refVal_iPhoneDefault);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEmailDefault")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEmailDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEmailDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEmailDefault);
            setIEmailDefault(refVal_iEmailDefault);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iWebsiteDefault")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iWebsiteDefault"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iWebsiteDefault;
            ok &= ModelBase::fromJson(fieldValue, refVal_iWebsiteDefault);
            setIWebsiteDefault(refVal_iWebsiteDefault);
        }
    }
    return ok;
}

void Contactinformations_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IAddressDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iAddressDefault"), m_IAddressDefault));
    }
    if(m_IPhoneDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iPhoneDefault"), m_IPhoneDefault));
    }
    if(m_IEmailDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEmailDefault"), m_IEmailDefault));
    }
    if(m_IWebsiteDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iWebsiteDefault"), m_IWebsiteDefault));
    }
}

bool Contactinformations_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("iAddressDefault")))
    {
        int32_t refVal_iAddressDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iAddressDefault")), refVal_iAddressDefault );
        setIAddressDefault(refVal_iAddressDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iPhoneDefault")))
    {
        int32_t refVal_iPhoneDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iPhoneDefault")), refVal_iPhoneDefault );
        setIPhoneDefault(refVal_iPhoneDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEmailDefault")))
    {
        int32_t refVal_iEmailDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEmailDefault")), refVal_iEmailDefault );
        setIEmailDefault(refVal_iEmailDefault);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iWebsiteDefault")))
    {
        int32_t refVal_iWebsiteDefault;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iWebsiteDefault")), refVal_iWebsiteDefault );
        setIWebsiteDefault(refVal_iWebsiteDefault);
    }
    return ok;
}

int32_t Contactinformations_Request::getIAddressDefault() const
{
    return m_IAddressDefault;
}

void Contactinformations_Request::setIAddressDefault(int32_t value)
{
    m_IAddressDefault = value;
    m_IAddressDefaultIsSet = true;
}

bool Contactinformations_Request::iAddressDefaultIsSet() const
{
    return m_IAddressDefaultIsSet;
}

void Contactinformations_Request::unsetIAddressDefault()
{
    m_IAddressDefaultIsSet = false;
}
int32_t Contactinformations_Request::getIPhoneDefault() const
{
    return m_IPhoneDefault;
}

void Contactinformations_Request::setIPhoneDefault(int32_t value)
{
    m_IPhoneDefault = value;
    m_IPhoneDefaultIsSet = true;
}

bool Contactinformations_Request::iPhoneDefaultIsSet() const
{
    return m_IPhoneDefaultIsSet;
}

void Contactinformations_Request::unsetIPhoneDefault()
{
    m_IPhoneDefaultIsSet = false;
}
int32_t Contactinformations_Request::getIEmailDefault() const
{
    return m_IEmailDefault;
}

void Contactinformations_Request::setIEmailDefault(int32_t value)
{
    m_IEmailDefault = value;
    m_IEmailDefaultIsSet = true;
}

bool Contactinformations_Request::iEmailDefaultIsSet() const
{
    return m_IEmailDefaultIsSet;
}

void Contactinformations_Request::unsetIEmailDefault()
{
    m_IEmailDefaultIsSet = false;
}
int32_t Contactinformations_Request::getIWebsiteDefault() const
{
    return m_IWebsiteDefault;
}

void Contactinformations_Request::setIWebsiteDefault(int32_t value)
{
    m_IWebsiteDefault = value;
    m_IWebsiteDefaultIsSet = true;
}

bool Contactinformations_Request::iWebsiteDefaultIsSet() const
{
    return m_IWebsiteDefaultIsSet;
}

void Contactinformations_Request::unsetIWebsiteDefault()
{
    m_IWebsiteDefaultIsSet = false;
}
}
}
}
}


