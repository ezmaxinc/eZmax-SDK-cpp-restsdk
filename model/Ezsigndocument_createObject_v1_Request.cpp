/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsigndocument_createObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_createObject_v1_Request::Ezsigndocument_createObject_v1_Request()
{
    m_ObjEzsigndocumentIsSet = false;
    m_ObjEzsigndocumentCompoundIsSet = false;
}

Ezsigndocument_createObject_v1_Request::~Ezsigndocument_createObject_v1_Request()
{
}

void Ezsigndocument_createObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_createObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsigndocumentIsSet)
    {
        val[utility::conversions::to_string_t("objEzsigndocument")] = ModelBase::toJson(m_ObjEzsigndocument);
    }
    if(m_ObjEzsigndocumentCompoundIsSet)
    {
        val[utility::conversions::to_string_t("objEzsigndocumentCompound")] = ModelBase::toJson(m_ObjEzsigndocumentCompound);
    }

    return val;
}

bool Ezsigndocument_createObject_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objEzsigndocument")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsigndocument"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsigndocument_Request> refVal_objEzsigndocument;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsigndocument);
            setObjEzsigndocument(refVal_objEzsigndocument);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objEzsigndocumentCompound")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objEzsigndocumentCompound"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsigndocument_RequestCompound> refVal_objEzsigndocumentCompound;
            ok &= ModelBase::fromJson(fieldValue, refVal_objEzsigndocumentCompound);
            setObjEzsigndocumentCompound(refVal_objEzsigndocumentCompound);
        }
    }
    return ok;
}

void Ezsigndocument_createObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjEzsigndocumentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsigndocument"), m_ObjEzsigndocument));
    }
    if(m_ObjEzsigndocumentCompoundIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objEzsigndocumentCompound"), m_ObjEzsigndocumentCompound));
    }
}

bool Ezsigndocument_createObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objEzsigndocument")))
    {
        std::shared_ptr<Ezsigndocument_Request> refVal_objEzsigndocument;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsigndocument")), refVal_objEzsigndocument );
        setObjEzsigndocument(refVal_objEzsigndocument);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objEzsigndocumentCompound")))
    {
        std::shared_ptr<Ezsigndocument_RequestCompound> refVal_objEzsigndocumentCompound;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objEzsigndocumentCompound")), refVal_objEzsigndocumentCompound );
        setObjEzsigndocumentCompound(refVal_objEzsigndocumentCompound);
    }
    return ok;
}

std::shared_ptr<Ezsigndocument_Request> Ezsigndocument_createObject_v1_Request::getObjEzsigndocument() const
{
    return m_ObjEzsigndocument;
}

void Ezsigndocument_createObject_v1_Request::setObjEzsigndocument(const std::shared_ptr<Ezsigndocument_Request>& value)
{
    m_ObjEzsigndocument = value;
    m_ObjEzsigndocumentIsSet = true;
}

bool Ezsigndocument_createObject_v1_Request::objEzsigndocumentIsSet() const
{
    return m_ObjEzsigndocumentIsSet;
}

void Ezsigndocument_createObject_v1_Request::unsetObjEzsigndocument()
{
    m_ObjEzsigndocumentIsSet = false;
}
std::shared_ptr<Ezsigndocument_RequestCompound> Ezsigndocument_createObject_v1_Request::getObjEzsigndocumentCompound() const
{
    return m_ObjEzsigndocumentCompound;
}

void Ezsigndocument_createObject_v1_Request::setObjEzsigndocumentCompound(const std::shared_ptr<Ezsigndocument_RequestCompound>& value)
{
    m_ObjEzsigndocumentCompound = value;
    m_ObjEzsigndocumentCompoundIsSet = true;
}

bool Ezsigndocument_createObject_v1_Request::objEzsigndocumentCompoundIsSet() const
{
    return m_ObjEzsigndocumentCompoundIsSet;
}

void Ezsigndocument_createObject_v1_Request::unsetObjEzsigndocumentCompound()
{
    m_ObjEzsigndocumentCompoundIsSet = false;
}
}
}
}
}


