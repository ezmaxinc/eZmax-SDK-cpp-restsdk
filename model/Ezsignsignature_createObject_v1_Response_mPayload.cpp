/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.37
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignsignature_createObject_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignsignature_createObject_v1_Response_mPayload::Ezsignsignature_createObject_v1_Response_mPayload()
{
    m_A_pkiEzsignsignatureIDIsSet = false;
}

Ezsignsignature_createObject_v1_Response_mPayload::~Ezsignsignature_createObject_v1_Response_mPayload()
{
}

void Ezsignsignature_createObject_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignsignature_createObject_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_A_pkiEzsignsignatureIDIsSet)
    {
        val[utility::conversions::to_string_t("a_pkiEzsignsignatureID")] = ModelBase::toJson(m_A_pkiEzsignsignatureID);
    }

    return val;
}

bool Ezsignsignature_createObject_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("a_pkiEzsignsignatureID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_pkiEzsignsignatureID"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_pkiEzsignsignatureID;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_pkiEzsignsignatureID);
            setAPkiEzsignsignatureID(refVal_a_pkiEzsignsignatureID);
        }
    }
    return ok;
}

void Ezsignsignature_createObject_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_A_pkiEzsignsignatureIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_pkiEzsignsignatureID"), m_A_pkiEzsignsignatureID));
    }
}

bool Ezsignsignature_createObject_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("a_pkiEzsignsignatureID")))
    {
        std::vector<int32_t> refVal_a_pkiEzsignsignatureID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_pkiEzsignsignatureID")), refVal_a_pkiEzsignsignatureID );
        setAPkiEzsignsignatureID(refVal_a_pkiEzsignsignatureID);
    }
    return ok;
}

std::vector<int32_t>& Ezsignsignature_createObject_v1_Response_mPayload::getAPkiEzsignsignatureID()
{
    return m_A_pkiEzsignsignatureID;
}

void Ezsignsignature_createObject_v1_Response_mPayload::setAPkiEzsignsignatureID(std::vector<int32_t> value)
{
    m_A_pkiEzsignsignatureID = value;
    m_A_pkiEzsignsignatureIDIsSet = true;
}

bool Ezsignsignature_createObject_v1_Response_mPayload::aPkiEzsignsignatureIDIsSet() const
{
    return m_A_pkiEzsignsignatureIDIsSet;
}

void Ezsignsignature_createObject_v1_Response_mPayload::unsetA_pkiEzsignsignatureID()
{
    m_A_pkiEzsignsignatureIDIsSet = false;
}
}
}
}
}


