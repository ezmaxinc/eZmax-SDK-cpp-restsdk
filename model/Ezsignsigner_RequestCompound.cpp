/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignsigner_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignsigner_RequestCompound::Ezsignsigner_RequestCompound()
{
    m_ObjContactIsSet = false;
    m_FkiTaxassignmentID = 0;
    m_FkiTaxassignmentIDIsSet = false;
    m_FkiSecretquestionID = 0;
    m_FkiSecretquestionIDIsSet = false;
    m_EEzsignsignerLogintype = utility::conversions::to_string_t("");
    m_EEzsignsignerLogintypeIsSet = false;
    m_SEzsignsignerSecretanswer = utility::conversions::to_string_t("");
    m_SEzsignsignerSecretanswerIsSet = false;
}

Ezsignsigner_RequestCompound::~Ezsignsigner_RequestCompound()
{
}

void Ezsignsigner_RequestCompound::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignsigner_RequestCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjContactIsSet)
    {
        val[utility::conversions::to_string_t("objContact")] = ModelBase::toJson(m_ObjContact);
    }
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

bool Ezsignsigner_RequestCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objContact")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objContact"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Ezsignsigner_RequestCompound_Contact> refVal_objContact;
            ok &= ModelBase::fromJson(fieldValue, refVal_objContact);
            setObjContact(refVal_objContact);
        }
    }
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

void Ezsignsigner_RequestCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjContactIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objContact"), m_ObjContact));
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

bool Ezsignsigner_RequestCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objContact")))
    {
        std::shared_ptr<Ezsignsigner_RequestCompound_Contact> refVal_objContact;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objContact")), refVal_objContact );
        setObjContact(refVal_objContact);
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

std::shared_ptr<Ezsignsigner_RequestCompound_Contact> Ezsignsigner_RequestCompound::getObjContact() const
{
    return m_ObjContact;
}

void Ezsignsigner_RequestCompound::setObjContact(const std::shared_ptr<Ezsignsigner_RequestCompound_Contact>& value)
{
    m_ObjContact = value;
    m_ObjContactIsSet = true;
}

bool Ezsignsigner_RequestCompound::objContactIsSet() const
{
    return m_ObjContactIsSet;
}

void Ezsignsigner_RequestCompound::unsetObjContact()
{
    m_ObjContactIsSet = false;
}
int32_t Ezsignsigner_RequestCompound::getFkiTaxassignmentID() const
{
    return m_FkiTaxassignmentID;
}

void Ezsignsigner_RequestCompound::setFkiTaxassignmentID(int32_t value)
{
    m_FkiTaxassignmentID = value;
    m_FkiTaxassignmentIDIsSet = true;
}

bool Ezsignsigner_RequestCompound::fkiTaxassignmentIDIsSet() const
{
    return m_FkiTaxassignmentIDIsSet;
}

void Ezsignsigner_RequestCompound::unsetFkiTaxassignmentID()
{
    m_FkiTaxassignmentIDIsSet = false;
}
int32_t Ezsignsigner_RequestCompound::getFkiSecretquestionID() const
{
    return m_FkiSecretquestionID;
}

void Ezsignsigner_RequestCompound::setFkiSecretquestionID(int32_t value)
{
    m_FkiSecretquestionID = value;
    m_FkiSecretquestionIDIsSet = true;
}

bool Ezsignsigner_RequestCompound::fkiSecretquestionIDIsSet() const
{
    return m_FkiSecretquestionIDIsSet;
}

void Ezsignsigner_RequestCompound::unsetFkiSecretquestionID()
{
    m_FkiSecretquestionIDIsSet = false;
}
utility::string_t Ezsignsigner_RequestCompound::getEEzsignsignerLogintype() const
{
    return m_EEzsignsignerLogintype;
}

void Ezsignsigner_RequestCompound::setEEzsignsignerLogintype(const utility::string_t& value)
{
    m_EEzsignsignerLogintype = value;
    m_EEzsignsignerLogintypeIsSet = true;
}

bool Ezsignsigner_RequestCompound::eEzsignsignerLogintypeIsSet() const
{
    return m_EEzsignsignerLogintypeIsSet;
}

void Ezsignsigner_RequestCompound::unsetEEzsignsignerLogintype()
{
    m_EEzsignsignerLogintypeIsSet = false;
}
utility::string_t Ezsignsigner_RequestCompound::getSEzsignsignerSecretanswer() const
{
    return m_SEzsignsignerSecretanswer;
}

void Ezsignsigner_RequestCompound::setSEzsignsignerSecretanswer(const utility::string_t& value)
{
    m_SEzsignsignerSecretanswer = value;
    m_SEzsignsignerSecretanswerIsSet = true;
}

bool Ezsignsigner_RequestCompound::sEzsignsignerSecretanswerIsSet() const
{
    return m_SEzsignsignerSecretanswerIsSet;
}

void Ezsignsigner_RequestCompound::unsetSEzsignsignerSecretanswer()
{
    m_SEzsignsignerSecretanswerIsSet = false;
}
}
}
}
}


