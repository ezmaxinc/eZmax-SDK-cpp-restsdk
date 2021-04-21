/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "User_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




User_Response::User_Response()
{
    m_PkiUserID = 0;
    m_PkiUserIDIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_EUserTypeIsSet = false;
    m_SUserFirstname = utility::conversions::to_string_t("");
    m_SUserFirstnameIsSet = false;
    m_SUserLastname = utility::conversions::to_string_t("");
    m_SUserLastnameIsSet = false;
    m_SUserLoginname = utility::conversions::to_string_t("");
    m_SUserLoginnameIsSet = false;
    m_ObjAuditIsSet = false;
}

User_Response::~User_Response()
{
}

void User_Response::validate()
{
    // TODO: implement validation
}

web::json::value User_Response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PkiUserIDIsSet)
    {
        val[utility::conversions::to_string_t("pkiUserID")] = ModelBase::toJson(m_PkiUserID);
    }
    if(m_FkiLanguageIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiLanguageID")] = ModelBase::toJson(m_FkiLanguageID);
    }
    if(m_EUserTypeIsSet)
    {
        val[utility::conversions::to_string_t("eUserType")] = ModelBase::toJson(m_EUserType);
    }
    if(m_SUserFirstnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserFirstname")] = ModelBase::toJson(m_SUserFirstname);
    }
    if(m_SUserLastnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserLastname")] = ModelBase::toJson(m_SUserLastname);
    }
    if(m_SUserLoginnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserLoginname")] = ModelBase::toJson(m_SUserLoginname);
    }
    if(m_ObjAuditIsSet)
    {
        val[utility::conversions::to_string_t("objAudit")] = ModelBase::toJson(m_ObjAudit);
    }

    return val;
}

bool User_Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pkiUserID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiUserID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pkiUserID;
            ok &= ModelBase::fromJson(fieldValue, refVal_pkiUserID);
            setPkiUserID(refVal_pkiUserID);
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
    if(val.has_field(utility::conversions::to_string_t("eUserType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eUserType"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_eUserType> refVal_eUserType;
            ok &= ModelBase::fromJson(fieldValue, refVal_eUserType);
            setEUserType(refVal_eUserType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sUserFirstname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sUserFirstname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sUserFirstname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sUserFirstname);
            setSUserFirstname(refVal_sUserFirstname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sUserLastname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sUserLastname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sUserLastname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sUserLastname);
            setSUserLastname(refVal_sUserLastname);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sUserLoginname")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sUserLoginname"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sUserLoginname;
            ok &= ModelBase::fromJson(fieldValue, refVal_sUserLoginname);
            setSUserLoginname(refVal_sUserLoginname);
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

void User_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PkiUserIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pkiUserID"), m_PkiUserID));
    }
    if(m_FkiLanguageIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiLanguageID"), m_FkiLanguageID));
    }
    if(m_EUserTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eUserType"), m_EUserType));
    }
    if(m_SUserFirstnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserFirstname"), m_SUserFirstname));
    }
    if(m_SUserLastnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserLastname"), m_SUserLastname));
    }
    if(m_SUserLoginnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserLoginname"), m_SUserLoginname));
    }
    if(m_ObjAuditIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objAudit"), m_ObjAudit));
    }
}

bool User_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pkiUserID")))
    {
        int32_t refVal_pkiUserID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pkiUserID")), refVal_pkiUserID );
        setPkiUserID(refVal_pkiUserID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiLanguageID")))
    {
        int32_t refVal_fkiLanguageID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiLanguageID")), refVal_fkiLanguageID );
        setFkiLanguageID(refVal_fkiLanguageID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eUserType")))
    {
        std::shared_ptr<Field_eUserType> refVal_eUserType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eUserType")), refVal_eUserType );
        setEUserType(refVal_eUserType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserFirstname")))
    {
        utility::string_t refVal_sUserFirstname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserFirstname")), refVal_sUserFirstname );
        setSUserFirstname(refVal_sUserFirstname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserLastname")))
    {
        utility::string_t refVal_sUserLastname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserLastname")), refVal_sUserLastname );
        setSUserLastname(refVal_sUserLastname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserLoginname")))
    {
        utility::string_t refVal_sUserLoginname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserLoginname")), refVal_sUserLoginname );
        setSUserLoginname(refVal_sUserLoginname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objAudit")))
    {
        std::shared_ptr<Common_Audit> refVal_objAudit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objAudit")), refVal_objAudit );
        setObjAudit(refVal_objAudit);
    }
    return ok;
}

int32_t User_Response::getPkiUserID() const
{
    return m_PkiUserID;
}

void User_Response::setPkiUserID(int32_t value)
{
    m_PkiUserID = value;
    m_PkiUserIDIsSet = true;
}

bool User_Response::pkiUserIDIsSet() const
{
    return m_PkiUserIDIsSet;
}

void User_Response::unsetPkiUserID()
{
    m_PkiUserIDIsSet = false;
}
int32_t User_Response::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void User_Response::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool User_Response::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void User_Response::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
std::shared_ptr<Field_eUserType> User_Response::getEUserType() const
{
    return m_EUserType;
}

void User_Response::setEUserType(const std::shared_ptr<Field_eUserType>& value)
{
    m_EUserType = value;
    m_EUserTypeIsSet = true;
}

bool User_Response::eUserTypeIsSet() const
{
    return m_EUserTypeIsSet;
}

void User_Response::unsetEUserType()
{
    m_EUserTypeIsSet = false;
}
utility::string_t User_Response::getSUserFirstname() const
{
    return m_SUserFirstname;
}

void User_Response::setSUserFirstname(const utility::string_t& value)
{
    m_SUserFirstname = value;
    m_SUserFirstnameIsSet = true;
}

bool User_Response::sUserFirstnameIsSet() const
{
    return m_SUserFirstnameIsSet;
}

void User_Response::unsetSUserFirstname()
{
    m_SUserFirstnameIsSet = false;
}
utility::string_t User_Response::getSUserLastname() const
{
    return m_SUserLastname;
}

void User_Response::setSUserLastname(const utility::string_t& value)
{
    m_SUserLastname = value;
    m_SUserLastnameIsSet = true;
}

bool User_Response::sUserLastnameIsSet() const
{
    return m_SUserLastnameIsSet;
}

void User_Response::unsetSUserLastname()
{
    m_SUserLastnameIsSet = false;
}
utility::string_t User_Response::getSUserLoginname() const
{
    return m_SUserLoginname;
}

void User_Response::setSUserLoginname(const utility::string_t& value)
{
    m_SUserLoginname = value;
    m_SUserLoginnameIsSet = true;
}

bool User_Response::sUserLoginnameIsSet() const
{
    return m_SUserLoginnameIsSet;
}

void User_Response::unsetSUserLoginname()
{
    m_SUserLoginnameIsSet = false;
}
std::shared_ptr<Common_Audit> User_Response::getObjAudit() const
{
    return m_ObjAudit;
}

void User_Response::setObjAudit(const std::shared_ptr<Common_Audit>& value)
{
    m_ObjAudit = value;
    m_ObjAuditIsSet = true;
}

bool User_Response::objAuditIsSet() const
{
    return m_ObjAuditIsSet;
}

void User_Response::unsetObjAudit()
{
    m_ObjAuditIsSet = false;
}
}
}
}
}


