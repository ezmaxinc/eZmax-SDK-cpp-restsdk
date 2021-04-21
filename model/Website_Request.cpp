/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Website_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Website_Request::Website_Request()
{
    m_FkiWebsitetypeID = 0;
    m_FkiWebsitetypeIDIsSet = false;
    m_SWebsiteAddress = utility::conversions::to_string_t("");
    m_SWebsiteAddressIsSet = false;
}

Website_Request::~Website_Request()
{
}

void Website_Request::validate()
{
    // TODO: implement validation
}

web::json::value Website_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiWebsitetypeIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiWebsitetypeID")] = ModelBase::toJson(m_FkiWebsitetypeID);
    }
    if(m_SWebsiteAddressIsSet)
    {
        val[utility::conversions::to_string_t("sWebsiteAddress")] = ModelBase::toJson(m_SWebsiteAddress);
    }

    return val;
}

bool Website_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiWebsitetypeID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiWebsitetypeID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiWebsitetypeID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiWebsitetypeID);
            setFkiWebsitetypeID(refVal_fkiWebsitetypeID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sWebsiteAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sWebsiteAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sWebsiteAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_sWebsiteAddress);
            setSWebsiteAddress(refVal_sWebsiteAddress);
        }
    }
    return ok;
}

void Website_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiWebsitetypeIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiWebsitetypeID"), m_FkiWebsitetypeID));
    }
    if(m_SWebsiteAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sWebsiteAddress"), m_SWebsiteAddress));
    }
}

bool Website_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiWebsitetypeID")))
    {
        int32_t refVal_fkiWebsitetypeID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiWebsitetypeID")), refVal_fkiWebsitetypeID );
        setFkiWebsitetypeID(refVal_fkiWebsitetypeID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sWebsiteAddress")))
    {
        utility::string_t refVal_sWebsiteAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sWebsiteAddress")), refVal_sWebsiteAddress );
        setSWebsiteAddress(refVal_sWebsiteAddress);
    }
    return ok;
}

int32_t Website_Request::getFkiWebsitetypeID() const
{
    return m_FkiWebsitetypeID;
}

void Website_Request::setFkiWebsitetypeID(int32_t value)
{
    m_FkiWebsitetypeID = value;
    m_FkiWebsitetypeIDIsSet = true;
}

bool Website_Request::fkiWebsitetypeIDIsSet() const
{
    return m_FkiWebsitetypeIDIsSet;
}

void Website_Request::unsetFkiWebsitetypeID()
{
    m_FkiWebsitetypeIDIsSet = false;
}
utility::string_t Website_Request::getSWebsiteAddress() const
{
    return m_SWebsiteAddress;
}

void Website_Request::setSWebsiteAddress(const utility::string_t& value)
{
    m_SWebsiteAddress = value;
    m_SWebsiteAddressIsSet = true;
}

bool Website_Request::sWebsiteAddressIsSet() const
{
    return m_SWebsiteAddressIsSet;
}

void Website_Request::unsetSWebsiteAddress()
{
    m_SWebsiteAddressIsSet = false;
}
}
}
}
}


