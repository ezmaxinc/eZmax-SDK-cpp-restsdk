/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.43
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Contact_RequestCompound_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Contact_RequestCompound_allOf::Contact_RequestCompound_allOf()
{
    m_ObjContactinformationsIsSet = false;
}

Contact_RequestCompound_allOf::~Contact_RequestCompound_allOf()
{
}

void Contact_RequestCompound_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Contact_RequestCompound_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjContactinformationsIsSet)
    {
        val[utility::conversions::to_string_t("objContactinformations")] = ModelBase::toJson(m_ObjContactinformations);
    }

    return val;
}

bool Contact_RequestCompound_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objContactinformations")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objContactinformations"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Contactinformations_RequestCompound> refVal_objContactinformations;
            ok &= ModelBase::fromJson(fieldValue, refVal_objContactinformations);
            setObjContactinformations(refVal_objContactinformations);
        }
    }
    return ok;
}

void Contact_RequestCompound_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjContactinformationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objContactinformations"), m_ObjContactinformations));
    }
}

bool Contact_RequestCompound_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objContactinformations")))
    {
        std::shared_ptr<Contactinformations_RequestCompound> refVal_objContactinformations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objContactinformations")), refVal_objContactinformations );
        setObjContactinformations(refVal_objContactinformations);
    }
    return ok;
}

std::shared_ptr<Contactinformations_RequestCompound> Contact_RequestCompound_allOf::getObjContactinformations() const
{
    return m_ObjContactinformations;
}

void Contact_RequestCompound_allOf::setObjContactinformations(const std::shared_ptr<Contactinformations_RequestCompound>& value)
{
    m_ObjContactinformations = value;
    m_ObjContactinformationsIsSet = true;
}

bool Contact_RequestCompound_allOf::objContactinformationsIsSet() const
{
    return m_ObjContactinformationsIsSet;
}

void Contact_RequestCompound_allOf::unsetObjContactinformations()
{
    m_ObjContactinformationsIsSet = false;
}
}
}
}
}


