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



#include "Attempt_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Attempt_Response::Attempt_Response()
{
    m_DtAttemptStart = utility::conversions::to_string_t("");
    m_DtAttemptStartIsSet = false;
    m_SAttemptResult = utility::conversions::to_string_t("");
    m_SAttemptResultIsSet = false;
    m_IAttemptDuration = 0;
    m_IAttemptDurationIsSet = false;
}

Attempt_Response::~Attempt_Response()
{
}

void Attempt_Response::validate()
{
    // TODO: implement validation
}

web::json::value Attempt_Response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DtAttemptStartIsSet)
    {
        val[utility::conversions::to_string_t("dtAttemptStart")] = ModelBase::toJson(m_DtAttemptStart);
    }
    if(m_SAttemptResultIsSet)
    {
        val[utility::conversions::to_string_t("sAttemptResult")] = ModelBase::toJson(m_SAttemptResult);
    }
    if(m_IAttemptDurationIsSet)
    {
        val[utility::conversions::to_string_t("iAttemptDuration")] = ModelBase::toJson(m_IAttemptDuration);
    }

    return val;
}

bool Attempt_Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dtAttemptStart")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtAttemptStart"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtAttemptStart;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtAttemptStart);
            setDtAttemptStart(refVal_dtAttemptStart);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sAttemptResult")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sAttemptResult"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sAttemptResult;
            ok &= ModelBase::fromJson(fieldValue, refVal_sAttemptResult);
            setSAttemptResult(refVal_sAttemptResult);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iAttemptDuration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iAttemptDuration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iAttemptDuration;
            ok &= ModelBase::fromJson(fieldValue, refVal_iAttemptDuration);
            setIAttemptDuration(refVal_iAttemptDuration);
        }
    }
    return ok;
}

void Attempt_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DtAttemptStartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtAttemptStart"), m_DtAttemptStart));
    }
    if(m_SAttemptResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sAttemptResult"), m_SAttemptResult));
    }
    if(m_IAttemptDurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iAttemptDuration"), m_IAttemptDuration));
    }
}

bool Attempt_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("dtAttemptStart")))
    {
        utility::string_t refVal_dtAttemptStart;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtAttemptStart")), refVal_dtAttemptStart );
        setDtAttemptStart(refVal_dtAttemptStart);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sAttemptResult")))
    {
        utility::string_t refVal_sAttemptResult;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sAttemptResult")), refVal_sAttemptResult );
        setSAttemptResult(refVal_sAttemptResult);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iAttemptDuration")))
    {
        int32_t refVal_iAttemptDuration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iAttemptDuration")), refVal_iAttemptDuration );
        setIAttemptDuration(refVal_iAttemptDuration);
    }
    return ok;
}

utility::string_t Attempt_Response::getDtAttemptStart() const
{
    return m_DtAttemptStart;
}

void Attempt_Response::setDtAttemptStart(const utility::string_t& value)
{
    m_DtAttemptStart = value;
    m_DtAttemptStartIsSet = true;
}

bool Attempt_Response::dtAttemptStartIsSet() const
{
    return m_DtAttemptStartIsSet;
}

void Attempt_Response::unsetDtAttemptStart()
{
    m_DtAttemptStartIsSet = false;
}
utility::string_t Attempt_Response::getSAttemptResult() const
{
    return m_SAttemptResult;
}

void Attempt_Response::setSAttemptResult(const utility::string_t& value)
{
    m_SAttemptResult = value;
    m_SAttemptResultIsSet = true;
}

bool Attempt_Response::sAttemptResultIsSet() const
{
    return m_SAttemptResultIsSet;
}

void Attempt_Response::unsetSAttemptResult()
{
    m_SAttemptResultIsSet = false;
}
int32_t Attempt_Response::getIAttemptDuration() const
{
    return m_IAttemptDuration;
}

void Attempt_Response::setIAttemptDuration(int32_t value)
{
    m_IAttemptDuration = value;
    m_IAttemptDurationIsSet = true;
}

bool Attempt_Response::iAttemptDurationIsSet() const
{
    return m_IAttemptDurationIsSet;
}

void Attempt_Response::unsetIAttemptDuration()
{
    m_IAttemptDurationIsSet = false;
}
}
}
}
}


