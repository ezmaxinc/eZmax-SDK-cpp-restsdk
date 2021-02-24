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



#include "UNUSED_ezsignsignature_editObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UNUSED_ezsignsignature_editObject_v1_Request::UNUSED_ezsignsignature_editObject_v1_Request()
{
    m_ObjEzsignsignatureIsSet = false;
}

UNUSED_ezsignsignature_editObject_v1_Request::~UNUSED_ezsignsignature_editObject_v1_Request()
{
}

void UNUSED_ezsignsignature_editObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value UNUSED_ezsignsignature_editObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignsignatureIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignsignature")] = ModelBase::toJson(m_ObjEzsignsignature);
    }

    return val;
}

bool UNUSED_ezsignsignature_editObject_v1_Request::fromJson(const web::json::value& val)
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
    return ok;
}

void UNUSED_ezsignsignature_editObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool UNUSED_ezsignsignature_editObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::shared_ptr<Ezsignsignature_Request> UNUSED_ezsignsignature_editObject_v1_Request::getObjEzsignsignature() const
{
    return m_ObjEzsignsignature;
}

void UNUSED_ezsignsignature_editObject_v1_Request::setObjEzsignsignature(const std::shared_ptr<Ezsignsignature_Request>& value)
{
    m_ObjEzsignsignature = value;
    m_ObjEzsignsignatureIsSet = true;
}

bool UNUSED_ezsignsignature_editObject_v1_Request::objEzsignsignatureIsSet() const
{
    return m_ObjEzsignsignatureIsSet;
}

void UNUSED_ezsignsignature_editObject_v1_Request::unsetObjEzsignsignature()
{
    m_ObjEzsignsignatureIsSet = false;
}
}
}
}
}

