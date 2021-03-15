/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfoldersignerassociation_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfoldersignerassociation_Request::Ezsignfoldersignerassociation_Request()
{
    m_FkiUserID = 0;
    m_FkiUserIDIsSet = false;
    m_FkiEzsignfolderID = 0;
    m_FkiEzsignfolderIDIsSet = false;
}

Ezsignfoldersignerassociation_Request::~Ezsignfoldersignerassociation_Request()
{
}

void Ezsignfoldersignerassociation_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfoldersignerassociation_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiUserIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiUserID")] = ModelBase::toJson(m_FkiUserID);
    }
    if(m_FkiEzsignfolderIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsignfolderID")] = ModelBase::toJson(m_FkiEzsignfolderID);
    }

    return val;
}

bool Ezsignfoldersignerassociation_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiUserID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiUserID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiUserID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiUserID);
            setFkiUserID(refVal_fkiUserID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiEzsignfolderID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsignfolderID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsignfolderID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsignfolderID);
            setFkiEzsignfolderID(refVal_fkiEzsignfolderID);
        }
    }
    return ok;
}

void Ezsignfoldersignerassociation_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiUserIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiUserID"), m_FkiUserID));
    }
    if(m_FkiEzsignfolderIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsignfolderID"), m_FkiEzsignfolderID));
    }
}

bool Ezsignfoldersignerassociation_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiUserID")))
    {
        int32_t refVal_fkiUserID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiUserID")), refVal_fkiUserID );
        setFkiUserID(refVal_fkiUserID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsignfolderID")))
    {
        int32_t refVal_fkiEzsignfolderID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsignfolderID")), refVal_fkiEzsignfolderID );
        setFkiEzsignfolderID(refVal_fkiEzsignfolderID);
    }
    return ok;
}

int32_t Ezsignfoldersignerassociation_Request::getFkiUserID() const
{
    return m_FkiUserID;
}

void Ezsignfoldersignerassociation_Request::setFkiUserID(int32_t value)
{
    m_FkiUserID = value;
    m_FkiUserIDIsSet = true;
}

bool Ezsignfoldersignerassociation_Request::fkiUserIDIsSet() const
{
    return m_FkiUserIDIsSet;
}

void Ezsignfoldersignerassociation_Request::unsetFkiUserID()
{
    m_FkiUserIDIsSet = false;
}
int32_t Ezsignfoldersignerassociation_Request::getFkiEzsignfolderID() const
{
    return m_FkiEzsignfolderID;
}

void Ezsignfoldersignerassociation_Request::setFkiEzsignfolderID(int32_t value)
{
    m_FkiEzsignfolderID = value;
    m_FkiEzsignfolderIDIsSet = true;
}

bool Ezsignfoldersignerassociation_Request::fkiEzsignfolderIDIsSet() const
{
    return m_FkiEzsignfolderIDIsSet;
}

void Ezsignfoldersignerassociation_Request::unsetFkiEzsignfolderID()
{
    m_FkiEzsignfolderIDIsSet = false;
}
}
}
}
}


