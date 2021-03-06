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



#include "Ezsignsignature_createObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignsignature_createObject_v1_Request::Ezsignsignature_createObject_v1_Request()
{
    m_ObjEzsignsignatureIsSet = false;
    m_ObjEzsignsignatureCompoundIsSet = false;
}

Ezsignsignature_createObject_v1_Request::~Ezsignsignature_createObject_v1_Request()
{
}

void Ezsignsignature_createObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignsignature_createObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignsignatureIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignsignature")] = ModelBase::toJson(m_ObjEzsignsignature);
    }
    if(m_ObjEzsignsignatureCompoundIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignsignatureCompound")] = ModelBase::toJson(m_ObjEzsignsignatureCompound);
    }

    return val;
}

bool Ezsignsignature_createObject_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objEzsignsignature")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignsignature"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignsignature_Request> refVal_objEzsignsignature;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignsignature);
            setObjEzsignsignature(refVal_objEzsignsignature);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objEzsignsignatureCompound")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsignsignatureCompound"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignsignature_RequestCompound> refVal_objEzsignsignatureCompound;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsignsignatureCompound);
            setObjEzsignsignatureCompound(refVal_objEzsignsignatureCompound);
        }
    }
    return ok;
}

void Ezsignsignature_createObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjEzsignsignatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignsignature"), m_ObjEzsignsignature));
    }
    if(m_ObjEzsignsignatureCompoundIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsignsignatureCompound"), m_ObjEzsignsignatureCompound));
    }
}

bool Ezsignsignature_createObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignsignature")))
    {
        std::shared_ptr<Ezsignsignature_Request> refVal_objEzsignsignature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignsignature")), refVal_objEzsignsignature );
        setObjEzsignsignature(refVal_objEzsignsignature);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objEzsignsignatureCompound")))
    {
        std::shared_ptr<Ezsignsignature_RequestCompound> refVal_objEzsignsignatureCompound;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsignsignatureCompound")), refVal_objEzsignsignatureCompound );
        setObjEzsignsignatureCompound(refVal_objEzsignsignatureCompound);
    }
    return ok;
}

std::shared_ptr<Ezsignsignature_Request> Ezsignsignature_createObject_v1_Request::getObjEzsignsignature() const
{
    return m_ObjEzsignsignature;
}

void Ezsignsignature_createObject_v1_Request::setObjEzsignsignature(const std::shared_ptr<Ezsignsignature_Request>& value)
{
    m_ObjEzsignsignature = value;
    m_ObjEzsignsignatureIsSet = true;
}

bool Ezsignsignature_createObject_v1_Request::objEzsignsignatureIsSet() const
{
    return m_ObjEzsignsignatureIsSet;
}

void Ezsignsignature_createObject_v1_Request::unsetObjEzsignsignature()
{
    m_ObjEzsignsignatureIsSet = false;
}
std::shared_ptr<Ezsignsignature_RequestCompound> Ezsignsignature_createObject_v1_Request::getObjEzsignsignatureCompound() const
{
    return m_ObjEzsignsignatureCompound;
}

void Ezsignsignature_createObject_v1_Request::setObjEzsignsignatureCompound(const std::shared_ptr<Ezsignsignature_RequestCompound>& value)
{
    m_ObjEzsignsignatureCompound = value;
    m_ObjEzsignsignatureCompoundIsSet = true;
}

bool Ezsignsignature_createObject_v1_Request::objEzsignsignatureCompoundIsSet() const
{
    return m_ObjEzsignsignatureCompoundIsSet;
}

void Ezsignsignature_createObject_v1_Request::unsetObjEzsignsignatureCompound()
{
    m_ObjEzsignsignatureCompoundIsSet = false;
}
}
}
}
}


