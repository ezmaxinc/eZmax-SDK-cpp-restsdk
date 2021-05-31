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



#include "Multilingual_ApikeyDescription.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Multilingual_ApikeyDescription::Multilingual_ApikeyDescription()
{
    m_SApikeyDescription1 = utility::conversions::to_string_t("");
    m_SApikeyDescription1IsSet = false;
    m_SApikeyDescription2 = utility::conversions::to_string_t("");
    m_SApikeyDescription2IsSet = false;
}

Multilingual_ApikeyDescription::~Multilingual_ApikeyDescription()
{
}

void Multilingual_ApikeyDescription::validate()
{
    // TODO: implement validation
}

web::json::value Multilingual_ApikeyDescription::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SApikeyDescription1IsSet)
    {
        val[utility::conversions::to_string_t("sApikeyDescription1")] = ModelBase::toJson(m_SApikeyDescription1);
    }
    if(m_SApikeyDescription2IsSet)
    {
        val[utility::conversions::to_string_t("sApikeyDescription2")] = ModelBase::toJson(m_SApikeyDescription2);
    }

    return val;
}

bool Multilingual_ApikeyDescription::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sApikeyDescription1")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sApikeyDescription1"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sApikeyDescription1;
            ok &= ModelBase::fromJson(fieldValue, refVal_sApikeyDescription1);
            setSApikeyDescription1(refVal_sApikeyDescription1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sApikeyDescription2")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sApikeyDescription2"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sApikeyDescription2;
            ok &= ModelBase::fromJson(fieldValue, refVal_sApikeyDescription2);
            setSApikeyDescription2(refVal_sApikeyDescription2);
        }
    }
    return ok;
}

void Multilingual_ApikeyDescription::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SApikeyDescription1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sApikeyDescription1"), m_SApikeyDescription1));
    }
    if(m_SApikeyDescription2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sApikeyDescription2"), m_SApikeyDescription2));
    }
}

bool Multilingual_ApikeyDescription::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sApikeyDescription1")))
    {
        utility::string_t refVal_sApikeyDescription1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sApikeyDescription1")), refVal_sApikeyDescription1 );
        setSApikeyDescription1(refVal_sApikeyDescription1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sApikeyDescription2")))
    {
        utility::string_t refVal_sApikeyDescription2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sApikeyDescription2")), refVal_sApikeyDescription2 );
        setSApikeyDescription2(refVal_sApikeyDescription2);
    }
    return ok;
}

utility::string_t Multilingual_ApikeyDescription::getSApikeyDescription1() const
{
    return m_SApikeyDescription1;
}

void Multilingual_ApikeyDescription::setSApikeyDescription1(const utility::string_t& value)
{
    m_SApikeyDescription1 = value;
    m_SApikeyDescription1IsSet = true;
}

bool Multilingual_ApikeyDescription::sApikeyDescription1IsSet() const
{
    return m_SApikeyDescription1IsSet;
}

void Multilingual_ApikeyDescription::unsetSApikeyDescription1()
{
    m_SApikeyDescription1IsSet = false;
}
utility::string_t Multilingual_ApikeyDescription::getSApikeyDescription2() const
{
    return m_SApikeyDescription2;
}

void Multilingual_ApikeyDescription::setSApikeyDescription2(const utility::string_t& value)
{
    m_SApikeyDescription2 = value;
    m_SApikeyDescription2IsSet = true;
}

bool Multilingual_ApikeyDescription::sApikeyDescription2IsSet() const
{
    return m_SApikeyDescription2IsSet;
}

void Multilingual_ApikeyDescription::unsetSApikeyDescription2()
{
    m_SApikeyDescription2IsSet = false;
}
}
}
}
}


