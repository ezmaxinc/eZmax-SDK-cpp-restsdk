/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Common_Response_objDebugPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_Response_objDebugPayload::Common_Response_objDebugPayload()
{
    m_IVersionMin = 0;
    m_IVersionMinIsSet = false;
    m_IVersionMax = 0;
    m_IVersionMaxIsSet = false;
    m_A_RequiredPermissionsIsSet = false;
}

Common_Response_objDebugPayload::~Common_Response_objDebugPayload()
{
}

void Common_Response_objDebugPayload::validate()
{
    // TODO: implement validation
}

web::json::value Common_Response_objDebugPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IVersionMinIsSet)
    {
        val[utility::conversions::to_string_t("iVersionMin")] = ModelBase::toJson(m_IVersionMin);
    }
    if(m_IVersionMaxIsSet)
    {
        val[utility::conversions::to_string_t("iVersionMax")] = ModelBase::toJson(m_IVersionMax);
    }
    if(m_A_RequiredPermissionsIsSet)
    {
        val[utility::conversions::to_string_t("a_RequiredPermissions")] = ModelBase::toJson(m_A_RequiredPermissions);
    }

    return val;
}

bool Common_Response_objDebugPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iVersionMin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iVersionMin"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iVersionMin;
            ok &= ModelBase::fromJson(fieldValue, refVal_iVersionMin);
            setIVersionMin(refVal_iVersionMin);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iVersionMax")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iVersionMax"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iVersionMax;
            ok &= ModelBase::fromJson(fieldValue, refVal_iVersionMax);
            setIVersionMax(refVal_iVersionMax);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_RequiredPermissions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_RequiredPermissions"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_RequiredPermissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_RequiredPermissions);
            setARequiredPermissions(refVal_a_RequiredPermissions);
        }
    }
    return ok;
}

void Common_Response_objDebugPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IVersionMinIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iVersionMin"), m_IVersionMin));
    }
    if(m_IVersionMaxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iVersionMax"), m_IVersionMax));
    }
    if(m_A_RequiredPermissionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_RequiredPermissions"), m_A_RequiredPermissions));
    }
}

bool Common_Response_objDebugPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("iVersionMin")))
    {
        int32_t refVal_iVersionMin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iVersionMin")), refVal_iVersionMin );
        setIVersionMin(refVal_iVersionMin);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iVersionMax")))
    {
        int32_t refVal_iVersionMax;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iVersionMax")), refVal_iVersionMax );
        setIVersionMax(refVal_iVersionMax);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_RequiredPermissions")))
    {
        std::vector<int32_t> refVal_a_RequiredPermissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_RequiredPermissions")), refVal_a_RequiredPermissions );
        setARequiredPermissions(refVal_a_RequiredPermissions);
    }
    return ok;
}

int32_t Common_Response_objDebugPayload::getIVersionMin() const
{
    return m_IVersionMin;
}

void Common_Response_objDebugPayload::setIVersionMin(int32_t value)
{
    m_IVersionMin = value;
    m_IVersionMinIsSet = true;
}

bool Common_Response_objDebugPayload::iVersionMinIsSet() const
{
    return m_IVersionMinIsSet;
}

void Common_Response_objDebugPayload::unsetIVersionMin()
{
    m_IVersionMinIsSet = false;
}
int32_t Common_Response_objDebugPayload::getIVersionMax() const
{
    return m_IVersionMax;
}

void Common_Response_objDebugPayload::setIVersionMax(int32_t value)
{
    m_IVersionMax = value;
    m_IVersionMaxIsSet = true;
}

bool Common_Response_objDebugPayload::iVersionMaxIsSet() const
{
    return m_IVersionMaxIsSet;
}

void Common_Response_objDebugPayload::unsetIVersionMax()
{
    m_IVersionMaxIsSet = false;
}
std::vector<int32_t>& Common_Response_objDebugPayload::getARequiredPermissions()
{
    return m_A_RequiredPermissions;
}

void Common_Response_objDebugPayload::setARequiredPermissions(std::vector<int32_t> value)
{
    m_A_RequiredPermissions = value;
    m_A_RequiredPermissionsIsSet = true;
}

bool Common_Response_objDebugPayload::aRequiredPermissionsIsSet() const
{
    return m_A_RequiredPermissionsIsSet;
}

void Common_Response_objDebugPayload::unsetA_RequiredPermissions()
{
    m_A_RequiredPermissionsIsSet = false;
}
}
}
}
}


