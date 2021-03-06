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



#include "Ezsignfoldersignerassociation_createObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfoldersignerassociation_createObject_v1_Request::Ezsignfoldersignerassociation_createObject_v1_Request()
{
    m_ObjEzsignfoldersignerassociationIsSet = false;
    m_ObjEzsignfoldersignerassociationCompoundIsSet = false;
}

Ezsignfoldersignerassociation_createObject_v1_Request::~Ezsignfoldersignerassociation_createObject_v1_Request()
{
}

void Ezsignfoldersignerassociation_createObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfoldersignerassociation_createObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignfoldersignerassociationIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfoldersignerassociation")] = ModelBase::toJson(m_ObjEzsignfoldersignerassociation);
    }
    if(m_ObjEzsignfoldersignerassociationCompoundIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfoldersignerassociationCompound")] = ModelBase::toJson(m_ObjEzsignfoldersignerassociationCompound);
    }

    return val;
}

bool Ezsignfoldersignerassociation_createObject_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objEzsignfoldersignerassociation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignfoldersignerassociation"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignfoldersignerassociation_Request> refVal_objEzsignfoldersignerassociation;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignfoldersignerassociation);
            setObjEzsignfoldersignerassociation(refVal_objEzsignfoldersignerassociation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objEzsignfoldersignerassociationCompound")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignfoldersignerassociationCompound"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound> refVal_objEzsignfoldersignerassociationCompound;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignfoldersignerassociationCompound);
            setObjEzsignfoldersignerassociationCompound(refVal_objEzsignfoldersignerassociationCompound);
        }
    }
    return ok;
}

void Ezsignfoldersignerassociation_createObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjEzsignfoldersignerassociationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignfoldersignerassociation"), m_ObjEzsignfoldersignerassociation));
    }
    if(m_ObjEzsignfoldersignerassociationCompoundIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignfoldersignerassociationCompound"), m_ObjEzsignfoldersignerassociationCompound));
    }
}

bool Ezsignfoldersignerassociation_createObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignfoldersignerassociation")))
    {
        std::shared_ptr<Ezsignfoldersignerassociation_Request> refVal_objEzsignfoldersignerassociation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignfoldersignerassociation")), refVal_objEzsignfoldersignerassociation );
        setObjEzsignfoldersignerassociation(refVal_objEzsignfoldersignerassociation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignfoldersignerassociationCompound")))
    {
        std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound> refVal_objEzsignfoldersignerassociationCompound;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignfoldersignerassociationCompound")), refVal_objEzsignfoldersignerassociationCompound );
        setObjEzsignfoldersignerassociationCompound(refVal_objEzsignfoldersignerassociationCompound);
    }
    return ok;
}

std::shared_ptr<Ezsignfoldersignerassociation_Request> Ezsignfoldersignerassociation_createObject_v1_Request::getObjEzsignfoldersignerassociation() const
{
    return m_ObjEzsignfoldersignerassociation;
}

void Ezsignfoldersignerassociation_createObject_v1_Request::setObjEzsignfoldersignerassociation(const std::shared_ptr<Ezsignfoldersignerassociation_Request>& value)
{
    m_ObjEzsignfoldersignerassociation = value;
    m_ObjEzsignfoldersignerassociationIsSet = true;
}

bool Ezsignfoldersignerassociation_createObject_v1_Request::objEzsignfoldersignerassociationIsSet() const
{
    return m_ObjEzsignfoldersignerassociationIsSet;
}

void Ezsignfoldersignerassociation_createObject_v1_Request::unsetObjEzsignfoldersignerassociation()
{
    m_ObjEzsignfoldersignerassociationIsSet = false;
}
std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound> Ezsignfoldersignerassociation_createObject_v1_Request::getObjEzsignfoldersignerassociationCompound() const
{
    return m_ObjEzsignfoldersignerassociationCompound;
}

void Ezsignfoldersignerassociation_createObject_v1_Request::setObjEzsignfoldersignerassociationCompound(const std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound>& value)
{
    m_ObjEzsignfoldersignerassociationCompound = value;
    m_ObjEzsignfoldersignerassociationCompoundIsSet = true;
}

bool Ezsignfoldersignerassociation_createObject_v1_Request::objEzsignfoldersignerassociationCompoundIsSet() const
{
    return m_ObjEzsignfoldersignerassociationCompoundIsSet;
}

void Ezsignfoldersignerassociation_createObject_v1_Request::unsetObjEzsignfoldersignerassociationCompound()
{
    m_ObjEzsignfoldersignerassociationCompoundIsSet = false;
}
}
}
}
}


