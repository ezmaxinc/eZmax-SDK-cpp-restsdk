/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.40
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfolder_send_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfolder_send_v1_Request::Ezsignfolder_send_v1_Request()
{
    m_TExtraMessage = utility::conversions::to_string_t("");
    m_TExtraMessageIsSet = false;
}

Ezsignfolder_send_v1_Request::~Ezsignfolder_send_v1_Request()
{
}

void Ezsignfolder_send_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfolder_send_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TExtraMessageIsSet)
    {
        val[utility::conversions::to_string_t("tExtraMessage")] = ModelBase::toJson(m_TExtraMessage);
    }

    return val;
}

bool Ezsignfolder_send_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tExtraMessage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tExtraMessage"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_tExtraMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_tExtraMessage);
            setTExtraMessage(refVal_tExtraMessage);
        }
    }
    return ok;
}

void Ezsignfolder_send_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TExtraMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tExtraMessage"), m_TExtraMessage));
    }
}

bool Ezsignfolder_send_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("tExtraMessage")))
    {
        utility::string_t refVal_tExtraMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tExtraMessage")), refVal_tExtraMessage );
        setTExtraMessage(refVal_tExtraMessage);
    }
    return ok;
}

utility::string_t Ezsignfolder_send_v1_Request::getTExtraMessage() const
{
    return m_TExtraMessage;
}

void Ezsignfolder_send_v1_Request::setTExtraMessage(const utility::string_t& value)
{
    m_TExtraMessage = value;
    m_TExtraMessageIsSet = true;
}

bool Ezsignfolder_send_v1_Request::tExtraMessageIsSet() const
{
    return m_TExtraMessageIsSet;
}

void Ezsignfolder_send_v1_Request::unsetTExtraMessage()
{
    m_TExtraMessageIsSet = false;
}
}
}
}
}


