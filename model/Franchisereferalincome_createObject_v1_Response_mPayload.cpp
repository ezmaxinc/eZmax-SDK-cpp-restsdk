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



#include "Franchisereferalincome_createObject_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Franchisereferalincome_createObject_v1_Response_mPayload::Franchisereferalincome_createObject_v1_Response_mPayload()
{
    m_A_pkiFranchisereferalincomeIDIsSet = false;
}

Franchisereferalincome_createObject_v1_Response_mPayload::~Franchisereferalincome_createObject_v1_Response_mPayload()
{
}

void Franchisereferalincome_createObject_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Franchisereferalincome_createObject_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_A_pkiFranchisereferalincomeIDIsSet)
    {
        val[utility::conversions::to_string_t("a_pkiFranchisereferalincomeID")] = ModelBase::toJson(m_A_pkiFranchisereferalincomeID);
    }

    return val;
}

bool Franchisereferalincome_createObject_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("a_pkiFranchisereferalincomeID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_pkiFranchisereferalincomeID"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_pkiFranchisereferalincomeID;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_pkiFranchisereferalincomeID);
            setAPkiFranchisereferalincomeID(refVal_a_pkiFranchisereferalincomeID);
        }
    }
    return ok;
}

void Franchisereferalincome_createObject_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_A_pkiFranchisereferalincomeIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_pkiFranchisereferalincomeID"), m_A_pkiFranchisereferalincomeID));
    }
}

bool Franchisereferalincome_createObject_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("a_pkiFranchisereferalincomeID")))
    {
        std::vector<int32_t> refVal_a_pkiFranchisereferalincomeID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_pkiFranchisereferalincomeID")), refVal_a_pkiFranchisereferalincomeID );
        setAPkiFranchisereferalincomeID(refVal_a_pkiFranchisereferalincomeID);
    }
    return ok;
}

std::vector<int32_t>& Franchisereferalincome_createObject_v1_Response_mPayload::getAPkiFranchisereferalincomeID()
{
    return m_A_pkiFranchisereferalincomeID;
}

void Franchisereferalincome_createObject_v1_Response_mPayload::setAPkiFranchisereferalincomeID(std::vector<int32_t> value)
{
    m_A_pkiFranchisereferalincomeID = value;
    m_A_pkiFranchisereferalincomeIDIsSet = true;
}

bool Franchisereferalincome_createObject_v1_Response_mPayload::aPkiFranchisereferalincomeIDIsSet() const
{
    return m_A_pkiFranchisereferalincomeIDIsSet;
}

void Franchisereferalincome_createObject_v1_Response_mPayload::unsetA_pkiFranchisereferalincomeID()
{
    m_A_pkiFranchisereferalincomeIDIsSet = false;
}
}
}
}
}


