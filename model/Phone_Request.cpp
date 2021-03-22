/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.38
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Phone_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Phone_Request::Phone_Request()
{
    m_FkiPhonetypeID = 0;
    m_FkiPhonetypeIDIsSet = false;
    m_EPhoneTypeIsSet = false;
    m_SPhoneRegion = utility::conversions::to_string_t("");
    m_SPhoneRegionIsSet = false;
    m_SPhoneExchange = utility::conversions::to_string_t("");
    m_SPhoneExchangeIsSet = false;
    m_SPhoneNumber = utility::conversions::to_string_t("");
    m_SPhoneNumberIsSet = false;
    m_SPhoneInternational = utility::conversions::to_string_t("");
    m_SPhoneInternationalIsSet = false;
    m_SPhoneExtension = utility::conversions::to_string_t("");
    m_SPhoneExtensionIsSet = false;
}

Phone_Request::~Phone_Request()
{
}

void Phone_Request::validate()
{
    // TODO: implement validation
}

web::json::value Phone_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiPhonetypeIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiPhonetypeID")] = ModelBase::toJson(m_FkiPhonetypeID);
    }
    if(m_EPhoneTypeIsSet)
    {
        val[utility::conversions::to_string_t("ePhoneType")] = ModelBase::toJson(m_EPhoneType);
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
    if(m_SPhoneInternationalIsSet)
    {
        val[utility::conversions::to_string_t("sPhoneInternational")] = ModelBase::toJson(m_SPhoneInternational);
    }
    if(m_SPhoneExtensionIsSet)
    {
        val[utility::conversions::to_string_t("sPhoneExtension")] = ModelBase::toJson(m_SPhoneExtension);
    }

    return val;
}

bool Phone_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiPhonetypeID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiPhonetypeID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiPhonetypeID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiPhonetypeID);
            setFkiPhonetypeID(refVal_fkiPhonetypeID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ePhoneType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ePhoneType"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_ePhoneType> refVal_ePhoneType;
            ok &= ModelBase::fromJson(fieldValue, refVal_ePhoneType);
            setEPhoneType(refVal_ePhoneType);
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
    if(val.has_field(utility::conversions::to_string_t("sPhoneInternational")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sPhoneInternational"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sPhoneInternational;
            ok &= ModelBase::fromJson(fieldValue, refVal_sPhoneInternational);
            setSPhoneInternational(refVal_sPhoneInternational);
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

void Phone_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiPhonetypeIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiPhonetypeID"), m_FkiPhonetypeID));
    }
    if(m_EPhoneTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ePhoneType"), m_EPhoneType));
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
    if(m_SPhoneInternationalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPhoneInternational"), m_SPhoneInternational));
    }
    if(m_SPhoneExtensionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sPhoneExtension"), m_SPhoneExtension));
    }
}

bool Phone_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiPhonetypeID")))
    {
        int32_t refVal_fkiPhonetypeID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiPhonetypeID")), refVal_fkiPhonetypeID );
        setFkiPhonetypeID(refVal_fkiPhonetypeID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ePhoneType")))
    {
        std::shared_ptr<Field_ePhoneType> refVal_ePhoneType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ePhoneType")), refVal_ePhoneType );
        setEPhoneType(refVal_ePhoneType);
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
    if(multipart->hasContent(utility::conversions::to_string_t("sPhoneInternational")))
    {
        utility::string_t refVal_sPhoneInternational;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPhoneInternational")), refVal_sPhoneInternational );
        setSPhoneInternational(refVal_sPhoneInternational);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sPhoneExtension")))
    {
        utility::string_t refVal_sPhoneExtension;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sPhoneExtension")), refVal_sPhoneExtension );
        setSPhoneExtension(refVal_sPhoneExtension);
    }
    return ok;
}

int32_t Phone_Request::getFkiPhonetypeID() const
{
    return m_FkiPhonetypeID;
}

void Phone_Request::setFkiPhonetypeID(int32_t value)
{
    m_FkiPhonetypeID = value;
    m_FkiPhonetypeIDIsSet = true;
}

bool Phone_Request::fkiPhonetypeIDIsSet() const
{
    return m_FkiPhonetypeIDIsSet;
}

void Phone_Request::unsetFkiPhonetypeID()
{
    m_FkiPhonetypeIDIsSet = false;
}
std::shared_ptr<Field_ePhoneType> Phone_Request::getEPhoneType() const
{
    return m_EPhoneType;
}

void Phone_Request::setEPhoneType(const std::shared_ptr<Field_ePhoneType>& value)
{
    m_EPhoneType = value;
    m_EPhoneTypeIsSet = true;
}

bool Phone_Request::ePhoneTypeIsSet() const
{
    return m_EPhoneTypeIsSet;
}

void Phone_Request::unsetEPhoneType()
{
    m_EPhoneTypeIsSet = false;
}
utility::string_t Phone_Request::getSPhoneRegion() const
{
    return m_SPhoneRegion;
}

void Phone_Request::setSPhoneRegion(const utility::string_t& value)
{
    m_SPhoneRegion = value;
    m_SPhoneRegionIsSet = true;
}

bool Phone_Request::sPhoneRegionIsSet() const
{
    return m_SPhoneRegionIsSet;
}

void Phone_Request::unsetSPhoneRegion()
{
    m_SPhoneRegionIsSet = false;
}
utility::string_t Phone_Request::getSPhoneExchange() const
{
    return m_SPhoneExchange;
}

void Phone_Request::setSPhoneExchange(const utility::string_t& value)
{
    m_SPhoneExchange = value;
    m_SPhoneExchangeIsSet = true;
}

bool Phone_Request::sPhoneExchangeIsSet() const
{
    return m_SPhoneExchangeIsSet;
}

void Phone_Request::unsetSPhoneExchange()
{
    m_SPhoneExchangeIsSet = false;
}
utility::string_t Phone_Request::getSPhoneNumber() const
{
    return m_SPhoneNumber;
}

void Phone_Request::setSPhoneNumber(const utility::string_t& value)
{
    m_SPhoneNumber = value;
    m_SPhoneNumberIsSet = true;
}

bool Phone_Request::sPhoneNumberIsSet() const
{
    return m_SPhoneNumberIsSet;
}

void Phone_Request::unsetSPhoneNumber()
{
    m_SPhoneNumberIsSet = false;
}
utility::string_t Phone_Request::getSPhoneInternational() const
{
    return m_SPhoneInternational;
}

void Phone_Request::setSPhoneInternational(const utility::string_t& value)
{
    m_SPhoneInternational = value;
    m_SPhoneInternationalIsSet = true;
}

bool Phone_Request::sPhoneInternationalIsSet() const
{
    return m_SPhoneInternationalIsSet;
}

void Phone_Request::unsetSPhoneInternational()
{
    m_SPhoneInternationalIsSet = false;
}
utility::string_t Phone_Request::getSPhoneExtension() const
{
    return m_SPhoneExtension;
}

void Phone_Request::setSPhoneExtension(const utility::string_t& value)
{
    m_SPhoneExtension = value;
    m_SPhoneExtensionIsSet = true;
}

bool Phone_Request::sPhoneExtensionIsSet() const
{
    return m_SPhoneExtensionIsSet;
}

void Phone_Request::unsetSPhoneExtension()
{
    m_SPhoneExtensionIsSet = false;
}
}
}
}
}


