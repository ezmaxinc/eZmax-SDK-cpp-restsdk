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



#include "Apikey_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Apikey_Response::Apikey_Response()
{
    m_ObjApikeyDescriptionIsSet = false;
    m_SComputedToken = utility::conversions::to_string_t("");
    m_SComputedTokenIsSet = false;
    m_PkiApikeyID = 0;
    m_PkiApikeyIDIsSet = false;
    m_ObjAuditIsSet = false;
}

Apikey_Response::~Apikey_Response()
{
}

void Apikey_Response::validate()
{
    // TODO: implement validation
}

web::json::value Apikey_Response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjApikeyDescriptionIsSet)
    {
        val[utility::conversions::to_string_t("objApikeyDescription")] = ModelBase::toJson(m_ObjApikeyDescription);
    }
    if(m_SComputedTokenIsSet)
    {
        val[utility::conversions::to_string_t("sComputedToken")] = ModelBase::toJson(m_SComputedToken);
    }
    if(m_PkiApikeyIDIsSet)
    {
        val[utility::conversions::to_string_t("pkiApikeyID")] = ModelBase::toJson(m_PkiApikeyID);
    }
    if(m_ObjAuditIsSet)
    {
        val[utility::conversions::to_string_t("objAudit")] = ModelBase::toJson(m_ObjAudit);
    }

    return val;
}

bool Apikey_Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objApikeyDescription")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objApikeyDescription"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Multilingual_ApikeyDescription> refVal_objApikeyDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_objApikeyDescription);
            setObjApikeyDescription(refVal_objApikeyDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sComputedToken")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sComputedToken"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sComputedToken;
            ok &= ModelBase::fromJson(fieldValue, refVal_sComputedToken);
            setSComputedToken(refVal_sComputedToken);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiApikeyID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiApikeyID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pkiApikeyID;
            ok &= ModelBase::fromJson(fieldValue, refVal_pkiApikeyID);
            setPkiApikeyID(refVal_pkiApikeyID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objAudit")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objAudit"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Common_Audit> refVal_objAudit;
            ok &= ModelBase::fromJson(fieldValue, refVal_objAudit);
            setObjAudit(refVal_objAudit);
        }
    }
    return ok;
}

void Apikey_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjApikeyDescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objApikeyDescription"), m_ObjApikeyDescription));
    }
    if(m_SComputedTokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sComputedToken"), m_SComputedToken));
    }
    if(m_PkiApikeyIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pkiApikeyID"), m_PkiApikeyID));
    }
    if(m_ObjAuditIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objAudit"), m_ObjAudit));
    }
}

bool Apikey_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objApikeyDescription")))
    {
        std::shared_ptr<Multilingual_ApikeyDescription> refVal_objApikeyDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objApikeyDescription")), refVal_objApikeyDescription );
        setObjApikeyDescription(refVal_objApikeyDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sComputedToken")))
    {
        utility::string_t refVal_sComputedToken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sComputedToken")), refVal_sComputedToken );
        setSComputedToken(refVal_sComputedToken);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pkiApikeyID")))
    {
        int32_t refVal_pkiApikeyID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pkiApikeyID")), refVal_pkiApikeyID );
        setPkiApikeyID(refVal_pkiApikeyID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objAudit")))
    {
        std::shared_ptr<Common_Audit> refVal_objAudit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objAudit")), refVal_objAudit );
        setObjAudit(refVal_objAudit);
    }
    return ok;
}

std::shared_ptr<Multilingual_ApikeyDescription> Apikey_Response::getObjApikeyDescription() const
{
    return m_ObjApikeyDescription;
}

void Apikey_Response::setObjApikeyDescription(const std::shared_ptr<Multilingual_ApikeyDescription>& value)
{
    m_ObjApikeyDescription = value;
    m_ObjApikeyDescriptionIsSet = true;
}

bool Apikey_Response::objApikeyDescriptionIsSet() const
{
    return m_ObjApikeyDescriptionIsSet;
}

void Apikey_Response::unsetObjApikeyDescription()
{
    m_ObjApikeyDescriptionIsSet = false;
}
utility::string_t Apikey_Response::getSComputedToken() const
{
    return m_SComputedToken;
}

void Apikey_Response::setSComputedToken(const utility::string_t& value)
{
    m_SComputedToken = value;
    m_SComputedTokenIsSet = true;
}

bool Apikey_Response::sComputedTokenIsSet() const
{
    return m_SComputedTokenIsSet;
}

void Apikey_Response::unsetSComputedToken()
{
    m_SComputedTokenIsSet = false;
}
int32_t Apikey_Response::getPkiApikeyID() const
{
    return m_PkiApikeyID;
}

void Apikey_Response::setPkiApikeyID(int32_t value)
{
    m_PkiApikeyID = value;
    m_PkiApikeyIDIsSet = true;
}

bool Apikey_Response::pkiApikeyIDIsSet() const
{
    return m_PkiApikeyIDIsSet;
}

void Apikey_Response::unsetPkiApikeyID()
{
    m_PkiApikeyIDIsSet = false;
}
std::shared_ptr<Common_Audit> Apikey_Response::getObjAudit() const
{
    return m_ObjAudit;
}

void Apikey_Response::setObjAudit(const std::shared_ptr<Common_Audit>& value)
{
    m_ObjAudit = value;
    m_ObjAuditIsSet = true;
}

bool Apikey_Response::objAuditIsSet() const
{
    return m_ObjAuditIsSet;
}

void Apikey_Response::unsetObjAudit()
{
    m_ObjAuditIsSet = false;
}
}
}
}
}


