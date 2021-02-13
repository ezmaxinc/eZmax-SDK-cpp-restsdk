/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfolder_createObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfolder_createObject_v1_Request::Ezsignfolder_createObject_v1_Request()
{
    m_ObjEzsignfolderIsSet = false;
    m_ObjEzsignfolderCompoundIsSet = false;
}

Ezsignfolder_createObject_v1_Request::~Ezsignfolder_createObject_v1_Request()
{
}

void Ezsignfolder_createObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfolder_createObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignfolderIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfolder")] = ModelBase::toJson(m_ObjEzsignfolder);
    }
    if(m_ObjEzsignfolderCompoundIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfolderCompound")] = ModelBase::toJson(m_ObjEzsignfolderCompound);
    }

    return val;
}

bool Ezsignfolder_createObject_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objEzsignfolder")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignfolder"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignfolder_Request> refVal_objEzsignfolder;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignfolder);
            setObjEzsignfolder(refVal_objEzsignfolder);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objEzsignfolderCompound")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignfolderCompound"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignfolder_RequestCompound> refVal_objEzsignfolderCompound;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignfolderCompound);
            setObjEzsignfolderCompound(refVal_objEzsignfolderCompound);
        }
    }
    return ok;
}

void Ezsignfolder_createObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjEzsignfolderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignfolder"), m_ObjEzsignfolder));
    }
    if(m_ObjEzsignfolderCompoundIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignfolderCompound"), m_ObjEzsignfolderCompound));
    }
}

bool Ezsignfolder_createObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignfolder")))
    {
        std::shared_ptr<Ezsignfolder_Request> refVal_objEzsignfolder;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignfolder")), refVal_objEzsignfolder );
        setObjEzsignfolder(refVal_objEzsignfolder);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignfolderCompound")))
    {
        std::shared_ptr<Ezsignfolder_RequestCompound> refVal_objEzsignfolderCompound;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignfolderCompound")), refVal_objEzsignfolderCompound );
        setObjEzsignfolderCompound(refVal_objEzsignfolderCompound);
    }
    return ok;
}

std::shared_ptr<Ezsignfolder_Request> Ezsignfolder_createObject_v1_Request::getObjEzsignfolder() const
{
    return m_ObjEzsignfolder;
}

void Ezsignfolder_createObject_v1_Request::setObjEzsignfolder(const std::shared_ptr<Ezsignfolder_Request>& value)
{
    m_ObjEzsignfolder = value;
    m_ObjEzsignfolderIsSet = true;
}

bool Ezsignfolder_createObject_v1_Request::objEzsignfolderIsSet() const
{
    return m_ObjEzsignfolderIsSet;
}

void Ezsignfolder_createObject_v1_Request::unsetObjEzsignfolder()
{
    m_ObjEzsignfolderIsSet = false;
}
std::shared_ptr<Ezsignfolder_RequestCompound> Ezsignfolder_createObject_v1_Request::getObjEzsignfolderCompound() const
{
    return m_ObjEzsignfolderCompound;
}

void Ezsignfolder_createObject_v1_Request::setObjEzsignfolderCompound(const std::shared_ptr<Ezsignfolder_RequestCompound>& value)
{
    m_ObjEzsignfolderCompound = value;
    m_ObjEzsignfolderCompoundIsSet = true;
}

bool Ezsignfolder_createObject_v1_Request::objEzsignfolderCompoundIsSet() const
{
    return m_ObjEzsignfolderCompoundIsSet;
}

void Ezsignfolder_createObject_v1_Request::unsetObjEzsignfolderCompound()
{
    m_ObjEzsignfolderCompoundIsSet = false;
}
}
}
}
}


