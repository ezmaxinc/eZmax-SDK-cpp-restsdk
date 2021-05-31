/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.44
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Contact_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Contact_RequestCompound::Contact_RequestCompound()
{
    m_ObjContactinformationsIsSet = false;
    m_FkiContacttitleID = 0;
    m_FkiContacttitleIDIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_SContactFirstname = utility::conversions::to_string_t("");
    m_SContactFirstnameIsSet = false;
    m_SContactLastname = utility::conversions::to_string_t("");
    m_SContactLastnameIsSet = false;
    m_SContactCompany = utility::conversions::to_string_t("");
    m_SContactCompanyIsSet = false;
    m_DtContactBirthdate = utility::conversions::to_string_t("");
    m_DtContactBirthdateIsSet = false;
}

Contact_RequestCompound::~Contact_RequestCompound()
{
}

void Contact_RequestCompound::validate()
{
    // TODO: implement validation
}

web::json::value Contact_RequestCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjContactinformationsIsSet)
    {
        val[utility::conversions::to_string_t("objContactinformations")] = ModelBase::toJson(m_ObjContactinformations);
    }
    if(m_FkiContacttitleIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiContacttitleID")] = ModelBase::toJson(m_FkiContacttitleID);
    }
    if(m_FkiLanguageIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiLanguageID")] = ModelBase::toJson(m_FkiLanguageID);
    }
    if(m_SContactFirstnameIsSet)
    {
        val[utility::conversions::to_string_t("sContactFirstname")] = ModelBase::toJson(m_SContactFirstname);
    }
    if(m_SContactLastnameIsSet)
    {
        val[utility::conversions::to_string_t("sContactLastname")] = ModelBase::toJson(m_SContactLastname);
    }
    if(m_SContactCompanyIsSet)
    {
        val[utility::conversions::to_string_t("sContactCompany")] = ModelBase::toJson(m_SContactCompany);
    }
    if(m_DtContactBirthdateIsSet)
    {
        val[utility::conversions::to_string_t("dtContactBirthdate")] = ModelBase::toJson(m_DtContactBirthdate);
    }

    return val;
}

bool Contact_RequestCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objContactinformations")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objContactinformations"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Contactinformations_RequestCompound> refVal_objContactinformations;
            ok &= ModelBase::fromJson(fieldValue, refVal_objContactinformations);
            setObjContactinformations(refVal_objContactinformations);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiContacttitleID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiContacttitleID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiContacttitleID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiContacttitleID);
            setFkiContacttitleID(refVal_fkiContacttitleID);
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
    if(val.has_field(utility::conversions::to_string_t("sContactFirstname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sContactFirstname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sContactFirstname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sContactFirstname);
            setSContactFirstname(refVal_sContactFirstname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sContactLastname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sContactLastname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sContactLastname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sContactLastname);
            setSContactLastname(refVal_sContactLastname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sContactCompany")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sContactCompany"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sContactCompany;
            ok &= ModelBase::fromJson(fieldValue, refVal_sContactCompany);
            setSContactCompany(refVal_sContactCompany);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtContactBirthdate")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtContactBirthdate"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtContactBirthdate;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtContactBirthdate);
            setDtContactBirthdate(refVal_dtContactBirthdate);
        }
    }
    return ok;
}

void Contact_RequestCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjContactinformationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objContactinformations"), m_ObjContactinformations));
    }
    if(m_FkiContacttitleIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiContacttitleID"), m_FkiContacttitleID));
    }
    if(m_FkiLanguageIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiLanguageID"), m_FkiLanguageID));
    }
    if(m_SContactFirstnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sContactFirstname"), m_SContactFirstname));
    }
    if(m_SContactLastnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sContactLastname"), m_SContactLastname));
    }
    if(m_SContactCompanyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sContactCompany"), m_SContactCompany));
    }
    if(m_DtContactBirthdateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtContactBirthdate"), m_DtContactBirthdate));
    }
}

bool Contact_RequestCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objContactinformations")))
    {
        std::shared_ptr<Contactinformations_RequestCompound> refVal_objContactinformations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objContactinformations")), refVal_objContactinformations );
        setObjContactinformations(refVal_objContactinformations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiContacttitleID")))
    {
        int32_t refVal_fkiContacttitleID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiContacttitleID")), refVal_fkiContacttitleID );
        setFkiContacttitleID(refVal_fkiContacttitleID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiLanguageID")))
    {
        int32_t refVal_fkiLanguageID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiLanguageID")), refVal_fkiLanguageID );
        setFkiLanguageID(refVal_fkiLanguageID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sContactFirstname")))
    {
        utility::string_t refVal_sContactFirstname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sContactFirstname")), refVal_sContactFirstname );
        setSContactFirstname(refVal_sContactFirstname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sContactLastname")))
    {
        utility::string_t refVal_sContactLastname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sContactLastname")), refVal_sContactLastname );
        setSContactLastname(refVal_sContactLastname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sContactCompany")))
    {
        utility::string_t refVal_sContactCompany;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sContactCompany")), refVal_sContactCompany );
        setSContactCompany(refVal_sContactCompany);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtContactBirthdate")))
    {
        utility::string_t refVal_dtContactBirthdate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtContactBirthdate")), refVal_dtContactBirthdate );
        setDtContactBirthdate(refVal_dtContactBirthdate);
    }
    return ok;
}

std::shared_ptr<Contactinformations_RequestCompound> Contact_RequestCompound::getObjContactinformations() const
{
    return m_ObjContactinformations;
}

void Contact_RequestCompound::setObjContactinformations(const std::shared_ptr<Contactinformations_RequestCompound>& value)
{
    m_ObjContactinformations = value;
    m_ObjContactinformationsIsSet = true;
}

bool Contact_RequestCompound::objContactinformationsIsSet() const
{
    return m_ObjContactinformationsIsSet;
}

void Contact_RequestCompound::unsetObjContactinformations()
{
    m_ObjContactinformationsIsSet = false;
}
int32_t Contact_RequestCompound::getFkiContacttitleID() const
{
    return m_FkiContacttitleID;
}

void Contact_RequestCompound::setFkiContacttitleID(int32_t value)
{
    m_FkiContacttitleID = value;
    m_FkiContacttitleIDIsSet = true;
}

bool Contact_RequestCompound::fkiContacttitleIDIsSet() const
{
    return m_FkiContacttitleIDIsSet;
}

void Contact_RequestCompound::unsetFkiContacttitleID()
{
    m_FkiContacttitleIDIsSet = false;
}
int32_t Contact_RequestCompound::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Contact_RequestCompound::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Contact_RequestCompound::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Contact_RequestCompound::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t Contact_RequestCompound::getSContactFirstname() const
{
    return m_SContactFirstname;
}

void Contact_RequestCompound::setSContactFirstname(const utility::string_t& value)
{
    m_SContactFirstname = value;
    m_SContactFirstnameIsSet = true;
}

bool Contact_RequestCompound::sContactFirstnameIsSet() const
{
    return m_SContactFirstnameIsSet;
}

void Contact_RequestCompound::unsetSContactFirstname()
{
    m_SContactFirstnameIsSet = false;
}
utility::string_t Contact_RequestCompound::getSContactLastname() const
{
    return m_SContactLastname;
}

void Contact_RequestCompound::setSContactLastname(const utility::string_t& value)
{
    m_SContactLastname = value;
    m_SContactLastnameIsSet = true;
}

bool Contact_RequestCompound::sContactLastnameIsSet() const
{
    return m_SContactLastnameIsSet;
}

void Contact_RequestCompound::unsetSContactLastname()
{
    m_SContactLastnameIsSet = false;
}
utility::string_t Contact_RequestCompound::getSContactCompany() const
{
    return m_SContactCompany;
}

void Contact_RequestCompound::setSContactCompany(const utility::string_t& value)
{
    m_SContactCompany = value;
    m_SContactCompanyIsSet = true;
}

bool Contact_RequestCompound::sContactCompanyIsSet() const
{
    return m_SContactCompanyIsSet;
}

void Contact_RequestCompound::unsetSContactCompany()
{
    m_SContactCompanyIsSet = false;
}
utility::string_t Contact_RequestCompound::getDtContactBirthdate() const
{
    return m_DtContactBirthdate;
}

void Contact_RequestCompound::setDtContactBirthdate(const utility::string_t& value)
{
    m_DtContactBirthdate = value;
    m_DtContactBirthdateIsSet = true;
}

bool Contact_RequestCompound::dtContactBirthdateIsSet() const
{
    return m_DtContactBirthdateIsSet;
}

void Contact_RequestCompound::unsetDtContactBirthdate()
{
    m_DtContactBirthdateIsSet = false;
}
}
}
}
}


