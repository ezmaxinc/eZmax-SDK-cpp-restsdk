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



#include "Ezsignsigner_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignsigner_Request::Ezsignsigner_Request()
{
    m_FkiTaxassignmentID = 0;
    m_FkiTaxassignmentIDIsSet = false;
    m_FkiSecretquestionID = 0;
    m_FkiSecretquestionIDIsSet = false;
    m_EEzsignsignerLogintype = utility::conversions::to_string_t("");
    m_EEzsignsignerLogintypeIsSet = false;
    m_SEzsignsignerSecretanswer = utility::conversions::to_string_t("");
    m_SEzsignsignerSecretanswerIsSet = false;
}

Ezsignsigner_Request::~Ezsignsigner_Request()
{
}

void Ezsignsigner_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignsigner_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiTaxassignmentIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiTaxassignmentID")] = ModelBase::toJson(m_FkiTaxassignmentID);
    }
    if(m_FkiSecretquestionIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiSecretquestionID")] = ModelBase::toJson(m_FkiSecretquestionID);
    }
    if(m_EEzsignsignerLogintypeIsSet)
    {
        val[utility::conversions::to_string_t("eEzsignsignerLogintype")] = ModelBase::toJson(m_EEzsignsignerLogintype);
    }
    if(m_SEzsignsignerSecretanswerIsSet)
    {
        val[utility::conversions::to_string_t("sEzsignsignerSecretanswer")] = ModelBase::toJson(m_SEzsignsignerSecretanswer);
    }

    return val;
}

bool Ezsignsigner_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiTaxassignmentID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiTaxassignmentID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiTaxassignmentID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiTaxassignmentID);
            setFkiTaxassignmentID(refVal_fkiTaxassignmentID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiSecretquestionID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiSecretquestionID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiSecretquestionID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiSecretquestionID);
            setFkiSecretquestionID(refVal_fkiSecretquestionID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eEzsignsignerLogintype")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsignsignerLogintype"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eEzsignsignerLogintype;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsignsignerLogintype);
            setEEzsignsignerLogintype(refVal_eEzsignsignerLogintype);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEzsignsignerSecretanswer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsignsignerSecretanswer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsignsignerSecretanswer;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsignsignerSecretanswer);
            setSEzsignsignerSecretanswer(refVal_sEzsignsignerSecretanswer);
        }
    }
    return ok;
}

void Ezsignsigner_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiTaxassignmentIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiTaxassignmentID"), m_FkiTaxassignmentID));
    }
    if(m_FkiSecretquestionIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiSecretquestionID"), m_FkiSecretquestionID));
    }
    if(m_EEzsignsignerLogintypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsignsignerLogintype"), m_EEzsignsignerLogintype));
    }
    if(m_SEzsignsignerSecretanswerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsignsignerSecretanswer"), m_SEzsignsignerSecretanswer));
    }
}

bool Ezsignsigner_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiTaxassignmentID")))
    {
        int32_t refVal_fkiTaxassignmentID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiTaxassignmentID")), refVal_fkiTaxassignmentID );
        setFkiTaxassignmentID(refVal_fkiTaxassignmentID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiSecretquestionID")))
    {
        int32_t refVal_fkiSecretquestionID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiSecretquestionID")), refVal_fkiSecretquestionID );
        setFkiSecretquestionID(refVal_fkiSecretquestionID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eEzsignsignerLogintype")))
    {
        utility::string_t refVal_eEzsignsignerLogintype;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsignsignerLogintype")), refVal_eEzsignsignerLogintype );
        setEEzsignsignerLogintype(refVal_eEzsignsignerLogintype);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsignsignerSecretanswer")))
    {
        utility::string_t refVal_sEzsignsignerSecretanswer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsignsignerSecretanswer")), refVal_sEzsignsignerSecretanswer );
        setSEzsignsignerSecretanswer(refVal_sEzsignsignerSecretanswer);
    }
    return ok;
}

int32_t Ezsignsigner_Request::getFkiTaxassignmentID() const
{
    return m_FkiTaxassignmentID;
}

void Ezsignsigner_Request::setFkiTaxassignmentID(int32_t value)
{
    m_FkiTaxassignmentID = value;
    m_FkiTaxassignmentIDIsSet = true;
}

bool Ezsignsigner_Request::fkiTaxassignmentIDIsSet() const
{
    return m_FkiTaxassignmentIDIsSet;
}

void Ezsignsigner_Request::unsetFkiTaxassignmentID()
{
    m_FkiTaxassignmentIDIsSet = false;
}
int32_t Ezsignsigner_Request::getFkiSecretquestionID() const
{
    return m_FkiSecretquestionID;
}

void Ezsignsigner_Request::setFkiSecretquestionID(int32_t value)
{
    m_FkiSecretquestionID = value;
    m_FkiSecretquestionIDIsSet = true;
}

bool Ezsignsigner_Request::fkiSecretquestionIDIsSet() const
{
    return m_FkiSecretquestionIDIsSet;
}

void Ezsignsigner_Request::unsetFkiSecretquestionID()
{
    m_FkiSecretquestionIDIsSet = false;
}
utility::string_t Ezsignsigner_Request::getEEzsignsignerLogintype() const
{
    return m_EEzsignsignerLogintype;
}

void Ezsignsigner_Request::setEEzsignsignerLogintype(const utility::string_t& value)
{
    m_EEzsignsignerLogintype = value;
    m_EEzsignsignerLogintypeIsSet = true;
}

bool Ezsignsigner_Request::eEzsignsignerLogintypeIsSet() const
{
    return m_EEzsignsignerLogintypeIsSet;
}

void Ezsignsigner_Request::unsetEEzsignsignerLogintype()
{
    m_EEzsignsignerLogintypeIsSet = false;
}
utility::string_t Ezsignsigner_Request::getSEzsignsignerSecretanswer() const
{
    return m_SEzsignsignerSecretanswer;
}

void Ezsignsigner_Request::setSEzsignsignerSecretanswer(const utility::string_t& value)
{
    m_SEzsignsignerSecretanswer = value;
    m_SEzsignsignerSecretanswerIsSet = true;
}

bool Ezsignsigner_Request::sEzsignsignerSecretanswerIsSet() const
{
    return m_SEzsignsignerSecretanswerIsSet;
}

void Ezsignsigner_Request::unsetSEzsignsignerSecretanswer()
{
    m_SEzsignsignerSecretanswerIsSet = false;
}
}
}
}
}


