/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.38
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfoldersignerassociation_createObject_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::Ezsignfoldersignerassociation_createObject_v1_Response_mPayload()
{
    m_A_pkiEzsignfoldersignerassociationIDIsSet = false;
}

Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::~Ezsignfoldersignerassociation_createObject_v1_Response_mPayload()
{
}

void Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_A_pkiEzsignfoldersignerassociationIDIsSet)
    {
        val[utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")] = ModelBase::toJson(m_A_pkiEzsignfoldersignerassociationID);
    }

    return val;
}

bool Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_pkiEzsignfoldersignerassociationID;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_pkiEzsignfoldersignerassociationID);
            setAPkiEzsignfoldersignerassociationID(refVal_a_pkiEzsignfoldersignerassociationID);
        }
    }
    return ok;
}

void Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_A_pkiEzsignfoldersignerassociationIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID"), m_A_pkiEzsignfoldersignerassociationID));
    }
}

bool Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")))
    {
        std::vector<int32_t> refVal_a_pkiEzsignfoldersignerassociationID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")), refVal_a_pkiEzsignfoldersignerassociationID );
        setAPkiEzsignfoldersignerassociationID(refVal_a_pkiEzsignfoldersignerassociationID);
    }
    return ok;
}

std::vector<int32_t>& Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::getAPkiEzsignfoldersignerassociationID()
{
    return m_A_pkiEzsignfoldersignerassociationID;
}

void Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::setAPkiEzsignfoldersignerassociationID(std::vector<int32_t> value)
{
    m_A_pkiEzsignfoldersignerassociationID = value;
    m_A_pkiEzsignfoldersignerassociationIDIsSet = true;
}

bool Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::aPkiEzsignfoldersignerassociationIDIsSet() const
{
    return m_A_pkiEzsignfoldersignerassociationIDIsSet;
}

void Ezsignfoldersignerassociation_createObject_v1_Response_mPayload::unsetA_pkiEzsignfoldersignerassociationID()
{
    m_A_pkiEzsignfoldersignerassociationIDIsSet = false;
}
}
}
}
}


