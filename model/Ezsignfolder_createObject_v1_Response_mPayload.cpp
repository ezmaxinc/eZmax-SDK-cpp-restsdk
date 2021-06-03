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



#include "Ezsignfolder_createObject_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfolder_createObject_v1_Response_mPayload::Ezsignfolder_createObject_v1_Response_mPayload()
{
    m_A_pkiEzsignfolderIDIsSet = false;
}

Ezsignfolder_createObject_v1_Response_mPayload::~Ezsignfolder_createObject_v1_Response_mPayload()
{
}

void Ezsignfolder_createObject_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfolder_createObject_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_A_pkiEzsignfolderIDIsSet)
    {
        val[utility::conversions::to_string_t("a_pkiEzsignfolderID")] = ModelBase::toJson(m_A_pkiEzsignfolderID);
    }

    return val;
}

bool Ezsignfolder_createObject_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("a_pkiEzsignfolderID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_pkiEzsignfolderID"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_pkiEzsignfolderID;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_pkiEzsignfolderID);
            setAPkiEzsignfolderID(refVal_a_pkiEzsignfolderID);
        }
    }
    return ok;
}

void Ezsignfolder_createObject_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_A_pkiEzsignfolderIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_pkiEzsignfolderID"), m_A_pkiEzsignfolderID));
    }
}

bool Ezsignfolder_createObject_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("a_pkiEzsignfolderID")))
    {
        std::vector<int32_t> refVal_a_pkiEzsignfolderID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_pkiEzsignfolderID")), refVal_a_pkiEzsignfolderID );
        setAPkiEzsignfolderID(refVal_a_pkiEzsignfolderID);
    }
    return ok;
}

std::vector<int32_t>& Ezsignfolder_createObject_v1_Response_mPayload::getAPkiEzsignfolderID()
{
    return m_A_pkiEzsignfolderID;
}

void Ezsignfolder_createObject_v1_Response_mPayload::setAPkiEzsignfolderID(std::vector<int32_t> value)
{
    m_A_pkiEzsignfolderID = value;
    m_A_pkiEzsignfolderIDIsSet = true;
}

bool Ezsignfolder_createObject_v1_Response_mPayload::aPkiEzsignfolderIDIsSet() const
{
    return m_A_pkiEzsignfolderIDIsSet;
}

void Ezsignfolder_createObject_v1_Response_mPayload::unsetA_pkiEzsignfolderID()
{
    m_A_pkiEzsignfolderIDIsSet = false;
}
}
}
}
}


