/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.32
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Webhook_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Webhook_Response::Webhook_Response()
{
    m_PkiWebhookID = 0;
    m_PkiWebhookIDIsSet = false;
    m_EWebhookModule = utility::conversions::to_string_t("");
    m_EWebhookModuleIsSet = false;
    m_EWebhookEzsignevent = utility::conversions::to_string_t("");
    m_EWebhookEzsigneventIsSet = false;
    m_PksCustomerCode = utility::conversions::to_string_t("");
    m_PksCustomerCodeIsSet = false;
    m_SWebhookUrl = utility::conversions::to_string_t("");
    m_SWebhookUrlIsSet = false;
    m_SWebhookEmailfailed = utility::conversions::to_string_t("");
    m_SWebhookEmailfailedIsSet = false;
    m_EWebhookManagementevent = utility::conversions::to_string_t("");
    m_EWebhookManagementeventIsSet = false;
}

Webhook_Response::~Webhook_Response()
{
}

void Webhook_Response::validate()
{
    // TODO: implement validation
}

web::json::value Webhook_Response::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PkiWebhookIDIsSet)
    {
        val[utility::conversions::to_string_t("pkiWebhookID")] = ModelBase::toJson(m_PkiWebhookID);
    }
    if(m_EWebhookModuleIsSet)
    {
        val[utility::conversions::to_string_t("eWebhookModule")] = ModelBase::toJson(m_EWebhookModule);
    }
    if(m_EWebhookEzsigneventIsSet)
    {
        val[utility::conversions::to_string_t("eWebhookEzsignevent")] = ModelBase::toJson(m_EWebhookEzsignevent);
    }
    if(m_PksCustomerCodeIsSet)
    {
        val[utility::conversions::to_string_t("pksCustomerCode")] = ModelBase::toJson(m_PksCustomerCode);
    }
    if(m_SWebhookUrlIsSet)
    {
        val[utility::conversions::to_string_t("sWebhookUrl")] = ModelBase::toJson(m_SWebhookUrl);
    }
    if(m_SWebhookEmailfailedIsSet)
    {
        val[utility::conversions::to_string_t("sWebhookEmailfailed")] = ModelBase::toJson(m_SWebhookEmailfailed);
    }
    if(m_EWebhookManagementeventIsSet)
    {
        val[utility::conversions::to_string_t("eWebhookManagementevent")] = ModelBase::toJson(m_EWebhookManagementevent);
    }

    return val;
}

bool Webhook_Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pkiWebhookID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiWebhookID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pkiWebhookID;
            ok &= ModelBase::fromJson(fieldValue, refVal_pkiWebhookID);
            setPkiWebhookID(refVal_pkiWebhookID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eWebhookModule")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eWebhookModule"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eWebhookModule;
            ok &= ModelBase::fromJson(fieldValue, refVal_eWebhookModule);
            setEWebhookModule(refVal_eWebhookModule);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eWebhookEzsignevent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eWebhookEzsignevent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eWebhookEzsignevent;
            ok &= ModelBase::fromJson(fieldValue, refVal_eWebhookEzsignevent);
            setEWebhookEzsignevent(refVal_eWebhookEzsignevent);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("sWebhookUrl")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sWebhookUrl"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sWebhookUrl;
            ok &= ModelBase::fromJson(fieldValue, refVal_sWebhookUrl);
            setSWebhookUrl(refVal_sWebhookUrl);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sWebhookEmailfailed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sWebhookEmailfailed"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sWebhookEmailfailed;
            ok &= ModelBase::fromJson(fieldValue, refVal_sWebhookEmailfailed);
            setSWebhookEmailfailed(refVal_sWebhookEmailfailed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eWebhookManagementevent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eWebhookManagementevent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_eWebhookManagementevent;
            ok &= ModelBase::fromJson(fieldValue, refVal_eWebhookManagementevent);
            setEWebhookManagementevent(refVal_eWebhookManagementevent);
        }
    }
    return ok;
}

void Webhook_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PkiWebhookIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pkiWebhookID"), m_PkiWebhookID));
    }
    if(m_EWebhookModuleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eWebhookModule"), m_EWebhookModule));
    }
    if(m_EWebhookEzsigneventIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eWebhookEzsignevent"), m_EWebhookEzsignevent));
    }
    if(m_PksCustomerCodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pksCustomerCode"), m_PksCustomerCode));
    }
    if(m_SWebhookUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sWebhookUrl"), m_SWebhookUrl));
    }
    if(m_SWebhookEmailfailedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sWebhookEmailfailed"), m_SWebhookEmailfailed));
    }
    if(m_EWebhookManagementeventIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eWebhookManagementevent"), m_EWebhookManagementevent));
    }
}

bool Webhook_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pkiWebhookID")))
    {
        int32_t refVal_pkiWebhookID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pkiWebhookID")), refVal_pkiWebhookID );
        setPkiWebhookID(refVal_pkiWebhookID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eWebhookModule")))
    {
        utility::string_t refVal_eWebhookModule;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eWebhookModule")), refVal_eWebhookModule );
        setEWebhookModule(refVal_eWebhookModule);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eWebhookEzsignevent")))
    {
        utility::string_t refVal_eWebhookEzsignevent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eWebhookEzsignevent")), refVal_eWebhookEzsignevent );
        setEWebhookEzsignevent(refVal_eWebhookEzsignevent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pksCustomerCode")))
    {
        utility::string_t refVal_pksCustomerCode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pksCustomerCode")), refVal_pksCustomerCode );
        setPksCustomerCode(refVal_pksCustomerCode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sWebhookUrl")))
    {
        utility::string_t refVal_sWebhookUrl;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sWebhookUrl")), refVal_sWebhookUrl );
        setSWebhookUrl(refVal_sWebhookUrl);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sWebhookEmailfailed")))
    {
        utility::string_t refVal_sWebhookEmailfailed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sWebhookEmailfailed")), refVal_sWebhookEmailfailed );
        setSWebhookEmailfailed(refVal_sWebhookEmailfailed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eWebhookManagementevent")))
    {
        utility::string_t refVal_eWebhookManagementevent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eWebhookManagementevent")), refVal_eWebhookManagementevent );
        setEWebhookManagementevent(refVal_eWebhookManagementevent);
    }
    return ok;
}

int32_t Webhook_Response::getPkiWebhookID() const
{
    return m_PkiWebhookID;
}

void Webhook_Response::setPkiWebhookID(int32_t value)
{
    m_PkiWebhookID = value;
    m_PkiWebhookIDIsSet = true;
}

bool Webhook_Response::pkiWebhookIDIsSet() const
{
    return m_PkiWebhookIDIsSet;
}

void Webhook_Response::unsetPkiWebhookID()
{
    m_PkiWebhookIDIsSet = false;
}
utility::string_t Webhook_Response::getEWebhookModule() const
{
    return m_EWebhookModule;
}

void Webhook_Response::setEWebhookModule(const utility::string_t& value)
{
    m_EWebhookModule = value;
    m_EWebhookModuleIsSet = true;
}

bool Webhook_Response::eWebhookModuleIsSet() const
{
    return m_EWebhookModuleIsSet;
}

void Webhook_Response::unsetEWebhookModule()
{
    m_EWebhookModuleIsSet = false;
}
utility::string_t Webhook_Response::getEWebhookEzsignevent() const
{
    return m_EWebhookEzsignevent;
}

void Webhook_Response::setEWebhookEzsignevent(const utility::string_t& value)
{
    m_EWebhookEzsignevent = value;
    m_EWebhookEzsigneventIsSet = true;
}

bool Webhook_Response::eWebhookEzsigneventIsSet() const
{
    return m_EWebhookEzsigneventIsSet;
}

void Webhook_Response::unsetEWebhookEzsignevent()
{
    m_EWebhookEzsigneventIsSet = false;
}
utility::string_t Webhook_Response::getPksCustomerCode() const
{
    return m_PksCustomerCode;
}

void Webhook_Response::setPksCustomerCode(const utility::string_t& value)
{
    m_PksCustomerCode = value;
    m_PksCustomerCodeIsSet = true;
}

bool Webhook_Response::pksCustomerCodeIsSet() const
{
    return m_PksCustomerCodeIsSet;
}

void Webhook_Response::unsetPksCustomerCode()
{
    m_PksCustomerCodeIsSet = false;
}
utility::string_t Webhook_Response::getSWebhookUrl() const
{
    return m_SWebhookUrl;
}

void Webhook_Response::setSWebhookUrl(const utility::string_t& value)
{
    m_SWebhookUrl = value;
    m_SWebhookUrlIsSet = true;
}

bool Webhook_Response::sWebhookUrlIsSet() const
{
    return m_SWebhookUrlIsSet;
}

void Webhook_Response::unsetSWebhookUrl()
{
    m_SWebhookUrlIsSet = false;
}
utility::string_t Webhook_Response::getSWebhookEmailfailed() const
{
    return m_SWebhookEmailfailed;
}

void Webhook_Response::setSWebhookEmailfailed(const utility::string_t& value)
{
    m_SWebhookEmailfailed = value;
    m_SWebhookEmailfailedIsSet = true;
}

bool Webhook_Response::sWebhookEmailfailedIsSet() const
{
    return m_SWebhookEmailfailedIsSet;
}

void Webhook_Response::unsetSWebhookEmailfailed()
{
    m_SWebhookEmailfailedIsSet = false;
}
utility::string_t Webhook_Response::getEWebhookManagementevent() const
{
    return m_EWebhookManagementevent;
}

void Webhook_Response::setEWebhookManagementevent(const utility::string_t& value)
{
    m_EWebhookManagementevent = value;
    m_EWebhookManagementeventIsSet = true;
}

bool Webhook_Response::eWebhookManagementeventIsSet() const
{
    return m_EWebhookManagementeventIsSet;
}

void Webhook_Response::unsetEWebhookManagementevent()
{
    m_EWebhookManagementeventIsSet = false;
}
}
}
}
}


