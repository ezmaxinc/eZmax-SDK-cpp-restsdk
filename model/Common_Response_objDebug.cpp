/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Common_Response_objDebug.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_Response_objDebug::Common_Response_objDebug()
{
    m_SMemoryUsage = utility::conversions::to_string_t("");
    m_SMemoryUsageIsSet = false;
    m_SRunTime = utility::conversions::to_string_t("");
    m_SRunTimeIsSet = false;
    m_ISQLSelects = 0;
    m_ISQLSelectsIsSet = false;
    m_ISQLQueries = 0;
    m_ISQLQueriesIsSet = false;
    m_A_objSQLQueryIsSet = false;
}

Common_Response_objDebug::~Common_Response_objDebug()
{
}

void Common_Response_objDebug::validate()
{
    // TODO: implement validation
}

web::json::value Common_Response_objDebug::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SMemoryUsageIsSet)
    {
        val[utility::conversions::to_string_t("sMemoryUsage")] = ModelBase::toJson(m_SMemoryUsage);
    }
    if(m_SRunTimeIsSet)
    {
        val[utility::conversions::to_string_t("sRunTime")] = ModelBase::toJson(m_SRunTime);
    }
    if(m_ISQLSelectsIsSet)
    {
        val[utility::conversions::to_string_t("iSQLSelects")] = ModelBase::toJson(m_ISQLSelects);
    }
    if(m_ISQLQueriesIsSet)
    {
        val[utility::conversions::to_string_t("iSQLQueries")] = ModelBase::toJson(m_ISQLQueries);
    }
    if(m_A_objSQLQueryIsSet)
    {
        val[utility::conversions::to_string_t("a_objSQLQuery")] = ModelBase::toJson(m_A_objSQLQuery);
    }

    return val;
}

bool Common_Response_objDebug::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sMemoryUsage")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sMemoryUsage"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sMemoryUsage;
            ok &= ModelBase::fromJson(fieldValue, refVal_sMemoryUsage);
            setSMemoryUsage(refVal_sMemoryUsage);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sRunTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sRunTime"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sRunTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_sRunTime);
            setSRunTime(refVal_sRunTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iSQLSelects")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iSQLSelects"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iSQLSelects;
            ok &= ModelBase::fromJson(fieldValue, refVal_iSQLSelects);
            setISQLSelects(refVal_iSQLSelects);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iSQLQueries")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iSQLQueries"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iSQLQueries;
            ok &= ModelBase::fromJson(fieldValue, refVal_iSQLQueries);
            setISQLQueries(refVal_iSQLQueries);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_objSQLQuery")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_objSQLQuery"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Common_Response_objSQLQuery>> refVal_a_objSQLQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_objSQLQuery);
            setAObjSQLQuery(refVal_a_objSQLQuery);
        }
    }
    return ok;
}

void Common_Response_objDebug::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SMemoryUsageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sMemoryUsage"), m_SMemoryUsage));
    }
    if(m_SRunTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sRunTime"), m_SRunTime));
    }
    if(m_ISQLSelectsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iSQLSelects"), m_ISQLSelects));
    }
    if(m_ISQLQueriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iSQLQueries"), m_ISQLQueries));
    }
    if(m_A_objSQLQueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_objSQLQuery"), m_A_objSQLQuery));
    }
}

bool Common_Response_objDebug::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sMemoryUsage")))
    {
        utility::string_t refVal_sMemoryUsage;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sMemoryUsage")), refVal_sMemoryUsage );
        setSMemoryUsage(refVal_sMemoryUsage);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sRunTime")))
    {
        utility::string_t refVal_sRunTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sRunTime")), refVal_sRunTime );
        setSRunTime(refVal_sRunTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iSQLSelects")))
    {
        int32_t refVal_iSQLSelects;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iSQLSelects")), refVal_iSQLSelects );
        setISQLSelects(refVal_iSQLSelects);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iSQLQueries")))
    {
        int32_t refVal_iSQLQueries;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iSQLQueries")), refVal_iSQLQueries );
        setISQLQueries(refVal_iSQLQueries);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_objSQLQuery")))
    {
        std::vector<std::shared_ptr<Common_Response_objSQLQuery>> refVal_a_objSQLQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_objSQLQuery")), refVal_a_objSQLQuery );
        setAObjSQLQuery(refVal_a_objSQLQuery);
    }
    return ok;
}

utility::string_t Common_Response_objDebug::getSMemoryUsage() const
{
    return m_SMemoryUsage;
}

void Common_Response_objDebug::setSMemoryUsage(const utility::string_t& value)
{
    m_SMemoryUsage = value;
    m_SMemoryUsageIsSet = true;
}

bool Common_Response_objDebug::sMemoryUsageIsSet() const
{
    return m_SMemoryUsageIsSet;
}

void Common_Response_objDebug::unsetSMemoryUsage()
{
    m_SMemoryUsageIsSet = false;
}
utility::string_t Common_Response_objDebug::getSRunTime() const
{
    return m_SRunTime;
}

void Common_Response_objDebug::setSRunTime(const utility::string_t& value)
{
    m_SRunTime = value;
    m_SRunTimeIsSet = true;
}

bool Common_Response_objDebug::sRunTimeIsSet() const
{
    return m_SRunTimeIsSet;
}

void Common_Response_objDebug::unsetSRunTime()
{
    m_SRunTimeIsSet = false;
}
int32_t Common_Response_objDebug::getISQLSelects() const
{
    return m_ISQLSelects;
}

void Common_Response_objDebug::setISQLSelects(int32_t value)
{
    m_ISQLSelects = value;
    m_ISQLSelectsIsSet = true;
}

bool Common_Response_objDebug::iSQLSelectsIsSet() const
{
    return m_ISQLSelectsIsSet;
}

void Common_Response_objDebug::unsetISQLSelects()
{
    m_ISQLSelectsIsSet = false;
}
int32_t Common_Response_objDebug::getISQLQueries() const
{
    return m_ISQLQueries;
}

void Common_Response_objDebug::setISQLQueries(int32_t value)
{
    m_ISQLQueries = value;
    m_ISQLQueriesIsSet = true;
}

bool Common_Response_objDebug::iSQLQueriesIsSet() const
{
    return m_ISQLQueriesIsSet;
}

void Common_Response_objDebug::unsetISQLQueries()
{
    m_ISQLQueriesIsSet = false;
}
std::vector<std::shared_ptr<Common_Response_objSQLQuery>>& Common_Response_objDebug::getAObjSQLQuery()
{
    return m_A_objSQLQuery;
}

void Common_Response_objDebug::setAObjSQLQuery(const std::vector<std::shared_ptr<Common_Response_objSQLQuery>>& value)
{
    m_A_objSQLQuery = value;
    m_A_objSQLQueryIsSet = true;
}

bool Common_Response_objDebug::aObjSQLQueryIsSet() const
{
    return m_A_objSQLQueryIsSet;
}

void Common_Response_objDebug::unsetA_objSQLQuery()
{
    m_A_objSQLQueryIsSet = false;
}
}
}
}
}


