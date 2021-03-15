/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.35
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsignfolder_ResponseCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfolder_ResponseCompound::Ezsignfolder_ResponseCompound()
{
    m_FkiEzsignfoldertypeID = 0;
    m_FkiEzsignfoldertypeIDIsSet = false;
    m_FkiEzsigntsarequirementID = 0;
    m_FkiEzsigntsarequirementIDIsSet = false;
    m_SEzsignfolderDescription = utility::conversions::to_string_t("");
    m_SEzsignfolderDescriptionIsSet = false;
    m_TEzsignfolderNote = utility::conversions::to_string_t("");
    m_TEzsignfolderNoteIsSet = false;
    m_EEzsignfolderSendreminderfrequencyIsSet = false;
    m_PkiEzsignfolderID = 0;
    m_PkiEzsignfolderIDIsSet = false;
    m_DtEzsignfolderSentdate = utility::conversions::to_string_t("");
    m_DtEzsignfolderSentdateIsSet = false;
    m_EEzsignfolderStepIsSet = false;
    m_DtEzsignfolderClose = utility::conversions::to_string_t("");
    m_DtEzsignfolderCloseIsSet = false;
    m_ObjAuditIsSet = false;
}

Ezsignfolder_ResponseCompound::~Ezsignfolder_ResponseCompound()
{
}

void Ezsignfolder_ResponseCompound::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfolder_ResponseCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiEzsignfoldertypeIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsignfoldertypeID")] = ModelBase::toJson(m_FkiEzsignfoldertypeID);
    }
    if(m_FkiEzsigntsarequirementIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsigntsarequirementID")] = ModelBase::toJson(m_FkiEzsigntsarequirementID);
    }
    if(m_SEzsignfolderDescriptionIsSet)
    {
        val[utility::conversions::to_string_t("sEzsignfolderDescription")] = ModelBase::toJson(m_SEzsignfolderDescription);
    }
    if(m_TEzsignfolderNoteIsSet)
    {
        val[utility::conversions::to_string_t("tEzsignfolderNote")] = ModelBase::toJson(m_TEzsignfolderNote);
    }
    if(m_EEzsignfolderSendreminderfrequencyIsSet)
    {
        val[utility::conversions::to_string_t("eEzsignfolderSendreminderfrequency")] = ModelBase::toJson(m_EEzsignfolderSendreminderfrequency);
    }
    if(m_PkiEzsignfolderIDIsSet)
    {
        val[utility::conversions::to_string_t("pkiEzsignfolderID")] = ModelBase::toJson(m_PkiEzsignfolderID);
    }
    if(m_DtEzsignfolderSentdateIsSet)
    {
        val[utility::conversions::to_string_t("dtEzsignfolderSentdate")] = ModelBase::toJson(m_DtEzsignfolderSentdate);
    }
    if(m_EEzsignfolderStepIsSet)
    {
        val[utility::conversions::to_string_t("eEzsignfolderStep")] = ModelBase::toJson(m_EEzsignfolderStep);
    }
    if(m_DtEzsignfolderCloseIsSet)
    {
        val[utility::conversions::to_string_t("dtEzsignfolderClose")] = ModelBase::toJson(m_DtEzsignfolderClose);
    }
    if(m_ObjAuditIsSet)
    {
        val[utility::conversions::to_string_t("objAudit")] = ModelBase::toJson(m_ObjAudit);
    }

    return val;
}

bool Ezsignfolder_ResponseCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiEzsignfoldertypeID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsignfoldertypeID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsignfoldertypeID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsignfoldertypeID);
            setFkiEzsignfoldertypeID(refVal_fkiEzsignfoldertypeID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiEzsigntsarequirementID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsigntsarequirementID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsigntsarequirementID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsigntsarequirementID);
            setFkiEzsigntsarequirementID(refVal_fkiEzsigntsarequirementID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEzsignfolderDescription")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsignfolderDescription"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsignfolderDescription;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsignfolderDescription);
            setSEzsignfolderDescription(refVal_sEzsignfolderDescription);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tEzsignfolderNote")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tEzsignfolderNote"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_tEzsignfolderNote;
            ok &= ModelBase::fromJson(fieldValue, refVal_tEzsignfolderNote);
            setTEzsignfolderNote(refVal_tEzsignfolderNote);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eEzsignfolderSendreminderfrequency")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsignfolderSendreminderfrequency"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_eEzsignfolderSendreminderfrequency> refVal_eEzsignfolderSendreminderfrequency;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsignfolderSendreminderfrequency);
            setEEzsignfolderSendreminderfrequency(refVal_eEzsignfolderSendreminderfrequency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pkiEzsignfolderID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiEzsignfolderID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pkiEzsignfolderID;
            ok &= ModelBase::fromJson(fieldValue, refVal_pkiEzsignfolderID);
            setPkiEzsignfolderID(refVal_pkiEzsignfolderID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtEzsignfolderSentdate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtEzsignfolderSentdate"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtEzsignfolderSentdate;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtEzsignfolderSentdate);
            setDtEzsignfolderSentdate(refVal_dtEzsignfolderSentdate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eEzsignfolderStep")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsignfolderStep"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_eEzsignfolderStep> refVal_eEzsignfolderStep;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsignfolderStep);
            setEEzsignfolderStep(refVal_eEzsignfolderStep);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtEzsignfolderClose")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtEzsignfolderClose"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtEzsignfolderClose;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtEzsignfolderClose);
            setDtEzsignfolderClose(refVal_dtEzsignfolderClose);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objAudit")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objAudit"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Common_Audit> refVal_objAudit;
            ok &= ModelBase::fromJson(fieldValue, refVal_objAudit);
            setObjAudit(refVal_objAudit);
        }
    }
    return ok;
}

void Ezsignfolder_ResponseCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiEzsignfoldertypeIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsignfoldertypeID"), m_FkiEzsignfoldertypeID));
    }
    if(m_FkiEzsigntsarequirementIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsigntsarequirementID"), m_FkiEzsigntsarequirementID));
    }
    if(m_SEzsignfolderDescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsignfolderDescription"), m_SEzsignfolderDescription));
    }
    if(m_TEzsignfolderNoteIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tEzsignfolderNote"), m_TEzsignfolderNote));
    }
    if(m_EEzsignfolderSendreminderfrequencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsignfolderSendreminderfrequency"), m_EEzsignfolderSendreminderfrequency));
    }
    if(m_PkiEzsignfolderIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pkiEzsignfolderID"), m_PkiEzsignfolderID));
    }
    if(m_DtEzsignfolderSentdateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtEzsignfolderSentdate"), m_DtEzsignfolderSentdate));
    }
    if(m_EEzsignfolderStepIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsignfolderStep"), m_EEzsignfolderStep));
    }
    if(m_DtEzsignfolderCloseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtEzsignfolderClose"), m_DtEzsignfolderClose));
    }
    if(m_ObjAuditIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objAudit"), m_ObjAudit));
    }
}

bool Ezsignfolder_ResponseCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsignfoldertypeID")))
    {
        int32_t refVal_fkiEzsignfoldertypeID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsignfoldertypeID")), refVal_fkiEzsignfoldertypeID );
        setFkiEzsignfoldertypeID(refVal_fkiEzsignfoldertypeID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsigntsarequirementID")))
    {
        int32_t refVal_fkiEzsigntsarequirementID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsigntsarequirementID")), refVal_fkiEzsigntsarequirementID );
        setFkiEzsigntsarequirementID(refVal_fkiEzsigntsarequirementID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsignfolderDescription")))
    {
        utility::string_t refVal_sEzsignfolderDescription;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsignfolderDescription")), refVal_sEzsignfolderDescription );
        setSEzsignfolderDescription(refVal_sEzsignfolderDescription);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tEzsignfolderNote")))
    {
        utility::string_t refVal_tEzsignfolderNote;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tEzsignfolderNote")), refVal_tEzsignfolderNote );
        setTEzsignfolderNote(refVal_tEzsignfolderNote);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eEzsignfolderSendreminderfrequency")))
    {
        std::shared_ptr<Field_eEzsignfolderSendreminderfrequency> refVal_eEzsignfolderSendreminderfrequency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsignfolderSendreminderfrequency")), refVal_eEzsignfolderSendreminderfrequency );
        setEEzsignfolderSendreminderfrequency(refVal_eEzsignfolderSendreminderfrequency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pkiEzsignfolderID")))
    {
        int32_t refVal_pkiEzsignfolderID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pkiEzsignfolderID")), refVal_pkiEzsignfolderID );
        setPkiEzsignfolderID(refVal_pkiEzsignfolderID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtEzsignfolderSentdate")))
    {
        utility::string_t refVal_dtEzsignfolderSentdate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtEzsignfolderSentdate")), refVal_dtEzsignfolderSentdate );
        setDtEzsignfolderSentdate(refVal_dtEzsignfolderSentdate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eEzsignfolderStep")))
    {
        std::shared_ptr<Field_eEzsignfolderStep> refVal_eEzsignfolderStep;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsignfolderStep")), refVal_eEzsignfolderStep );
        setEEzsignfolderStep(refVal_eEzsignfolderStep);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtEzsignfolderClose")))
    {
        utility::string_t refVal_dtEzsignfolderClose;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtEzsignfolderClose")), refVal_dtEzsignfolderClose );
        setDtEzsignfolderClose(refVal_dtEzsignfolderClose);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objAudit")))
    {
        std::shared_ptr<Common_Audit> refVal_objAudit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objAudit")), refVal_objAudit );
        setObjAudit(refVal_objAudit);
    }
    return ok;
}

int32_t Ezsignfolder_ResponseCompound::getFkiEzsignfoldertypeID() const
{
    return m_FkiEzsignfoldertypeID;
}

void Ezsignfolder_ResponseCompound::setFkiEzsignfoldertypeID(int32_t value)
{
    m_FkiEzsignfoldertypeID = value;
    m_FkiEzsignfoldertypeIDIsSet = true;
}

bool Ezsignfolder_ResponseCompound::fkiEzsignfoldertypeIDIsSet() const
{
    return m_FkiEzsignfoldertypeIDIsSet;
}

void Ezsignfolder_ResponseCompound::unsetFkiEzsignfoldertypeID()
{
    m_FkiEzsignfoldertypeIDIsSet = false;
}
int32_t Ezsignfolder_ResponseCompound::getFkiEzsigntsarequirementID() const
{
    return m_FkiEzsigntsarequirementID;
}

void Ezsignfolder_ResponseCompound::setFkiEzsigntsarequirementID(int32_t value)
{
    m_FkiEzsigntsarequirementID = value;
    m_FkiEzsigntsarequirementIDIsSet = true;
}

bool Ezsignfolder_ResponseCompound::fkiEzsigntsarequirementIDIsSet() const
{
    return m_FkiEzsigntsarequirementIDIsSet;
}

void Ezsignfolder_ResponseCompound::unsetFkiEzsigntsarequirementID()
{
    m_FkiEzsigntsarequirementIDIsSet = false;
}
utility::string_t Ezsignfolder_ResponseCompound::getSEzsignfolderDescription() const
{
    return m_SEzsignfolderDescription;
}

void Ezsignfolder_ResponseCompound::setSEzsignfolderDescription(const utility::string_t& value)
{
    m_SEzsignfolderDescription = value;
    m_SEzsignfolderDescriptionIsSet = true;
}

bool Ezsignfolder_ResponseCompound::sEzsignfolderDescriptionIsSet() const
{
    return m_SEzsignfolderDescriptionIsSet;
}

void Ezsignfolder_ResponseCompound::unsetSEzsignfolderDescription()
{
    m_SEzsignfolderDescriptionIsSet = false;
}
utility::string_t Ezsignfolder_ResponseCompound::getTEzsignfolderNote() const
{
    return m_TEzsignfolderNote;
}

void Ezsignfolder_ResponseCompound::setTEzsignfolderNote(const utility::string_t& value)
{
    m_TEzsignfolderNote = value;
    m_TEzsignfolderNoteIsSet = true;
}

bool Ezsignfolder_ResponseCompound::tEzsignfolderNoteIsSet() const
{
    return m_TEzsignfolderNoteIsSet;
}

void Ezsignfolder_ResponseCompound::unsetTEzsignfolderNote()
{
    m_TEzsignfolderNoteIsSet = false;
}
std::shared_ptr<Field_eEzsignfolderSendreminderfrequency> Ezsignfolder_ResponseCompound::getEEzsignfolderSendreminderfrequency() const
{
    return m_EEzsignfolderSendreminderfrequency;
}

void Ezsignfolder_ResponseCompound::setEEzsignfolderSendreminderfrequency(const std::shared_ptr<Field_eEzsignfolderSendreminderfrequency>& value)
{
    m_EEzsignfolderSendreminderfrequency = value;
    m_EEzsignfolderSendreminderfrequencyIsSet = true;
}

bool Ezsignfolder_ResponseCompound::eEzsignfolderSendreminderfrequencyIsSet() const
{
    return m_EEzsignfolderSendreminderfrequencyIsSet;
}

void Ezsignfolder_ResponseCompound::unsetEEzsignfolderSendreminderfrequency()
{
    m_EEzsignfolderSendreminderfrequencyIsSet = false;
}
int32_t Ezsignfolder_ResponseCompound::getPkiEzsignfolderID() const
{
    return m_PkiEzsignfolderID;
}

void Ezsignfolder_ResponseCompound::setPkiEzsignfolderID(int32_t value)
{
    m_PkiEzsignfolderID = value;
    m_PkiEzsignfolderIDIsSet = true;
}

bool Ezsignfolder_ResponseCompound::pkiEzsignfolderIDIsSet() const
{
    return m_PkiEzsignfolderIDIsSet;
}

void Ezsignfolder_ResponseCompound::unsetPkiEzsignfolderID()
{
    m_PkiEzsignfolderIDIsSet = false;
}
utility::string_t Ezsignfolder_ResponseCompound::getDtEzsignfolderSentdate() const
{
    return m_DtEzsignfolderSentdate;
}

void Ezsignfolder_ResponseCompound::setDtEzsignfolderSentdate(const utility::string_t& value)
{
    m_DtEzsignfolderSentdate = value;
    m_DtEzsignfolderSentdateIsSet = true;
}

bool Ezsignfolder_ResponseCompound::dtEzsignfolderSentdateIsSet() const
{
    return m_DtEzsignfolderSentdateIsSet;
}

void Ezsignfolder_ResponseCompound::unsetDtEzsignfolderSentdate()
{
    m_DtEzsignfolderSentdateIsSet = false;
}
std::shared_ptr<Field_eEzsignfolderStep> Ezsignfolder_ResponseCompound::getEEzsignfolderStep() const
{
    return m_EEzsignfolderStep;
}

void Ezsignfolder_ResponseCompound::setEEzsignfolderStep(const std::shared_ptr<Field_eEzsignfolderStep>& value)
{
    m_EEzsignfolderStep = value;
    m_EEzsignfolderStepIsSet = true;
}

bool Ezsignfolder_ResponseCompound::eEzsignfolderStepIsSet() const
{
    return m_EEzsignfolderStepIsSet;
}

void Ezsignfolder_ResponseCompound::unsetEEzsignfolderStep()
{
    m_EEzsignfolderStepIsSet = false;
}
utility::string_t Ezsignfolder_ResponseCompound::getDtEzsignfolderClose() const
{
    return m_DtEzsignfolderClose;
}

void Ezsignfolder_ResponseCompound::setDtEzsignfolderClose(const utility::string_t& value)
{
    m_DtEzsignfolderClose = value;
    m_DtEzsignfolderCloseIsSet = true;
}

bool Ezsignfolder_ResponseCompound::dtEzsignfolderCloseIsSet() const
{
    return m_DtEzsignfolderCloseIsSet;
}

void Ezsignfolder_ResponseCompound::unsetDtEzsignfolderClose()
{
    m_DtEzsignfolderCloseIsSet = false;
}
std::shared_ptr<Common_Audit> Ezsignfolder_ResponseCompound::getObjAudit() const
{
    return m_ObjAudit;
}

void Ezsignfolder_ResponseCompound::setObjAudit(const std::shared_ptr<Common_Audit>& value)
{
    m_ObjAudit = value;
    m_ObjAuditIsSet = true;
}

bool Ezsignfolder_ResponseCompound::objAuditIsSet() const
{
    return m_ObjAuditIsSet;
}

void Ezsignfolder_ResponseCompound::unsetObjAudit()
{
    m_ObjAuditIsSet = false;
}
}
}
}
}


