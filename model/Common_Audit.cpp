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



#include "Common_Audit.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_Audit::Common_Audit()
{
    m_FkiUserIDCreated = 0;
    m_FkiUserIDCreatedIsSet = false;
    m_FkiUserIDModified = 0;
    m_FkiUserIDModifiedIsSet = false;
    m_FkiApikeyIDCreated = 0;
    m_FkiApikeyIDCreatedIsSet = false;
    m_FkiApikeyIDModified = 0;
    m_FkiApikeyIDModifiedIsSet = false;
    m_DtCreatedDate = utility::conversions::to_string_t("");
    m_DtCreatedDateIsSet = false;
    m_DtModifiedDate = utility::conversions::to_string_t("");
    m_DtModifiedDateIsSet = false;
}

Common_Audit::~Common_Audit()
{
}

void Common_Audit::validate()
{
    // TODO: implement validation
}

web::json::value Common_Audit::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiUserIDCreatedIsSet)
    {
        val[utility::conversions::to_string_t("fkiUserIDCreated")] = ModelBase::toJson(m_FkiUserIDCreated);
    }
    if(m_FkiUserIDModifiedIsSet)
    {
        val[utility::conversions::to_string_t("fkiUserIDModified")] = ModelBase::toJson(m_FkiUserIDModified);
    }
    if(m_FkiApikeyIDCreatedIsSet)
    {
        val[utility::conversions::to_string_t("fkiApikeyIDCreated")] = ModelBase::toJson(m_FkiApikeyIDCreated);
    }
    if(m_FkiApikeyIDModifiedIsSet)
    {
        val[utility::conversions::to_string_t("fkiApikeyIDModified")] = ModelBase::toJson(m_FkiApikeyIDModified);
    }
    if(m_DtCreatedDateIsSet)
    {
        val[utility::conversions::to_string_t("dtCreatedDate")] = ModelBase::toJson(m_DtCreatedDate);
    }
    if(m_DtModifiedDateIsSet)
    {
        val[utility::conversions::to_string_t("dtModifiedDate")] = ModelBase::toJson(m_DtModifiedDate);
    }

    return val;
}

bool Common_Audit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiUserIDCreated")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiUserIDCreated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiUserIDCreated;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiUserIDCreated);
            setFkiUserIDCreated(refVal_fkiUserIDCreated);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiUserIDModified")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiUserIDModified"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiUserIDModified;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiUserIDModified);
            setFkiUserIDModified(refVal_fkiUserIDModified);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiApikeyIDCreated")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiApikeyIDCreated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiApikeyIDCreated;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiApikeyIDCreated);
            setFkiApikeyIDCreated(refVal_fkiApikeyIDCreated);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiApikeyIDModified")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiApikeyIDModified"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiApikeyIDModified;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiApikeyIDModified);
            setFkiApikeyIDModified(refVal_fkiApikeyIDModified);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtCreatedDate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtCreatedDate"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtCreatedDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtCreatedDate);
            setDtCreatedDate(refVal_dtCreatedDate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtModifiedDate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtModifiedDate"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtModifiedDate;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtModifiedDate);
            setDtModifiedDate(refVal_dtModifiedDate);
        }
    }
    return ok;
}

void Common_Audit::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiUserIDCreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiUserIDCreated"), m_FkiUserIDCreated));
    }
    if(m_FkiUserIDModifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiUserIDModified"), m_FkiUserIDModified));
    }
    if(m_FkiApikeyIDCreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiApikeyIDCreated"), m_FkiApikeyIDCreated));
    }
    if(m_FkiApikeyIDModifiedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiApikeyIDModified"), m_FkiApikeyIDModified));
    }
    if(m_DtCreatedDateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtCreatedDate"), m_DtCreatedDate));
    }
    if(m_DtModifiedDateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtModifiedDate"), m_DtModifiedDate));
    }
}

bool Common_Audit::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiUserIDCreated")))
    {
        int32_t refVal_fkiUserIDCreated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiUserIDCreated")), refVal_fkiUserIDCreated );
        setFkiUserIDCreated(refVal_fkiUserIDCreated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiUserIDModified")))
    {
        int32_t refVal_fkiUserIDModified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiUserIDModified")), refVal_fkiUserIDModified );
        setFkiUserIDModified(refVal_fkiUserIDModified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiApikeyIDCreated")))
    {
        int32_t refVal_fkiApikeyIDCreated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiApikeyIDCreated")), refVal_fkiApikeyIDCreated );
        setFkiApikeyIDCreated(refVal_fkiApikeyIDCreated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiApikeyIDModified")))
    {
        int32_t refVal_fkiApikeyIDModified;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiApikeyIDModified")), refVal_fkiApikeyIDModified );
        setFkiApikeyIDModified(refVal_fkiApikeyIDModified);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtCreatedDate")))
    {
        utility::string_t refVal_dtCreatedDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtCreatedDate")), refVal_dtCreatedDate );
        setDtCreatedDate(refVal_dtCreatedDate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtModifiedDate")))
    {
        utility::string_t refVal_dtModifiedDate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtModifiedDate")), refVal_dtModifiedDate );
        setDtModifiedDate(refVal_dtModifiedDate);
    }
    return ok;
}

int32_t Common_Audit::getFkiUserIDCreated() const
{
    return m_FkiUserIDCreated;
}

void Common_Audit::setFkiUserIDCreated(int32_t value)
{
    m_FkiUserIDCreated = value;
    m_FkiUserIDCreatedIsSet = true;
}

bool Common_Audit::fkiUserIDCreatedIsSet() const
{
    return m_FkiUserIDCreatedIsSet;
}

void Common_Audit::unsetFkiUserIDCreated()
{
    m_FkiUserIDCreatedIsSet = false;
}
int32_t Common_Audit::getFkiUserIDModified() const
{
    return m_FkiUserIDModified;
}

void Common_Audit::setFkiUserIDModified(int32_t value)
{
    m_FkiUserIDModified = value;
    m_FkiUserIDModifiedIsSet = true;
}

bool Common_Audit::fkiUserIDModifiedIsSet() const
{
    return m_FkiUserIDModifiedIsSet;
}

void Common_Audit::unsetFkiUserIDModified()
{
    m_FkiUserIDModifiedIsSet = false;
}
int32_t Common_Audit::getFkiApikeyIDCreated() const
{
    return m_FkiApikeyIDCreated;
}

void Common_Audit::setFkiApikeyIDCreated(int32_t value)
{
    m_FkiApikeyIDCreated = value;
    m_FkiApikeyIDCreatedIsSet = true;
}

bool Common_Audit::fkiApikeyIDCreatedIsSet() const
{
    return m_FkiApikeyIDCreatedIsSet;
}

void Common_Audit::unsetFkiApikeyIDCreated()
{
    m_FkiApikeyIDCreatedIsSet = false;
}
int32_t Common_Audit::getFkiApikeyIDModified() const
{
    return m_FkiApikeyIDModified;
}

void Common_Audit::setFkiApikeyIDModified(int32_t value)
{
    m_FkiApikeyIDModified = value;
    m_FkiApikeyIDModifiedIsSet = true;
}

bool Common_Audit::fkiApikeyIDModifiedIsSet() const
{
    return m_FkiApikeyIDModifiedIsSet;
}

void Common_Audit::unsetFkiApikeyIDModified()
{
    m_FkiApikeyIDModifiedIsSet = false;
}
utility::string_t Common_Audit::getDtCreatedDate() const
{
    return m_DtCreatedDate;
}

void Common_Audit::setDtCreatedDate(const utility::string_t& value)
{
    m_DtCreatedDate = value;
    m_DtCreatedDateIsSet = true;
}

bool Common_Audit::dtCreatedDateIsSet() const
{
    return m_DtCreatedDateIsSet;
}

void Common_Audit::unsetDtCreatedDate()
{
    m_DtCreatedDateIsSet = false;
}
utility::string_t Common_Audit::getDtModifiedDate() const
{
    return m_DtModifiedDate;
}

void Common_Audit::setDtModifiedDate(const utility::string_t& value)
{
    m_DtModifiedDate = value;
    m_DtModifiedDateIsSet = true;
}

bool Common_Audit::dtModifiedDateIsSet() const
{
    return m_DtModifiedDateIsSet;
}

void Common_Audit::unsetDtModifiedDate()
{
    m_DtModifiedDateIsSet = false;
}
}
}
}
}


