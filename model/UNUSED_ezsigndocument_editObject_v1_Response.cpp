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



#include "UNUSED_ezsigndocument_editObject_v1_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UNUSED_ezsigndocument_editObject_v1_Response::UNUSED_ezsigndocument_editObject_v1_Response()
{
    m_ObjDebugPayloadIsSet = false;
    m_ObjDebugIsSet = false;
}

UNUSED_ezsigndocument_editObject_v1_Response::~UNUSED_ezsigndocument_editObject_v1_Response()
{
}

void UNUSED_ezsigndocument_editObject_v1_Response::validate()
{
    // TODO: implement validation
}

web::json::value UNUSED_ezsigndocument_editObject_v1_Response::toJson() const
{

    web::json::value val = web::json::value::object();
    
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

bool UNUSED_ezsigndocument_editObject_v1_Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void UNUSED_ezsigndocument_editObject_v1_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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

bool UNUSED_ezsigndocument_editObject_v1_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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

std::shared_ptr<Common_Response_objDebugPayload> UNUSED_ezsigndocument_editObject_v1_Response::getObjDebugPayload() const
{
    return m_ObjDebugPayload;
}

void UNUSED_ezsigndocument_editObject_v1_Response::setObjDebugPayload(const std::shared_ptr<Common_Response_objDebugPayload>& value)
{
    m_ObjDebugPayload = value;
    m_ObjDebugPayloadIsSet = true;
}

bool UNUSED_ezsigndocument_editObject_v1_Response::objDebugPayloadIsSet() const
{
    return m_ObjDebugPayloadIsSet;
}

void UNUSED_ezsigndocument_editObject_v1_Response::unsetObjDebugPayload()
{
    m_ObjDebugPayloadIsSet = false;
}
std::shared_ptr<Common_Response_objDebug> UNUSED_ezsigndocument_editObject_v1_Response::getObjDebug() const
{
    return m_ObjDebug;
}

void UNUSED_ezsigndocument_editObject_v1_Response::setObjDebug(const std::shared_ptr<Common_Response_objDebug>& value)
{
    m_ObjDebug = value;
    m_ObjDebugIsSet = true;
}

bool UNUSED_ezsigndocument_editObject_v1_Response::objDebugIsSet() const
{
    return m_ObjDebugIsSet;
}

void UNUSED_ezsigndocument_editObject_v1_Response::unsetObjDebug()
{
    m_ObjDebugIsSet = false;
}
}
}
}
}


