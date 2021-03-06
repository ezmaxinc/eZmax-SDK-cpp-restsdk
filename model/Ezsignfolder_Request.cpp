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



#include "Ezsignfolder_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignfolder_Request::Ezsignfolder_Request()
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
}

Ezsignfolder_Request::~Ezsignfolder_Request()
{
}

void Ezsignfolder_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignfolder_Request::toJson() const
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

    return val;
}

bool Ezsignfolder_Request::fromJson(const web::json::value& val)
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
    return ok;
}

void Ezsignfolder_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
}

bool Ezsignfolder_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    return ok;
}

int32_t Ezsignfolder_Request::getFkiEzsignfoldertypeID() const
{
    return m_FkiEzsignfoldertypeID;
}

void Ezsignfolder_Request::setFkiEzsignfoldertypeID(int32_t value)
{
    m_FkiEzsignfoldertypeID = value;
    m_FkiEzsignfoldertypeIDIsSet = true;
}

bool Ezsignfolder_Request::fkiEzsignfoldertypeIDIsSet() const
{
    return m_FkiEzsignfoldertypeIDIsSet;
}

void Ezsignfolder_Request::unsetFkiEzsignfoldertypeID()
{
    m_FkiEzsignfoldertypeIDIsSet = false;
}
int32_t Ezsignfolder_Request::getFkiEzsigntsarequirementID() const
{
    return m_FkiEzsigntsarequirementID;
}

void Ezsignfolder_Request::setFkiEzsigntsarequirementID(int32_t value)
{
    m_FkiEzsigntsarequirementID = value;
    m_FkiEzsigntsarequirementIDIsSet = true;
}

bool Ezsignfolder_Request::fkiEzsigntsarequirementIDIsSet() const
{
    return m_FkiEzsigntsarequirementIDIsSet;
}

void Ezsignfolder_Request::unsetFkiEzsigntsarequirementID()
{
    m_FkiEzsigntsarequirementIDIsSet = false;
}
utility::string_t Ezsignfolder_Request::getSEzsignfolderDescription() const
{
    return m_SEzsignfolderDescription;
}

void Ezsignfolder_Request::setSEzsignfolderDescription(const utility::string_t& value)
{
    m_SEzsignfolderDescription = value;
    m_SEzsignfolderDescriptionIsSet = true;
}

bool Ezsignfolder_Request::sEzsignfolderDescriptionIsSet() const
{
    return m_SEzsignfolderDescriptionIsSet;
}

void Ezsignfolder_Request::unsetSEzsignfolderDescription()
{
    m_SEzsignfolderDescriptionIsSet = false;
}
utility::string_t Ezsignfolder_Request::getTEzsignfolderNote() const
{
    return m_TEzsignfolderNote;
}

void Ezsignfolder_Request::setTEzsignfolderNote(const utility::string_t& value)
{
    m_TEzsignfolderNote = value;
    m_TEzsignfolderNoteIsSet = true;
}

bool Ezsignfolder_Request::tEzsignfolderNoteIsSet() const
{
    return m_TEzsignfolderNoteIsSet;
}

void Ezsignfolder_Request::unsetTEzsignfolderNote()
{
    m_TEzsignfolderNoteIsSet = false;
}
std::shared_ptr<Field_eEzsignfolderSendreminderfrequency> Ezsignfolder_Request::getEEzsignfolderSendreminderfrequency() const
{
    return m_EEzsignfolderSendreminderfrequency;
}

void Ezsignfolder_Request::setEEzsignfolderSendreminderfrequency(const std::shared_ptr<Field_eEzsignfolderSendreminderfrequency>& value)
{
    m_EEzsignfolderSendreminderfrequency = value;
    m_EEzsignfolderSendreminderfrequencyIsSet = true;
}

bool Ezsignfolder_Request::eEzsignfolderSendreminderfrequencyIsSet() const
{
    return m_EEzsignfolderSendreminderfrequencyIsSet;
}

void Ezsignfolder_Request::unsetEEzsignfolderSendreminderfrequency()
{
    m_EEzsignfolderSendreminderfrequencyIsSet = false;
}
}
}
}
}


