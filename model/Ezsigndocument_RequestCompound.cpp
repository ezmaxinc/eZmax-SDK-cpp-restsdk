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



#include "Ezsigndocument_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_RequestCompound::Ezsigndocument_RequestCompound()
{
    m_EEzsigndocumentSource = utility::conversions::to_string_t("");
    m_EEzsigndocumentSourceIsSet = false;
    m_EEzsigndocumentFormat = utility::conversions::to_string_t("");
    m_EEzsigndocumentFormatIsSet = false;
    m_SEzsigndocumentBase64IsSet = false;
    m_FkiEzsignfolderID = 0;
    m_FkiEzsignfolderIDIsSet = false;
    m_DtEzsigndocumentDuedate = utility::conversions::to_string_t("");
    m_DtEzsigndocumentDuedateIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_SEzsigndocumentName = utility::conversions::to_string_t("");
    m_SEzsigndocumentNameIsSet = false;
}

Ezsigndocument_RequestCompound::~Ezsigndocument_RequestCompound()
{
}

void Ezsigndocument_RequestCompound::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_RequestCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EEzsigndocumentSourceIsSet)
    {
        val[utility::conversions::to_string_t("eEzsigndocumentSource")] = ModelBase::toJson(m_EEzsigndocumentSource);
    }
    if(m_EEzsigndocumentFormatIsSet)
    {
        val[utility::conversions::to_string_t("eEzsigndocumentFormat")] = ModelBase::toJson(m_EEzsigndocumentFormat);
    }
    if(m_SEzsigndocumentBase64IsSet)
    {
        val[utility::conversions::to_string_t("sEzsigndocumentBase64")] = ModelBase::toJson(m_SEzsigndocumentBase64);
    }
    if(m_FkiEzsignfolderIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsignfolderID")] = ModelBase::toJson(m_FkiEzsignfolderID);
    }
    if(m_DtEzsigndocumentDuedateIsSet)
    {
        val[utility::conversions::to_string_t("dtEzsigndocumentDuedate")] = ModelBase::toJson(m_DtEzsigndocumentDuedate);
    }
    if(m_FkiLanguageIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiLanguageID")] = ModelBase::toJson(m_FkiLanguageID);
    }
    if(m_SEzsigndocumentNameIsSet)
    {
        val[utility::conversions::to_string_t("sEzsigndocumentName")] = ModelBase::toJson(m_SEzsigndocumentName);
    }

    return val;
}

bool Ezsigndocument_RequestCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eEzsigndocumentSource")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsigndocumentSource"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eEzsigndocumentSource;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsigndocumentSource);
            setEEzsigndocumentSource(refVal_eEzsigndocumentSource);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eEzsigndocumentFormat")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsigndocumentFormat"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eEzsigndocumentFormat;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsigndocumentFormat);
            setEEzsigndocumentFormat(refVal_eEzsigndocumentFormat);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEzsigndocumentBase64")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsigndocumentBase64"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsigndocumentBase64;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsigndocumentBase64);
            setSEzsigndocumentBase64(refVal_sEzsigndocumentBase64);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiEzsignfolderID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsignfolderID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsignfolderID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsignfolderID);
            setFkiEzsignfolderID(refVal_fkiEzsignfolderID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtEzsigndocumentDuedate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtEzsigndocumentDuedate"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtEzsigndocumentDuedate;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtEzsigndocumentDuedate);
            setDtEzsigndocumentDuedate(refVal_dtEzsigndocumentDuedate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiLanguageID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiLanguageID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiLanguageID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiLanguageID);
            setFkiLanguageID(refVal_fkiLanguageID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEzsigndocumentName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsigndocumentName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsigndocumentName;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsigndocumentName);
            setSEzsigndocumentName(refVal_sEzsigndocumentName);
        }
    }
    return ok;
}

void Ezsigndocument_RequestCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EEzsigndocumentSourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsigndocumentSource"), m_EEzsigndocumentSource));
    }
    if(m_EEzsigndocumentFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsigndocumentFormat"), m_EEzsigndocumentFormat));
    }
    if(m_SEzsigndocumentBase64IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsigndocumentBase64"), m_SEzsigndocumentBase64));
    }
    if(m_FkiEzsignfolderIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsignfolderID"), m_FkiEzsignfolderID));
    }
    if(m_DtEzsigndocumentDuedateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtEzsigndocumentDuedate"), m_DtEzsigndocumentDuedate));
    }
    if(m_FkiLanguageIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiLanguageID"), m_FkiLanguageID));
    }
    if(m_SEzsigndocumentNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsigndocumentName"), m_SEzsigndocumentName));
    }
}

bool Ezsigndocument_RequestCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("eEzsigndocumentSource")))
    {
        utility::string_t refVal_eEzsigndocumentSource;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsigndocumentSource")), refVal_eEzsigndocumentSource );
        setEEzsigndocumentSource(refVal_eEzsigndocumentSource);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eEzsigndocumentFormat")))
    {
        utility::string_t refVal_eEzsigndocumentFormat;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsigndocumentFormat")), refVal_eEzsigndocumentFormat );
        setEEzsigndocumentFormat(refVal_eEzsigndocumentFormat);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsigndocumentBase64")))
    {
        utility::string_t refVal_sEzsigndocumentBase64;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsigndocumentBase64")), refVal_sEzsigndocumentBase64 );
        setSEzsigndocumentBase64(refVal_sEzsigndocumentBase64);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsignfolderID")))
    {
        int32_t refVal_fkiEzsignfolderID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsignfolderID")), refVal_fkiEzsignfolderID );
        setFkiEzsignfolderID(refVal_fkiEzsignfolderID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtEzsigndocumentDuedate")))
    {
        utility::string_t refVal_dtEzsigndocumentDuedate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtEzsigndocumentDuedate")), refVal_dtEzsigndocumentDuedate );
        setDtEzsigndocumentDuedate(refVal_dtEzsigndocumentDuedate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiLanguageID")))
    {
        int32_t refVal_fkiLanguageID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiLanguageID")), refVal_fkiLanguageID );
        setFkiLanguageID(refVal_fkiLanguageID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsigndocumentName")))
    {
        utility::string_t refVal_sEzsigndocumentName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsigndocumentName")), refVal_sEzsigndocumentName );
        setSEzsigndocumentName(refVal_sEzsigndocumentName);
    }
    return ok;
}

utility::string_t Ezsigndocument_RequestCompound::getEEzsigndocumentSource() const
{
    return m_EEzsigndocumentSource;
}

void Ezsigndocument_RequestCompound::setEEzsigndocumentSource(const utility::string_t& value)
{
    m_EEzsigndocumentSource = value;
    m_EEzsigndocumentSourceIsSet = true;
}

bool Ezsigndocument_RequestCompound::eEzsigndocumentSourceIsSet() const
{
    return m_EEzsigndocumentSourceIsSet;
}

void Ezsigndocument_RequestCompound::unsetEEzsigndocumentSource()
{
    m_EEzsigndocumentSourceIsSet = false;
}
utility::string_t Ezsigndocument_RequestCompound::getEEzsigndocumentFormat() const
{
    return m_EEzsigndocumentFormat;
}

void Ezsigndocument_RequestCompound::setEEzsigndocumentFormat(const utility::string_t& value)
{
    m_EEzsigndocumentFormat = value;
    m_EEzsigndocumentFormatIsSet = true;
}

bool Ezsigndocument_RequestCompound::eEzsigndocumentFormatIsSet() const
{
    return m_EEzsigndocumentFormatIsSet;
}

void Ezsigndocument_RequestCompound::unsetEEzsigndocumentFormat()
{
    m_EEzsigndocumentFormatIsSet = false;
}
utility::string_t Ezsigndocument_RequestCompound::getSEzsigndocumentBase64() const
{
    return m_SEzsigndocumentBase64;
}

void Ezsigndocument_RequestCompound::setSEzsigndocumentBase64(const utility::string_t& value)
{
    m_SEzsigndocumentBase64 = value;
    m_SEzsigndocumentBase64IsSet = true;
}

bool Ezsigndocument_RequestCompound::sEzsigndocumentBase64IsSet() const
{
    return m_SEzsigndocumentBase64IsSet;
}

void Ezsigndocument_RequestCompound::unsetSEzsigndocumentBase64()
{
    m_SEzsigndocumentBase64IsSet = false;
}
int32_t Ezsigndocument_RequestCompound::getFkiEzsignfolderID() const
{
    return m_FkiEzsignfolderID;
}

void Ezsigndocument_RequestCompound::setFkiEzsignfolderID(int32_t value)
{
    m_FkiEzsignfolderID = value;
    m_FkiEzsignfolderIDIsSet = true;
}

bool Ezsigndocument_RequestCompound::fkiEzsignfolderIDIsSet() const
{
    return m_FkiEzsignfolderIDIsSet;
}

void Ezsigndocument_RequestCompound::unsetFkiEzsignfolderID()
{
    m_FkiEzsignfolderIDIsSet = false;
}
utility::string_t Ezsigndocument_RequestCompound::getDtEzsigndocumentDuedate() const
{
    return m_DtEzsigndocumentDuedate;
}

void Ezsigndocument_RequestCompound::setDtEzsigndocumentDuedate(const utility::string_t& value)
{
    m_DtEzsigndocumentDuedate = value;
    m_DtEzsigndocumentDuedateIsSet = true;
}

bool Ezsigndocument_RequestCompound::dtEzsigndocumentDuedateIsSet() const
{
    return m_DtEzsigndocumentDuedateIsSet;
}

void Ezsigndocument_RequestCompound::unsetDtEzsigndocumentDuedate()
{
    m_DtEzsigndocumentDuedateIsSet = false;
}
int32_t Ezsigndocument_RequestCompound::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Ezsigndocument_RequestCompound::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Ezsigndocument_RequestCompound::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Ezsigndocument_RequestCompound::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t Ezsigndocument_RequestCompound::getSEzsigndocumentName() const
{
    return m_SEzsigndocumentName;
}

void Ezsigndocument_RequestCompound::setSEzsigndocumentName(const utility::string_t& value)
{
    m_SEzsigndocumentName = value;
    m_SEzsigndocumentNameIsSet = true;
}

bool Ezsigndocument_RequestCompound::sEzsigndocumentNameIsSet() const
{
    return m_SEzsigndocumentNameIsSet;
}

void Ezsigndocument_RequestCompound::unsetSEzsigndocumentName()
{
    m_SEzsigndocumentNameIsSet = false;
}
}
}
}
}


