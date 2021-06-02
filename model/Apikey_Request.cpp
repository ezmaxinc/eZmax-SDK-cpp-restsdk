/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.45
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Apikey_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Apikey_Request::Apikey_Request()
{
    m_FkiUserID = 0;
    m_FkiUserIDIsSet = false;
    m_ObjApikeyDescriptionIsSet = false;
}

Apikey_Request::~Apikey_Request()
{
}

void Apikey_Request::validate()
{
    // TODO: implement validation
}

web::json::value Apikey_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiUserIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiUserID")] = ModelBase::toJson(m_FkiUserID);
    }
    if(m_ObjApikeyDescriptionIsSet)
    {
        val[utility::conversions::to_string_t("objApikeyDescription")] = ModelBase::toJson(m_ObjApikeyDescription);
    }

    return val;
}

bool Apikey_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiUserID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiUserID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiUserID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiUserID);
            setFkiUserID(refVal_fkiUserID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objApikeyDescription")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objApikeyDescription"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Multilingual_ApikeyDescription> refVal_objApikeyDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_objApikeyDescription);
            setObjApikeyDescription(refVal_objApikeyDescription);
        }
    }
    return ok;
}

void Apikey_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiUserIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiUserID"), m_FkiUserID));
    }
    if(m_ObjApikeyDescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objApikeyDescription"), m_ObjApikeyDescription));
    }
}

bool Apikey_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiUserID")))
    {
        int32_t refVal_fkiUserID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiUserID")), refVal_fkiUserID );
        setFkiUserID(refVal_fkiUserID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objApikeyDescription")))
    {
        std::shared_ptr<Multilingual_ApikeyDescription> refVal_objApikeyDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objApikeyDescription")), refVal_objApikeyDescription );
        setObjApikeyDescription(refVal_objApikeyDescription);
    }
    return ok;
}

int32_t Apikey_Request::getFkiUserID() const
{
    return m_FkiUserID;
}

void Apikey_Request::setFkiUserID(int32_t value)
{
    m_FkiUserID = value;
    m_FkiUserIDIsSet = true;
}

bool Apikey_Request::fkiUserIDIsSet() const
{
    return m_FkiUserIDIsSet;
}

void Apikey_Request::unsetFkiUserID()
{
    m_FkiUserIDIsSet = false;
}
std::shared_ptr<Multilingual_ApikeyDescription> Apikey_Request::getObjApikeyDescription() const
{
    return m_ObjApikeyDescription;
}

void Apikey_Request::setObjApikeyDescription(const std::shared_ptr<Multilingual_ApikeyDescription>& value)
{
    m_ObjApikeyDescription = value;
    m_ObjApikeyDescriptionIsSet = true;
}

bool Apikey_Request::objApikeyDescriptionIsSet() const
{
    return m_ObjApikeyDescriptionIsSet;
}

void Apikey_Request::unsetObjApikeyDescription()
{
    m_ObjApikeyDescriptionIsSet = false;
}
}
}
}
}


