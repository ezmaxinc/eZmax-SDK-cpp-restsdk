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



#include "Email_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Email_Request::Email_Request()
{
    m_FkiEmailtypeID = 0;
    m_FkiEmailtypeIDIsSet = false;
    m_SEmailAddress = utility::conversions::to_string_t("");
    m_SEmailAddressIsSet = false;
}

Email_Request::~Email_Request()
{
}

void Email_Request::validate()
{
    // TODO: implement validation
}

web::json::value Email_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiEmailtypeIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEmailtypeID")] = ModelBase::toJson(m_FkiEmailtypeID);
    }
    if(m_SEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("sEmailAddress")] = ModelBase::toJson(m_SEmailAddress);
    }

    return val;
}

bool Email_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiEmailtypeID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEmailtypeID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEmailtypeID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEmailtypeID);
            setFkiEmailtypeID(refVal_fkiEmailtypeID);
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
    return ok;
}

void Email_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiEmailtypeIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEmailtypeID"), m_FkiEmailtypeID));
    }
    if(m_SEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEmailAddress"), m_SEmailAddress));
    }
}

bool Email_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiEmailtypeID")))
    {
        int32_t refVal_fkiEmailtypeID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEmailtypeID")), refVal_fkiEmailtypeID );
        setFkiEmailtypeID(refVal_fkiEmailtypeID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEmailAddress")))
    {
        utility::string_t refVal_sEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEmailAddress")), refVal_sEmailAddress );
        setSEmailAddress(refVal_sEmailAddress);
    }
    return ok;
}

int32_t Email_Request::getFkiEmailtypeID() const
{
    return m_FkiEmailtypeID;
}

void Email_Request::setFkiEmailtypeID(int32_t value)
{
    m_FkiEmailtypeID = value;
    m_FkiEmailtypeIDIsSet = true;
}

bool Email_Request::fkiEmailtypeIDIsSet() const
{
    return m_FkiEmailtypeIDIsSet;
}

void Email_Request::unsetFkiEmailtypeID()
{
    m_FkiEmailtypeIDIsSet = false;
}
utility::string_t Email_Request::getSEmailAddress() const
{
    return m_SEmailAddress;
}

void Email_Request::setSEmailAddress(const utility::string_t& value)
{
    m_SEmailAddress = value;
    m_SEmailAddressIsSet = true;
}

bool Email_Request::sEmailAddressIsSet() const
{
    return m_SEmailAddressIsSet;
}

void Email_Request::unsetSEmailAddress()
{
    m_SEmailAddressIsSet = false;
}
}
}
}
}


