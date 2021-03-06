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



#include "Franchisereferalincome_createObject_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Franchisereferalincome_createObject_v1_Request::Franchisereferalincome_createObject_v1_Request()
{
    m_ObjFranchisereferalincomeIsSet = false;
    m_ObjFranchisereferalincomeCompoundIsSet = false;
}

Franchisereferalincome_createObject_v1_Request::~Franchisereferalincome_createObject_v1_Request()
{
}

void Franchisereferalincome_createObject_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Franchisereferalincome_createObject_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjFranchisereferalincomeIsSet)
    {
        val[utility::conversions::to_string_t("objFranchisereferalincome")] = ModelBase::toJson(m_ObjFranchisereferalincome);
    }
    if(m_ObjFranchisereferalincomeCompoundIsSet)
    {
        val[utility::conversions::to_string_t("objFranchisereferalincomeCompound")] = ModelBase::toJson(m_ObjFranchisereferalincomeCompound);
    }

    return val;
}

bool Franchisereferalincome_createObject_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objFranchisereferalincome")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objFranchisereferalincome"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Franchisereferalincome_Request> refVal_objFranchisereferalincome;
            ok &= ModelBase::fromJson(fieldValue, refVal_objFranchisereferalincome);
            setObjFranchisereferalincome(refVal_objFranchisereferalincome);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objFranchisereferalincomeCompound")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objFranchisereferalincomeCompound"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Franchisereferalincome_RequestCompound> refVal_objFranchisereferalincomeCompound;
            ok &= ModelBase::fromJson(fieldValue, refVal_objFranchisereferalincomeCompound);
            setObjFranchisereferalincomeCompound(refVal_objFranchisereferalincomeCompound);
        }
    }
    return ok;
}

void Franchisereferalincome_createObject_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjFranchisereferalincomeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objFranchisereferalincome"), m_ObjFranchisereferalincome));
    }
    if(m_ObjFranchisereferalincomeCompoundIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objFranchisereferalincomeCompound"), m_ObjFranchisereferalincomeCompound));
    }
}

bool Franchisereferalincome_createObject_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objFranchisereferalincome")))
    {
        std::shared_ptr<Franchisereferalincome_Request> refVal_objFranchisereferalincome;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objFranchisereferalincome")), refVal_objFranchisereferalincome );
        setObjFranchisereferalincome(refVal_objFranchisereferalincome);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objFranchisereferalincomeCompound")))
    {
        std::shared_ptr<Franchisereferalincome_RequestCompound> refVal_objFranchisereferalincomeCompound;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objFranchisereferalincomeCompound")), refVal_objFranchisereferalincomeCompound );
        setObjFranchisereferalincomeCompound(refVal_objFranchisereferalincomeCompound);
    }
    return ok;
}

std::shared_ptr<Franchisereferalincome_Request> Franchisereferalincome_createObject_v1_Request::getObjFranchisereferalincome() const
{
    return m_ObjFranchisereferalincome;
}

void Franchisereferalincome_createObject_v1_Request::setObjFranchisereferalincome(const std::shared_ptr<Franchisereferalincome_Request>& value)
{
    m_ObjFranchisereferalincome = value;
    m_ObjFranchisereferalincomeIsSet = true;
}

bool Franchisereferalincome_createObject_v1_Request::objFranchisereferalincomeIsSet() const
{
    return m_ObjFranchisereferalincomeIsSet;
}

void Franchisereferalincome_createObject_v1_Request::unsetObjFranchisereferalincome()
{
    m_ObjFranchisereferalincomeIsSet = false;
}
std::shared_ptr<Franchisereferalincome_RequestCompound> Franchisereferalincome_createObject_v1_Request::getObjFranchisereferalincomeCompound() const
{
    return m_ObjFranchisereferalincomeCompound;
}

void Franchisereferalincome_createObject_v1_Request::setObjFranchisereferalincomeCompound(const std::shared_ptr<Franchisereferalincome_RequestCompound>& value)
{
    m_ObjFranchisereferalincomeCompound = value;
    m_ObjFranchisereferalincomeCompoundIsSet = true;
}

bool Franchisereferalincome_createObject_v1_Request::objFranchisereferalincomeCompoundIsSet() const
{
    return m_ObjFranchisereferalincomeCompoundIsSet;
}

void Franchisereferalincome_createObject_v1_Request::unsetObjFranchisereferalincomeCompound()
{
    m_ObjFranchisereferalincomeCompoundIsSet = false;
}
}
}
}
}


