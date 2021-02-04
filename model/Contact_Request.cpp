/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Contact_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Contact_Request::Contact_Request()
{
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

Contact_Request::~Contact_Request()
{
}

void Contact_Request::validate()
{
    // TODO: implement validation
}

web::json::value Contact_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
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

bool Contact_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void Contact_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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

bool Contact_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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

int32_t Contact_Request::getFkiContacttitleID() const
{
    return m_FkiContacttitleID;
}

void Contact_Request::setFkiContacttitleID(int32_t value)
{
    m_FkiContacttitleID = value;
    m_FkiContacttitleIDIsSet = true;
}

bool Contact_Request::fkiContacttitleIDIsSet() const
{
    return m_FkiContacttitleIDIsSet;
}

void Contact_Request::unsetFkiContacttitleID()
{
    m_FkiContacttitleIDIsSet = false;
}
int32_t Contact_Request::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Contact_Request::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Contact_Request::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Contact_Request::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t Contact_Request::getSContactFirstname() const
{
    return m_SContactFirstname;
}

void Contact_Request::setSContactFirstname(const utility::string_t& value)
{
    m_SContactFirstname = value;
    m_SContactFirstnameIsSet = true;
}

bool Contact_Request::sContactFirstnameIsSet() const
{
    return m_SContactFirstnameIsSet;
}

void Contact_Request::unsetSContactFirstname()
{
    m_SContactFirstnameIsSet = false;
}
utility::string_t Contact_Request::getSContactLastname() const
{
    return m_SContactLastname;
}

void Contact_Request::setSContactLastname(const utility::string_t& value)
{
    m_SContactLastname = value;
    m_SContactLastnameIsSet = true;
}

bool Contact_Request::sContactLastnameIsSet() const
{
    return m_SContactLastnameIsSet;
}

void Contact_Request::unsetSContactLastname()
{
    m_SContactLastnameIsSet = false;
}
utility::string_t Contact_Request::getSContactCompany() const
{
    return m_SContactCompany;
}

void Contact_Request::setSContactCompany(const utility::string_t& value)
{
    m_SContactCompany = value;
    m_SContactCompanyIsSet = true;
}

bool Contact_Request::sContactCompanyIsSet() const
{
    return m_SContactCompanyIsSet;
}

void Contact_Request::unsetSContactCompany()
{
    m_SContactCompanyIsSet = false;
}
utility::string_t Contact_Request::getDtContactBirthdate() const
{
    return m_DtContactBirthdate;
}

void Contact_Request::setDtContactBirthdate(const utility::string_t& value)
{
    m_DtContactBirthdate = value;
    m_DtContactBirthdateIsSet = true;
}

bool Contact_Request::dtContactBirthdateIsSet() const
{
    return m_DtContactBirthdateIsSet;
}

void Contact_Request::unsetDtContactBirthdate()
{
    m_DtContactBirthdateIsSet = false;
}
}
}
}
}


