/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.35
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfoldersignerassociation_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfoldersignerassociation_RequestCompound::Ezsignfoldersignerassociation_RequestCompound()
{
    m_ObjEzsignsignerIsSet = false;
    m_FkiUserID = 0;
    m_FkiUserIDIsSet = false;
    m_FkiEzsignfolderID = 0;
    m_FkiEzsignfolderIDIsSet = false;
}

Ezsignfoldersignerassociation_RequestCompound::~Ezsignfoldersignerassociation_RequestCompound()
{
}

void Ezsignfoldersignerassociation_RequestCompound::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfoldersignerassociation_RequestCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignsignerIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignsigner")] = ModelBase::toJson(m_ObjEzsignsigner);
    }
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

bool Ezsignfoldersignerassociation_RequestCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objEzsignsigner")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignsigner"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignsigner_RequestCompound> refVal_objEzsignsigner;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignsigner);
            setObjEzsignsigner(refVal_objEzsignsigner);
        }
    }
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

void Ezsignfoldersignerassociation_RequestCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjEzsignsignerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignsigner"), m_ObjEzsignsigner));
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

bool Ezsignfoldersignerassociation_RequestCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignsigner")))
    {
        std::shared_ptr<Ezsignsigner_RequestCompound> refVal_objEzsignsigner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignsigner")), refVal_objEzsignsigner );
        setObjEzsignsigner(refVal_objEzsignsigner);
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

std::shared_ptr<Ezsignsigner_RequestCompound> Ezsignfoldersignerassociation_RequestCompound::getObjEzsignsigner() const
{
    return m_ObjEzsignsigner;
}

void Ezsignfoldersignerassociation_RequestCompound::setObjEzsignsigner(const std::shared_ptr<Ezsignsigner_RequestCompound>& value)
{
    m_ObjEzsignsigner = value;
    m_ObjEzsignsignerIsSet = true;
}

bool Ezsignfoldersignerassociation_RequestCompound::objEzsignsignerIsSet() const
{
    return m_ObjEzsignsignerIsSet;
}

void Ezsignfoldersignerassociation_RequestCompound::unsetObjEzsignsigner()
{
    m_ObjEzsignsignerIsSet = false;
}
int32_t Ezsignfoldersignerassociation_RequestCompound::getFkiUserID() const
{
    return m_FkiUserID;
}

void Ezsignfoldersignerassociation_RequestCompound::setFkiUserID(int32_t value)
{
    m_FkiUserID = value;
    m_FkiUserIDIsSet = true;
}

bool Ezsignfoldersignerassociation_RequestCompound::fkiUserIDIsSet() const
{
    return m_FkiUserIDIsSet;
}

void Ezsignfoldersignerassociation_RequestCompound::unsetFkiUserID()
{
    m_FkiUserIDIsSet = false;
}
int32_t Ezsignfoldersignerassociation_RequestCompound::getFkiEzsignfolderID() const
{
    return m_FkiEzsignfolderID;
}

void Ezsignfoldersignerassociation_RequestCompound::setFkiEzsignfolderID(int32_t value)
{
    m_FkiEzsignfolderID = value;
    m_FkiEzsignfolderIDIsSet = true;
}

bool Ezsignfoldersignerassociation_RequestCompound::fkiEzsignfolderIDIsSet() const
{
    return m_FkiEzsignfolderIDIsSet;
}

void Ezsignfoldersignerassociation_RequestCompound::unsetFkiEzsignfolderID()
{
    m_FkiEzsignfolderIDIsSet = false;
}
}
}
}
}


