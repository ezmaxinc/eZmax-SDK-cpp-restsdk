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



#include "Common_Response_Error.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_Response_Error::Common_Response_Error()
{
    m_SErrorMessage = utility::conversions::to_string_t("");
    m_SErrorMessageIsSet = false;
}

Common_Response_Error::~Common_Response_Error()
{
}

void Common_Response_Error::validate()
{
    // TODO: implement validation
}

web::json::value Common_Response_Error::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SErrorMessageIsSet)
    {
        val[utility::conversions::to_string_t("sErrorMessage")] = ModelBase::toJson(m_SErrorMessage);
    }

    return val;
}

bool Common_Response_Error::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sErrorMessage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sErrorMessage"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sErrorMessage;
            ok &= ModelBase::fromJson(fieldValue, refVal_sErrorMessage);
            setSErrorMessage(refVal_sErrorMessage);
        }
    }
    return ok;
}

void Common_Response_Error::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SErrorMessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sErrorMessage"), m_SErrorMessage));
    }
}

bool Common_Response_Error::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sErrorMessage")))
    {
        utility::string_t refVal_sErrorMessage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sErrorMessage")), refVal_sErrorMessage );
        setSErrorMessage(refVal_sErrorMessage);
    }
    return ok;
}

utility::string_t Common_Response_Error::getSErrorMessage() const
{
    return m_SErrorMessage;
}

void Common_Response_Error::setSErrorMessage(const utility::string_t& value)
{
    m_SErrorMessage = value;
    m_SErrorMessageIsSet = true;
}

bool Common_Response_Error::sErrorMessageIsSet() const
{
    return m_SErrorMessageIsSet;
}

void Common_Response_Error::unsetSErrorMessage()
{
    m_SErrorMessageIsSet = false;
}
}
}
}
}


