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



#include "Common_Response_objSQLQuery.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_Response_objSQLQuery::Common_Response_objSQLQuery()
{
    m_SQuery = utility::conversions::to_string_t("");
    m_SQueryIsSet = false;
    m_FDuration = 0.0f;
    m_FDurationIsSet = false;
}

Common_Response_objSQLQuery::~Common_Response_objSQLQuery()
{
}

void Common_Response_objSQLQuery::validate()
{
    // TODO: implement validation
}

web::json::value Common_Response_objSQLQuery::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SQueryIsSet)
    {
        val[utility::conversions::to_string_t("sQuery")] = ModelBase::toJson(m_SQuery);
    }
    if(m_FDurationIsSet)
    {
        val[utility::conversions::to_string_t("fDuration")] = ModelBase::toJson(m_FDuration);
    }

    return val;
}

bool Common_Response_objSQLQuery::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sQuery")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sQuery"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_sQuery);
            setSQuery(refVal_sQuery);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fDuration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fDuration"));
        if(!fieldValue.is_null())
        {
            float refVal_fDuration;
            ok &= ModelBase::fromJson(fieldValue, refVal_fDuration);
            setFDuration(refVal_fDuration);
        }
    }
    return ok;
}

void Common_Response_objSQLQuery::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SQueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sQuery"), m_SQuery));
    }
    if(m_FDurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fDuration"), m_FDuration));
    }
}

bool Common_Response_objSQLQuery::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sQuery")))
    {
        utility::string_t refVal_sQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sQuery")), refVal_sQuery );
        setSQuery(refVal_sQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fDuration")))
    {
        float refVal_fDuration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fDuration")), refVal_fDuration );
        setFDuration(refVal_fDuration);
    }
    return ok;
}

utility::string_t Common_Response_objSQLQuery::getSQuery() const
{
    return m_SQuery;
}

void Common_Response_objSQLQuery::setSQuery(const utility::string_t& value)
{
    m_SQuery = value;
    m_SQueryIsSet = true;
}

bool Common_Response_objSQLQuery::sQueryIsSet() const
{
    return m_SQueryIsSet;
}

void Common_Response_objSQLQuery::unsetSQuery()
{
    m_SQueryIsSet = false;
}
float Common_Response_objSQLQuery::getFDuration() const
{
    return m_FDuration;
}

void Common_Response_objSQLQuery::setFDuration(float value)
{
    m_FDuration = value;
    m_FDurationIsSet = true;
}

bool Common_Response_objSQLQuery::fDurationIsSet() const
{
    return m_FDurationIsSet;
}

void Common_Response_objSQLQuery::unsetFDuration()
{
    m_FDurationIsSet = false;
}
}
}
}
}


