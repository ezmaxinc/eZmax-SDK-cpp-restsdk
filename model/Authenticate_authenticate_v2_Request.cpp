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



#include "Authenticate_authenticate_v2_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Authenticate_authenticate_v2_Request::Authenticate_authenticate_v2_Request()
{
    m_PksCustomerCode = utility::conversions::to_string_t("");
    m_PksCustomerCodeIsSet = false;
    m_SEmailAddress = utility::conversions::to_string_t("");
    m_SEmailAddressIsSet = false;
    m_SUserLoginname = utility::conversions::to_string_t("");
    m_SUserLoginnameIsSet = false;
    m_SPassword = utility::conversions::to_string_t("");
    m_SPasswordIsSet = false;
    m_SPasswordEncrypted = utility::conversions::to_string_t("");
    m_SPasswordEncryptedIsSet = false;
}

Authenticate_authenticate_v2_Request::~Authenticate_authenticate_v2_Request()
{
}

void Authenticate_authenticate_v2_Request::validate()
{
    // TODO: implement validation
}

web::json::value Authenticate_authenticate_v2_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PksCustomerCodeIsSet)
    {
        val[utility::conversions::to_string_t("pksCustomerCode")] = ModelBase::toJson(m_PksCustomerCode);
    }
    if(m_SEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("sEmailAddress")] = ModelBase::toJson(m_SEmailAddress);
    }
    if(m_SUserLoginnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserLoginname")] = ModelBase::toJson(m_SUserLoginname);
    }
    if(m_SPasswordIsSet)
    {
        val[utility::conversions::to_string_t("sPassword")] = ModelBase::toJson(m_SPassword);
    }
    if(m_SPasswordEncryptedIsSet)
    {
        val[utility::conversions::to_string_t("sPasswordEncrypted")] = ModelBase::toJson(m_SPasswordEncrypted);
    }

    return val;
}

bool Authenticate_authenticate_v2_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pksCustomerCode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pksCustomerCode"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pksCustomerCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_pksCustomerCode);
            setPksCustomerCode(refVal_pksCustomerCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEmailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEmailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEmailAddress);
            setSEmailAddress(refVal_sEmailAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sUserLoginname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sUserLoginname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sUserLoginname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sUserLoginname);
            setSUserLoginname(refVal_sUserLoginname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sPassword")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPassword"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPassword;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPassword);
            setSPassword(refVal_sPassword);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sPasswordEncrypted")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPasswordEncrypted"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPasswordEncrypted;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPasswordEncrypted);
            setSPasswordEncrypted(refVal_sPasswordEncrypted);
        }
    }
    return ok;
}

void Authenticate_authenticate_v2_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PksCustomerCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pksCustomerCode"), m_PksCustomerCode));
    }
    if(m_SEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEmailAddress"), m_SEmailAddress));
    }
    if(m_SUserLoginnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserLoginname"), m_SUserLoginname));
    }
    if(m_SPasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPassword"), m_SPassword));
    }
    if(m_SPasswordEncryptedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPasswordEncrypted"), m_SPasswordEncrypted));
    }
}

bool Authenticate_authenticate_v2_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pksCustomerCode")))
    {
        utility::string_t refVal_pksCustomerCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pksCustomerCode")), refVal_pksCustomerCode );
        setPksCustomerCode(refVal_pksCustomerCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEmailAddress")))
    {
        utility::string_t refVal_sEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEmailAddress")), refVal_sEmailAddress );
        setSEmailAddress(refVal_sEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserLoginname")))
    {
        utility::string_t refVal_sUserLoginname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserLoginname")), refVal_sUserLoginname );
        setSUserLoginname(refVal_sUserLoginname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPassword")))
    {
        utility::string_t refVal_sPassword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPassword")), refVal_sPassword );
        setSPassword(refVal_sPassword);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPasswordEncrypted")))
    {
        utility::string_t refVal_sPasswordEncrypted;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPasswordEncrypted")), refVal_sPasswordEncrypted );
        setSPasswordEncrypted(refVal_sPasswordEncrypted);
    }
    return ok;
}

utility::string_t Authenticate_authenticate_v2_Request::getPksCustomerCode() const
{
    return m_PksCustomerCode;
}

void Authenticate_authenticate_v2_Request::setPksCustomerCode(const utility::string_t& value)
{
    m_PksCustomerCode = value;
    m_PksCustomerCodeIsSet = true;
}

bool Authenticate_authenticate_v2_Request::pksCustomerCodeIsSet() const
{
    return m_PksCustomerCodeIsSet;
}

void Authenticate_authenticate_v2_Request::unsetPksCustomerCode()
{
    m_PksCustomerCodeIsSet = false;
}
utility::string_t Authenticate_authenticate_v2_Request::getSEmailAddress() const
{
    return m_SEmailAddress;
}

void Authenticate_authenticate_v2_Request::setSEmailAddress(const utility::string_t& value)
{
    m_SEmailAddress = value;
    m_SEmailAddressIsSet = true;
}

bool Authenticate_authenticate_v2_Request::sEmailAddressIsSet() const
{
    return m_SEmailAddressIsSet;
}

void Authenticate_authenticate_v2_Request::unsetSEmailAddress()
{
    m_SEmailAddressIsSet = false;
}
utility::string_t Authenticate_authenticate_v2_Request::getSUserLoginname() const
{
    return m_SUserLoginname;
}

void Authenticate_authenticate_v2_Request::setSUserLoginname(const utility::string_t& value)
{
    m_SUserLoginname = value;
    m_SUserLoginnameIsSet = true;
}

bool Authenticate_authenticate_v2_Request::sUserLoginnameIsSet() const
{
    return m_SUserLoginnameIsSet;
}

void Authenticate_authenticate_v2_Request::unsetSUserLoginname()
{
    m_SUserLoginnameIsSet = false;
}
utility::string_t Authenticate_authenticate_v2_Request::getSPassword() const
{
    return m_SPassword;
}

void Authenticate_authenticate_v2_Request::setSPassword(const utility::string_t& value)
{
    m_SPassword = value;
    m_SPasswordIsSet = true;
}

bool Authenticate_authenticate_v2_Request::sPasswordIsSet() const
{
    return m_SPasswordIsSet;
}

void Authenticate_authenticate_v2_Request::unsetSPassword()
{
    m_SPasswordIsSet = false;
}
utility::string_t Authenticate_authenticate_v2_Request::getSPasswordEncrypted() const
{
    return m_SPasswordEncrypted;
}

void Authenticate_authenticate_v2_Request::setSPasswordEncrypted(const utility::string_t& value)
{
    m_SPasswordEncrypted = value;
    m_SPasswordEncryptedIsSet = true;
}

bool Authenticate_authenticate_v2_Request::sPasswordEncryptedIsSet() const
{
    return m_SPasswordEncryptedIsSet;
}

void Authenticate_authenticate_v2_Request::unsetSPasswordEncrypted()
{
    m_SPasswordEncryptedIsSet = false;
}
}
}
}
}

