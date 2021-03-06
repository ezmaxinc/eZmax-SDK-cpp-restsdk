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



#include "Ezsigndocument_createObject_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_createObject_v1_Response_mPayload::Ezsigndocument_createObject_v1_Response_mPayload()
{
    m_A_pkiEzsigndocumentIDIsSet = false;
}

Ezsigndocument_createObject_v1_Response_mPayload::~Ezsigndocument_createObject_v1_Response_mPayload()
{
}

void Ezsigndocument_createObject_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_createObject_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_A_pkiEzsigndocumentIDIsSet)
    {
        val[utility::conversions::to_string_t("a_pkiEzsigndocumentID")] = ModelBase::toJson(m_A_pkiEzsigndocumentID);
    }

    return val;
}

bool Ezsigndocument_createObject_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("a_pkiEzsigndocumentID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_pkiEzsigndocumentID"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_pkiEzsigndocumentID;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_pkiEzsigndocumentID);
            setAPkiEzsigndocumentID(refVal_a_pkiEzsigndocumentID);
        }
    }
    return ok;
}

void Ezsigndocument_createObject_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_A_pkiEzsigndocumentIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_pkiEzsigndocumentID"), m_A_pkiEzsigndocumentID));
    }
}

bool Ezsigndocument_createObject_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("a_pkiEzsigndocumentID")))
    {
        std::vector<int32_t> refVal_a_pkiEzsigndocumentID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_pkiEzsigndocumentID")), refVal_a_pkiEzsigndocumentID );
        setAPkiEzsigndocumentID(refVal_a_pkiEzsigndocumentID);
    }
    return ok;
}

std::vector<int32_t>& Ezsigndocument_createObject_v1_Response_mPayload::getAPkiEzsigndocumentID()
{
    return m_A_pkiEzsigndocumentID;
}

void Ezsigndocument_createObject_v1_Response_mPayload::setAPkiEzsigndocumentID(std::vector<int32_t> value)
{
    m_A_pkiEzsigndocumentID = value;
    m_A_pkiEzsigndocumentIDIsSet = true;
}

bool Ezsigndocument_createObject_v1_Response_mPayload::aPkiEzsigndocumentIDIsSet() const
{
    return m_A_pkiEzsigndocumentIDIsSet;
}

void Ezsigndocument_createObject_v1_Response_mPayload::unsetA_pkiEzsigndocumentID()
{
    m_A_pkiEzsigndocumentIDIsSet = false;
}
}
}
}
}


