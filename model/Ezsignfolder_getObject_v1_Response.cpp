/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfolder_getObject_v1_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfolder_getObject_v1_Response::Ezsignfolder_getObject_v1_Response()
{
    m_MPayloadIsSet = false;
    m_ObjDebugPayloadIsSet = false;
    m_ObjDebugIsSet = false;
}

Ezsignfolder_getObject_v1_Response::~Ezsignfolder_getObject_v1_Response()
{
}

void Ezsignfolder_getObject_v1_Response::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfolder_getObject_v1_Response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MPayloadIsSet)
    {
        val[utility::conversions::to_string_t("mPayload")] = ModelBase::toJson(m_MPayload);
    }
    if(m_ObjDebugPayloadIsSet)
    {
        val[utility::conversions::to_string_t("objDebugPayload")] = ModelBase::toJson(m_ObjDebugPayload);
    }
    if(m_ObjDebugIsSet)
    {
        val[utility::conversions::to_string_t("objDebug")] = ModelBase::toJson(m_ObjDebug);
    }

    return val;
}

bool Ezsignfolder_getObject_v1_Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mPayload")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mPayload"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignfolder_getObject_v1_Response_mPayload> refVal_mPayload;
            ok &= ModelBase::fromJson(fieldValue, refVal_mPayload);
            setMPayload(refVal_mPayload);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objDebugPayload")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objDebugPayload"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Common_Response_objDebugPayload> refVal_objDebugPayload;
            ok &= ModelBase::fromJson(fieldValue, refVal_objDebugPayload);
            setObjDebugPayload(refVal_objDebugPayload);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objDebug")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objDebug"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Common_Response_objDebug> refVal_objDebug;
            ok &= ModelBase::fromJson(fieldValue, refVal_objDebug);
            setObjDebug(refVal_objDebug);
        }
    }
    return ok;
}

void Ezsignfolder_getObject_v1_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MPayloadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mPayload"), m_MPayload));
    }
    if(m_ObjDebugPayloadIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objDebugPayload"), m_ObjDebugPayload));
    }
    if(m_ObjDebugIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objDebug"), m_ObjDebug));
    }
}

bool Ezsignfolder_getObject_v1_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("mPayload")))
    {
        std::shared_ptr<Ezsignfolder_getObject_v1_Response_mPayload> refVal_mPayload;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mPayload")), refVal_mPayload );
        setMPayload(refVal_mPayload);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objDebugPayload")))
    {
        std::shared_ptr<Common_Response_objDebugPayload> refVal_objDebugPayload;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objDebugPayload")), refVal_objDebugPayload );
        setObjDebugPayload(refVal_objDebugPayload);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objDebug")))
    {
        std::shared_ptr<Common_Response_objDebug> refVal_objDebug;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objDebug")), refVal_objDebug );
        setObjDebug(refVal_objDebug);
    }
    return ok;
}

std::shared_ptr<Ezsignfolder_getObject_v1_Response_mPayload> Ezsignfolder_getObject_v1_Response::getMPayload() const
{
    return m_MPayload;
}

void Ezsignfolder_getObject_v1_Response::setMPayload(const std::shared_ptr<Ezsignfolder_getObject_v1_Response_mPayload>& value)
{
    m_MPayload = value;
    m_MPayloadIsSet = true;
}

bool Ezsignfolder_getObject_v1_Response::mPayloadIsSet() const
{
    return m_MPayloadIsSet;
}

void Ezsignfolder_getObject_v1_Response::unsetMPayload()
{
    m_MPayloadIsSet = false;
}
std::shared_ptr<Common_Response_objDebugPayload> Ezsignfolder_getObject_v1_Response::getObjDebugPayload() const
{
    return m_ObjDebugPayload;
}

void Ezsignfolder_getObject_v1_Response::setObjDebugPayload(const std::shared_ptr<Common_Response_objDebugPayload>& value)
{
    m_ObjDebugPayload = value;
    m_ObjDebugPayloadIsSet = true;
}

bool Ezsignfolder_getObject_v1_Response::objDebugPayloadIsSet() const
{
    return m_ObjDebugPayloadIsSet;
}

void Ezsignfolder_getObject_v1_Response::unsetObjDebugPayload()
{
    m_ObjDebugPayloadIsSet = false;
}
std::shared_ptr<Common_Response_objDebug> Ezsignfolder_getObject_v1_Response::getObjDebug() const
{
    return m_ObjDebug;
}

void Ezsignfolder_getObject_v1_Response::setObjDebug(const std::shared_ptr<Common_Response_objDebug>& value)
{
    m_ObjDebug = value;
    m_ObjDebugIsSet = true;
}

bool Ezsignfolder_getObject_v1_Response::objDebugIsSet() const
{
    return m_ObjDebugIsSet;
}

void Ezsignfolder_getObject_v1_Response::unsetObjDebug()
{
    m_ObjDebugIsSet = false;
}
}
}
}
}


