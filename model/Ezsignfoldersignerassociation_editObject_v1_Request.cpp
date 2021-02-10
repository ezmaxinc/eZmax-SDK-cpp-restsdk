/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfoldersignerassociation_editObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfoldersignerassociation_editObject_v1_Request::Ezsignfoldersignerassociation_editObject_v1_Request()
{
    m_ObjEzsignfoldersignerassociationIsSet = false;
}

Ezsignfoldersignerassociation_editObject_v1_Request::~Ezsignfoldersignerassociation_editObject_v1_Request()
{
}

void Ezsignfoldersignerassociation_editObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfoldersignerassociation_editObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjEzsignfoldersignerassociationIsSet)
    {
        val[utility::conversions::to_string_t("objEzsignfoldersignerassociation")] = ModelBase::toJson(m_ObjEzsignfoldersignerassociation);
    }

    return val;
}

bool Ezsignfoldersignerassociation_editObject_v1_Request::fromJson(const web::json::value& val)
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

void Ezsignfoldersignerassociation_editObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool Ezsignfoldersignerassociation_editObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

std::shared_ptr<Ezsignfoldersignerassociation_Request> Ezsignfoldersignerassociation_editObject_v1_Request::getObjEzsignfoldersignerassociation() const
{
    return m_ObjEzsignfoldersignerassociation;
}

void Ezsignfoldersignerassociation_editObject_v1_Request::setObjEzsignfoldersignerassociation(const std::shared_ptr<Ezsignfoldersignerassociation_Request>& value)
{
    m_ObjEzsignfoldersignerassociation = value;
    m_ObjEzsignfoldersignerassociationIsSet = true;
}

bool Ezsignfoldersignerassociation_editObject_v1_Request::objEzsignfoldersignerassociationIsSet() const
{
    return m_ObjEzsignfoldersignerassociationIsSet;
}

void Ezsignfoldersignerassociation_editObject_v1_Request::unsetObjEzsignfoldersignerassociation()
{
    m_ObjEzsignfoldersignerassociationIsSet = false;
}
}
}
}
}


