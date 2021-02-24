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



#include "UNUSED_ezsignfoldersignerassociation_editObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::UNUSED_ezsignfoldersignerassociation_editObject_v1_Request()
{
    m_ObjEzsignfoldersignerassociationIsSet = false;
}

UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::~UNUSED_ezsignfoldersignerassociation_editObject_v1_Request()
{
}

void UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignfoldersignerassociationIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfoldersignerassociation")] = ModelBase::toJson(m_ObjEzsignfoldersignerassociation);
    }

    return val;
}

bool UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::fromJson(const web::json::value& val)
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
    return ok;
}

void UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

std::shared_ptr<Ezsignfoldersignerassociation_Request> UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::getObjEzsignfoldersignerassociation() const
{
    return m_ObjEzsignfoldersignerassociation;
}

void UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::setObjEzsignfoldersignerassociation(const std::shared_ptr<Ezsignfoldersignerassociation_Request>& value)
{
    m_ObjEzsignfoldersignerassociation = value;
    m_ObjEzsignfoldersignerassociationIsSet = true;
}

bool UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::objEzsignfoldersignerassociationIsSet() const
{
    return m_ObjEzsignfoldersignerassociationIsSet;
}

void UNUSED_ezsignfoldersignerassociation_editObject_v1_Request::unsetObjEzsignfoldersignerassociation()
{
    m_ObjEzsignfoldersignerassociationIsSet = false;
}
}
}
}
}

