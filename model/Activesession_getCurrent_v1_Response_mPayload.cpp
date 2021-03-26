/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Activesession_getCurrent_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Activesession_getCurrent_v1_Response_mPayload::Activesession_getCurrent_v1_Response_mPayload()
{
    m_SCustomerCode = utility::conversions::to_string_t("");
    m_SCustomerCodeIsSet = false;
    m_EActivesessionSessiontype = utility::conversions::to_string_t("");
    m_EActivesessionSessiontypeIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_SCompanyNameX = utility::conversions::to_string_t("");
    m_SCompanyNameXIsSet = false;
    m_SDepartmentNameX = utility::conversions::to_string_t("");
    m_SDepartmentNameXIsSet = false;
    m_A_RegisteredModulesIsSet = false;
    m_A_PermissionsIsSet = false;
    m_FkiUserID = 0;
    m_FkiUserIDIsSet = false;
    m_FkiApikeyID = 0;
    m_FkiApikeyIDIsSet = false;
}

Activesession_getCurrent_v1_Response_mPayload::~Activesession_getCurrent_v1_Response_mPayload()
{
}

void Activesession_getCurrent_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Activesession_getCurrent_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SCustomerCodeIsSet)
    {
        val[utility::conversions::to_string_t("sCustomerCode")] = ModelBase::toJson(m_SCustomerCode);
    }
    if(m_EActivesessionSessiontypeIsSet)
    {
        val[utility::conversions::to_string_t("eActivesessionSessiontype")] = ModelBase::toJson(m_EActivesessionSessiontype);
    }
    if(m_FkiLanguageIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiLanguageID")] = ModelBase::toJson(m_FkiLanguageID);
    }
    if(m_SCompanyNameXIsSet)
    {
        val[utility::conversions::to_string_t("sCompanyNameX")] = ModelBase::toJson(m_SCompanyNameX);
    }
    if(m_SDepartmentNameXIsSet)
    {
        val[utility::conversions::to_string_t("sDepartmentNameX")] = ModelBase::toJson(m_SDepartmentNameX);
    }
    if(m_A_RegisteredModulesIsSet)
    {
        val[utility::conversions::to_string_t("a_RegisteredModules")] = ModelBase::toJson(m_A_RegisteredModules);
    }
    if(m_A_PermissionsIsSet)
    {
        val[utility::conversions::to_string_t("a_Permissions")] = ModelBase::toJson(m_A_Permissions);
    }
    if(m_FkiUserIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiUserID")] = ModelBase::toJson(m_FkiUserID);
    }
    if(m_FkiApikeyIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiApikeyID")] = ModelBase::toJson(m_FkiApikeyID);
    }

    return val;
}

bool Activesession_getCurrent_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sCustomerCode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sCustomerCode"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sCustomerCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_sCustomerCode);
            setSCustomerCode(refVal_sCustomerCode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eActivesessionSessiontype")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eActivesessionSessiontype"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eActivesessionSessiontype;
            ok &= ModelBase::fromJson(fieldValue, refVal_eActivesessionSessiontype);
            setEActivesessionSessiontype(refVal_eActivesessionSessiontype);
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
    if(val.has_field(utility::conversions::to_string_t("sCompanyNameX")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sCompanyNameX"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sCompanyNameX;
            ok &= ModelBase::fromJson(fieldValue, refVal_sCompanyNameX);
            setSCompanyNameX(refVal_sCompanyNameX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sDepartmentNameX")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sDepartmentNameX"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sDepartmentNameX;
            ok &= ModelBase::fromJson(fieldValue, refVal_sDepartmentNameX);
            setSDepartmentNameX(refVal_sDepartmentNameX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_RegisteredModules")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_RegisteredModules"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_a_RegisteredModules;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_RegisteredModules);
            setARegisteredModules(refVal_a_RegisteredModules);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_Permissions")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_Permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_Permissions;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_Permissions);
            setAPermissions(refVal_a_Permissions);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiUserID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiUserID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiUserID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiUserID);
            setFkiUserID(refVal_fkiUserID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiApikeyID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiApikeyID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiApikeyID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiApikeyID);
            setFkiApikeyID(refVal_fkiApikeyID);
        }
    }
    return ok;
}

void Activesession_getCurrent_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SCustomerCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sCustomerCode"), m_SCustomerCode));
    }
    if(m_EActivesessionSessiontypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eActivesessionSessiontype"), m_EActivesessionSessiontype));
    }
    if(m_FkiLanguageIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiLanguageID"), m_FkiLanguageID));
    }
    if(m_SCompanyNameXIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sCompanyNameX"), m_SCompanyNameX));
    }
    if(m_SDepartmentNameXIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sDepartmentNameX"), m_SDepartmentNameX));
    }
    if(m_A_RegisteredModulesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_RegisteredModules"), m_A_RegisteredModules));
    }
    if(m_A_PermissionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_Permissions"), m_A_Permissions));
    }
    if(m_FkiUserIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiUserID"), m_FkiUserID));
    }
    if(m_FkiApikeyIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiApikeyID"), m_FkiApikeyID));
    }
}

bool Activesession_getCurrent_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sCustomerCode")))
    {
        utility::string_t refVal_sCustomerCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sCustomerCode")), refVal_sCustomerCode );
        setSCustomerCode(refVal_sCustomerCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eActivesessionSessiontype")))
    {
        utility::string_t refVal_eActivesessionSessiontype;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eActivesessionSessiontype")), refVal_eActivesessionSessiontype );
        setEActivesessionSessiontype(refVal_eActivesessionSessiontype);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiLanguageID")))
    {
        int32_t refVal_fkiLanguageID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiLanguageID")), refVal_fkiLanguageID );
        setFkiLanguageID(refVal_fkiLanguageID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sCompanyNameX")))
    {
        utility::string_t refVal_sCompanyNameX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sCompanyNameX")), refVal_sCompanyNameX );
        setSCompanyNameX(refVal_sCompanyNameX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sDepartmentNameX")))
    {
        utility::string_t refVal_sDepartmentNameX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sDepartmentNameX")), refVal_sDepartmentNameX );
        setSDepartmentNameX(refVal_sDepartmentNameX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_RegisteredModules")))
    {
        std::vector<utility::string_t> refVal_a_RegisteredModules;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_RegisteredModules")), refVal_a_RegisteredModules );
        setARegisteredModules(refVal_a_RegisteredModules);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_Permissions")))
    {
        std::vector<int32_t> refVal_a_Permissions;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_Permissions")), refVal_a_Permissions );
        setAPermissions(refVal_a_Permissions);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiUserID")))
    {
        int32_t refVal_fkiUserID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiUserID")), refVal_fkiUserID );
        setFkiUserID(refVal_fkiUserID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiApikeyID")))
    {
        int32_t refVal_fkiApikeyID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiApikeyID")), refVal_fkiApikeyID );
        setFkiApikeyID(refVal_fkiApikeyID);
    }
    return ok;
}

utility::string_t Activesession_getCurrent_v1_Response_mPayload::getSCustomerCode() const
{
    return m_SCustomerCode;
}

void Activesession_getCurrent_v1_Response_mPayload::setSCustomerCode(const utility::string_t& value)
{
    m_SCustomerCode = value;
    m_SCustomerCodeIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::sCustomerCodeIsSet() const
{
    return m_SCustomerCodeIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetSCustomerCode()
{
    m_SCustomerCodeIsSet = false;
}
utility::string_t Activesession_getCurrent_v1_Response_mPayload::getEActivesessionSessiontype() const
{
    return m_EActivesessionSessiontype;
}

void Activesession_getCurrent_v1_Response_mPayload::setEActivesessionSessiontype(const utility::string_t& value)
{
    m_EActivesessionSessiontype = value;
    m_EActivesessionSessiontypeIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::eActivesessionSessiontypeIsSet() const
{
    return m_EActivesessionSessiontypeIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetEActivesessionSessiontype()
{
    m_EActivesessionSessiontypeIsSet = false;
}
int32_t Activesession_getCurrent_v1_Response_mPayload::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Activesession_getCurrent_v1_Response_mPayload::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t Activesession_getCurrent_v1_Response_mPayload::getSCompanyNameX() const
{
    return m_SCompanyNameX;
}

void Activesession_getCurrent_v1_Response_mPayload::setSCompanyNameX(const utility::string_t& value)
{
    m_SCompanyNameX = value;
    m_SCompanyNameXIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::sCompanyNameXIsSet() const
{
    return m_SCompanyNameXIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetSCompanyNameX()
{
    m_SCompanyNameXIsSet = false;
}
utility::string_t Activesession_getCurrent_v1_Response_mPayload::getSDepartmentNameX() const
{
    return m_SDepartmentNameX;
}

void Activesession_getCurrent_v1_Response_mPayload::setSDepartmentNameX(const utility::string_t& value)
{
    m_SDepartmentNameX = value;
    m_SDepartmentNameXIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::sDepartmentNameXIsSet() const
{
    return m_SDepartmentNameXIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetSDepartmentNameX()
{
    m_SDepartmentNameXIsSet = false;
}
std::vector<utility::string_t>& Activesession_getCurrent_v1_Response_mPayload::getARegisteredModules()
{
    return m_A_RegisteredModules;
}

void Activesession_getCurrent_v1_Response_mPayload::setARegisteredModules(const std::vector<utility::string_t>& value)
{
    m_A_RegisteredModules = value;
    m_A_RegisteredModulesIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::aRegisteredModulesIsSet() const
{
    return m_A_RegisteredModulesIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetA_RegisteredModules()
{
    m_A_RegisteredModulesIsSet = false;
}
std::vector<int32_t>& Activesession_getCurrent_v1_Response_mPayload::getAPermissions()
{
    return m_A_Permissions;
}

void Activesession_getCurrent_v1_Response_mPayload::setAPermissions(std::vector<int32_t> value)
{
    m_A_Permissions = value;
    m_A_PermissionsIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::aPermissionsIsSet() const
{
    return m_A_PermissionsIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetA_Permissions()
{
    m_A_PermissionsIsSet = false;
}
int32_t Activesession_getCurrent_v1_Response_mPayload::getFkiUserID() const
{
    return m_FkiUserID;
}

void Activesession_getCurrent_v1_Response_mPayload::setFkiUserID(int32_t value)
{
    m_FkiUserID = value;
    m_FkiUserIDIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::fkiUserIDIsSet() const
{
    return m_FkiUserIDIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetFkiUserID()
{
    m_FkiUserIDIsSet = false;
}
int32_t Activesession_getCurrent_v1_Response_mPayload::getFkiApikeyID() const
{
    return m_FkiApikeyID;
}

void Activesession_getCurrent_v1_Response_mPayload::setFkiApikeyID(int32_t value)
{
    m_FkiApikeyID = value;
    m_FkiApikeyIDIsSet = true;
}

bool Activesession_getCurrent_v1_Response_mPayload::fkiApikeyIDIsSet() const
{
    return m_FkiApikeyIDIsSet;
}

void Activesession_getCurrent_v1_Response_mPayload::unsetFkiApikeyID()
{
    m_FkiApikeyIDIsSet = false;
}
}
}
}
}


