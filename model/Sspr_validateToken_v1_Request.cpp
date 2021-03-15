/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Sspr_validateToken_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Sspr_validateToken_v1_Request::Sspr_validateToken_v1_Request()
{
    m_PksCustomerCode = utility::conversions::to_string_t("");
    m_PksCustomerCodeIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_EUserTypeSSPRIsSet = false;
    m_SEmailAddress = utility::conversions::to_string_t("");
    m_SEmailAddressIsSet = false;
    m_SUserLoginname = utility::conversions::to_string_t("");
    m_SUserLoginnameIsSet = false;
    m_BinUserSSPRtoken = utility::conversions::to_string_t("");
    m_BinUserSSPRtokenIsSet = false;
}

Sspr_validateToken_v1_Request::~Sspr_validateToken_v1_Request()
{
}

void Sspr_validateToken_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Sspr_validateToken_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PksCustomerCodeIsSet)
    {
        val[utility::conversions::to_string_t("pksCustomerCode")] = ModelBase::toJson(m_PksCustomerCode);
    }
    if(m_FkiLanguageIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiLanguageID")] = ModelBase::toJson(m_FkiLanguageID);
    }
    if(m_EUserTypeSSPRIsSet)
    {
        val[utility::conversions::to_string_t("eUserTypeSSPR")] = ModelBase::toJson(m_EUserTypeSSPR);
    }
    if(m_SEmailAddressIsSet)
    {
        val[utility::conversions::to_string_t("sEmailAddress")] = ModelBase::toJson(m_SEmailAddress);
    }
    if(m_SUserLoginnameIsSet)
    {
        val[utility::conversions::to_string_t("sUserLoginname")] = ModelBase::toJson(m_SUserLoginname);
    }
    if(m_BinUserSSPRtokenIsSet)
    {
        val[utility::conversions::to_string_t("binUserSSPRtoken")] = ModelBase::toJson(m_BinUserSSPRtoken);
    }

    return val;
}

bool Sspr_validateToken_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pksCustomerCode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pksCustomerCode"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pksCustomerCode;
            ok &= ModelBase::fromJson(fieldValue, refVal_pksCustomerCode);
            setPksCustomerCode(refVal_pksCustomerCode);
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
    if(val.has_field(utility::conversions::to_string_t("eUserTypeSSPR")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eUserTypeSSPR"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_eUserTypeSSPR> refVal_eUserTypeSSPR;
            ok &= ModelBase::fromJson(fieldValue, refVal_eUserTypeSSPR);
            setEUserTypeSSPR(refVal_eUserTypeSSPR);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEmailAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEmailAddress"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEmailAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEmailAddress);
            setSEmailAddress(refVal_sEmailAddress);
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
    if(val.has_field(utility::conversions::to_string_t("binUserSSPRtoken")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binUserSSPRtoken"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_binUserSSPRtoken;
            ok &= ModelBase::fromJson(fieldValue, refVal_binUserSSPRtoken);
            setBinUserSSPRtoken(refVal_binUserSSPRtoken);
        }
    }
    return ok;
}

void Sspr_validateToken_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PksCustomerCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pksCustomerCode"), m_PksCustomerCode));
    }
    if(m_FkiLanguageIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiLanguageID"), m_FkiLanguageID));
    }
    if(m_EUserTypeSSPRIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eUserTypeSSPR"), m_EUserTypeSSPR));
    }
    if(m_SEmailAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEmailAddress"), m_SEmailAddress));
    }
    if(m_SUserLoginnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sUserLoginname"), m_SUserLoginname));
    }
    if(m_BinUserSSPRtokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("binUserSSPRtoken"), m_BinUserSSPRtoken));
    }
}

bool Sspr_validateToken_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pksCustomerCode")))
    {
        utility::string_t refVal_pksCustomerCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pksCustomerCode")), refVal_pksCustomerCode );
        setPksCustomerCode(refVal_pksCustomerCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiLanguageID")))
    {
        int32_t refVal_fkiLanguageID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiLanguageID")), refVal_fkiLanguageID );
        setFkiLanguageID(refVal_fkiLanguageID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eUserTypeSSPR")))
    {
        std::shared_ptr<Field_eUserTypeSSPR> refVal_eUserTypeSSPR;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eUserTypeSSPR")), refVal_eUserTypeSSPR );
        setEUserTypeSSPR(refVal_eUserTypeSSPR);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEmailAddress")))
    {
        utility::string_t refVal_sEmailAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEmailAddress")), refVal_sEmailAddress );
        setSEmailAddress(refVal_sEmailAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sUserLoginname")))
    {
        utility::string_t refVal_sUserLoginname;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sUserLoginname")), refVal_sUserLoginname );
        setSUserLoginname(refVal_sUserLoginname);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("binUserSSPRtoken")))
    {
        utility::string_t refVal_binUserSSPRtoken;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("binUserSSPRtoken")), refVal_binUserSSPRtoken );
        setBinUserSSPRtoken(refVal_binUserSSPRtoken);
    }
    return ok;
}

utility::string_t Sspr_validateToken_v1_Request::getPksCustomerCode() const
{
    return m_PksCustomerCode;
}

void Sspr_validateToken_v1_Request::setPksCustomerCode(const utility::string_t& value)
{
    m_PksCustomerCode = value;
    m_PksCustomerCodeIsSet = true;
}

bool Sspr_validateToken_v1_Request::pksCustomerCodeIsSet() const
{
    return m_PksCustomerCodeIsSet;
}

void Sspr_validateToken_v1_Request::unsetPksCustomerCode()
{
    m_PksCustomerCodeIsSet = false;
}
int32_t Sspr_validateToken_v1_Request::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Sspr_validateToken_v1_Request::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Sspr_validateToken_v1_Request::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Sspr_validateToken_v1_Request::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
std::shared_ptr<Field_eUserTypeSSPR> Sspr_validateToken_v1_Request::getEUserTypeSSPR() const
{
    return m_EUserTypeSSPR;
}

void Sspr_validateToken_v1_Request::setEUserTypeSSPR(const std::shared_ptr<Field_eUserTypeSSPR>& value)
{
    m_EUserTypeSSPR = value;
    m_EUserTypeSSPRIsSet = true;
}

bool Sspr_validateToken_v1_Request::eUserTypeSSPRIsSet() const
{
    return m_EUserTypeSSPRIsSet;
}

void Sspr_validateToken_v1_Request::unsetEUserTypeSSPR()
{
    m_EUserTypeSSPRIsSet = false;
}
utility::string_t Sspr_validateToken_v1_Request::getSEmailAddress() const
{
    return m_SEmailAddress;
}

void Sspr_validateToken_v1_Request::setSEmailAddress(const utility::string_t& value)
{
    m_SEmailAddress = value;
    m_SEmailAddressIsSet = true;
}

bool Sspr_validateToken_v1_Request::sEmailAddressIsSet() const
{
    return m_SEmailAddressIsSet;
}

void Sspr_validateToken_v1_Request::unsetSEmailAddress()
{
    m_SEmailAddressIsSet = false;
}
utility::string_t Sspr_validateToken_v1_Request::getSUserLoginname() const
{
    return m_SUserLoginname;
}

void Sspr_validateToken_v1_Request::setSUserLoginname(const utility::string_t& value)
{
    m_SUserLoginname = value;
    m_SUserLoginnameIsSet = true;
}

bool Sspr_validateToken_v1_Request::sUserLoginnameIsSet() const
{
    return m_SUserLoginnameIsSet;
}

void Sspr_validateToken_v1_Request::unsetSUserLoginname()
{
    m_SUserLoginnameIsSet = false;
}
utility::string_t Sspr_validateToken_v1_Request::getBinUserSSPRtoken() const
{
    return m_BinUserSSPRtoken;
}

void Sspr_validateToken_v1_Request::setBinUserSSPRtoken(const utility::string_t& value)
{
    m_BinUserSSPRtoken = value;
    m_BinUserSSPRtokenIsSet = true;
}

bool Sspr_validateToken_v1_Request::binUserSSPRtokenIsSet() const
{
    return m_BinUserSSPRtokenIsSet;
}

void Sspr_validateToken_v1_Request::unsetBinUserSSPRtoken()
{
    m_BinUserSSPRtokenIsSet = false;
}
}
}
}
}


