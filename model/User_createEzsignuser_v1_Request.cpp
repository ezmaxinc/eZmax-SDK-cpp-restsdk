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



#include "User_createEzsignuser_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




User_createEzsignuser_v1_Request::User_createEzsignuser_v1_Request()
{
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_SUserFirstname = utility::conversions::to_string_t("");
    m_SUserFirstnameIsSet = false;
    m_SUserLastname = utility::conversions::to_string_t("");
    m_SUserLastnameIsSet = false;
    m_SEmailAddress = utility::conversions::to_string_t("");
    m_SEmailAddressIsSet = false;
    m_SPhoneRegion = utility::conversions::to_string_t("");
    m_SPhoneRegionIsSet = false;
    m_SPhoneExchange = utility::conversions::to_string_t("");
    m_SPhoneExchangeIsSet = false;
    m_SPhoneNumber = utility::conversions::to_string_t("");
    m_SPhoneNumberIsSet = false;
    m_SPhoneExtension = utility::conversions::to_string_t("");
    m_SPhoneExtensionIsSet = false;
}

User_createEzsignuser_v1_Request::~User_createEzsignuser_v1_Request()
{
}

void User_createEzsignuser_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value User_createEzsignuser_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiLanguageIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiLanguageID")] = ModelBase::toJson(m_FkiLanguageID);
    }
    if(m_SUserFirstnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserFirstname")] = ModelBase::toJson(m_SUserFirstname);
    }
    if(m_SUserLastnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserLastname")] = ModelBase::toJson(m_SUserLastname);
    }
    if(m_SEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("sEmailAddress")] = ModelBase::toJson(m_SEmailAddress);
    }
    if(m_SPhoneRegionIsSet)
    {
        val[utility::conversions::to_string_t("sPhoneRegion")] = ModelBase::toJson(m_SPhoneRegion);
    }
    if(m_SPhoneExchangeIsSet)
    {
        val[utility::conversions::to_string_t("sPhoneExchange")] = ModelBase::toJson(m_SPhoneExchange);
    }
    if(m_SPhoneNumberIsSet)
    {
        val[utility::conversions::to_string_t("sPhoneNumber")] = ModelBase::toJson(m_SPhoneNumber);
    }
    if(m_SPhoneExtensionIsSet)
    {
        val[utility::conversions::to_string_t("sPhoneExtension")] = ModelBase::toJson(m_SPhoneExtension);
    }

    return val;
}

bool User_createEzsignuser_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiLanguageID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiLanguageID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiLanguageID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiLanguageID);
            setFkiLanguageID(refVal_fkiLanguageID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sUserFirstname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sUserFirstname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sUserFirstname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sUserFirstname);
            setSUserFirstname(refVal_sUserFirstname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sUserLastname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sUserLastname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sUserLastname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sUserLastname);
            setSUserLastname(refVal_sUserLastname);
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
    if(val.has_field(utility::conversions::to_string_t("sPhoneRegion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPhoneRegion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPhoneRegion;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPhoneRegion);
            setSPhoneRegion(refVal_sPhoneRegion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sPhoneExchange")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPhoneExchange"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPhoneExchange;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPhoneExchange);
            setSPhoneExchange(refVal_sPhoneExchange);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sPhoneNumber")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPhoneNumber"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPhoneNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPhoneNumber);
            setSPhoneNumber(refVal_sPhoneNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sPhoneExtension")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPhoneExtension"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPhoneExtension;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPhoneExtension);
            setSPhoneExtension(refVal_sPhoneExtension);
        }
    }
    return ok;
}

void User_createEzsignuser_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiLanguageIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiLanguageID"), m_FkiLanguageID));
    }
    if(m_SUserFirstnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserFirstname"), m_SUserFirstname));
    }
    if(m_SUserLastnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserLastname"), m_SUserLastname));
    }
    if(m_SEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEmailAddress"), m_SEmailAddress));
    }
    if(m_SPhoneRegionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPhoneRegion"), m_SPhoneRegion));
    }
    if(m_SPhoneExchangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPhoneExchange"), m_SPhoneExchange));
    }
    if(m_SPhoneNumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPhoneNumber"), m_SPhoneNumber));
    }
    if(m_SPhoneExtensionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPhoneExtension"), m_SPhoneExtension));
    }
}

bool User_createEzsignuser_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiLanguageID")))
    {
        int32_t refVal_fkiLanguageID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiLanguageID")), refVal_fkiLanguageID );
        setFkiLanguageID(refVal_fkiLanguageID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserFirstname")))
    {
        utility::string_t refVal_sUserFirstname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserFirstname")), refVal_sUserFirstname );
        setSUserFirstname(refVal_sUserFirstname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserLastname")))
    {
        utility::string_t refVal_sUserLastname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserLastname")), refVal_sUserLastname );
        setSUserLastname(refVal_sUserLastname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEmailAddress")))
    {
        utility::string_t refVal_sEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEmailAddress")), refVal_sEmailAddress );
        setSEmailAddress(refVal_sEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPhoneRegion")))
    {
        utility::string_t refVal_sPhoneRegion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPhoneRegion")), refVal_sPhoneRegion );
        setSPhoneRegion(refVal_sPhoneRegion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPhoneExchange")))
    {
        utility::string_t refVal_sPhoneExchange;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPhoneExchange")), refVal_sPhoneExchange );
        setSPhoneExchange(refVal_sPhoneExchange);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPhoneNumber")))
    {
        utility::string_t refVal_sPhoneNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPhoneNumber")), refVal_sPhoneNumber );
        setSPhoneNumber(refVal_sPhoneNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPhoneExtension")))
    {
        utility::string_t refVal_sPhoneExtension;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPhoneExtension")), refVal_sPhoneExtension );
        setSPhoneExtension(refVal_sPhoneExtension);
    }
    return ok;
}

int32_t User_createEzsignuser_v1_Request::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void User_createEzsignuser_v1_Request::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool User_createEzsignuser_v1_Request::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void User_createEzsignuser_v1_Request::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSUserFirstname() const
{
    return m_SUserFirstname;
}

void User_createEzsignuser_v1_Request::setSUserFirstname(const utility::string_t& value)
{
    m_SUserFirstname = value;
    m_SUserFirstnameIsSet = true;
}

bool User_createEzsignuser_v1_Request::sUserFirstnameIsSet() const
{
    return m_SUserFirstnameIsSet;
}

void User_createEzsignuser_v1_Request::unsetSUserFirstname()
{
    m_SUserFirstnameIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSUserLastname() const
{
    return m_SUserLastname;
}

void User_createEzsignuser_v1_Request::setSUserLastname(const utility::string_t& value)
{
    m_SUserLastname = value;
    m_SUserLastnameIsSet = true;
}

bool User_createEzsignuser_v1_Request::sUserLastnameIsSet() const
{
    return m_SUserLastnameIsSet;
}

void User_createEzsignuser_v1_Request::unsetSUserLastname()
{
    m_SUserLastnameIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSEmailAddress() const
{
    return m_SEmailAddress;
}

void User_createEzsignuser_v1_Request::setSEmailAddress(const utility::string_t& value)
{
    m_SEmailAddress = value;
    m_SEmailAddressIsSet = true;
}

bool User_createEzsignuser_v1_Request::sEmailAddressIsSet() const
{
    return m_SEmailAddressIsSet;
}

void User_createEzsignuser_v1_Request::unsetSEmailAddress()
{
    m_SEmailAddressIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSPhoneRegion() const
{
    return m_SPhoneRegion;
}

void User_createEzsignuser_v1_Request::setSPhoneRegion(const utility::string_t& value)
{
    m_SPhoneRegion = value;
    m_SPhoneRegionIsSet = true;
}

bool User_createEzsignuser_v1_Request::sPhoneRegionIsSet() const
{
    return m_SPhoneRegionIsSet;
}

void User_createEzsignuser_v1_Request::unsetSPhoneRegion()
{
    m_SPhoneRegionIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSPhoneExchange() const
{
    return m_SPhoneExchange;
}

void User_createEzsignuser_v1_Request::setSPhoneExchange(const utility::string_t& value)
{
    m_SPhoneExchange = value;
    m_SPhoneExchangeIsSet = true;
}

bool User_createEzsignuser_v1_Request::sPhoneExchangeIsSet() const
{
    return m_SPhoneExchangeIsSet;
}

void User_createEzsignuser_v1_Request::unsetSPhoneExchange()
{
    m_SPhoneExchangeIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSPhoneNumber() const
{
    return m_SPhoneNumber;
}

void User_createEzsignuser_v1_Request::setSPhoneNumber(const utility::string_t& value)
{
    m_SPhoneNumber = value;
    m_SPhoneNumberIsSet = true;
}

bool User_createEzsignuser_v1_Request::sPhoneNumberIsSet() const
{
    return m_SPhoneNumberIsSet;
}

void User_createEzsignuser_v1_Request::unsetSPhoneNumber()
{
    m_SPhoneNumberIsSet = false;
}
utility::string_t User_createEzsignuser_v1_Request::getSPhoneExtension() const
{
    return m_SPhoneExtension;
}

void User_createEzsignuser_v1_Request::setSPhoneExtension(const utility::string_t& value)
{
    m_SPhoneExtension = value;
    m_SPhoneExtensionIsSet = true;
}

bool User_createEzsignuser_v1_Request::sPhoneExtensionIsSet() const
{
    return m_SPhoneExtensionIsSet;
}

void User_createEzsignuser_v1_Request::unsetSPhoneExtension()
{
    m_SPhoneExtensionIsSet = false;
}
}
}
}
}


