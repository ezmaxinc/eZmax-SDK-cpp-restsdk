/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "UNUSED_ezsignfolder_editObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UNUSED_ezsignfolder_editObject_v1_Request::UNUSED_ezsignfolder_editObject_v1_Request()
{
    m_ObjEzsignfolderIsSet = false;
}

UNUSED_ezsignfolder_editObject_v1_Request::~UNUSED_ezsignfolder_editObject_v1_Request()
{
}

void UNUSED_ezsignfolder_editObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value UNUSED_ezsignfolder_editObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignfolderIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfolder")] = ModelBase::toJson(m_ObjEzsignfolder);
    }

    return val;
}

bool UNUSED_ezsignfolder_editObject_v1_Request::fromJson(const web::json::value& val)
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
    return ok;
}

void UNUSED_ezsignfolder_editObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool UNUSED_ezsignfolder_editObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::shared_ptr<Ezsignfolder_Request> UNUSED_ezsignfolder_editObject_v1_Request::getObjEzsignfolder() const
{
    return m_ObjEzsignfolder;
}

void UNUSED_ezsignfolder_editObject_v1_Request::setObjEzsignfolder(const std::shared_ptr<Ezsignfolder_Request>& value)
{
    m_ObjEzsignfolder = value;
    m_ObjEzsignfolderIsSet = true;
}

bool UNUSED_ezsignfolder_editObject_v1_Request::objEzsignfolderIsSet() const
{
    return m_ObjEzsignfolderIsSet;
}

void UNUSED_ezsignfolder_editObject_v1_Request::unsetObjEzsignfolder()
{
    m_ObjEzsignfolderIsSet = false;
}
}
}
}
}


