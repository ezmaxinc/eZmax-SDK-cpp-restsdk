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



#include "Ezsigndocument_Response_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_Response_allOf::Ezsigndocument_Response_allOf()
{
    m_FkiEzsignfolderID = 0;
    m_FkiEzsignfolderIDIsSet = false;
    m_DtEzsigndocumentDuedate = utility::conversions::to_string_t("");
    m_DtEzsigndocumentDuedateIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_SEzsigndocumentName = utility::conversions::to_string_t("");
    m_SEzsigndocumentNameIsSet = false;
    m_PkiEzsigndocumentID = 0;
    m_PkiEzsigndocumentIDIsSet = false;
    m_EEzsigndocumentStepIsSet = false;
    m_DtEzsigndocumentFirstsend = utility::conversions::to_string_t("");
    m_DtEzsigndocumentFirstsendIsSet = false;
    m_DtEzsigndocumentLastsend = utility::conversions::to_string_t("");
    m_DtEzsigndocumentLastsendIsSet = false;
    m_IEzsigndocumentOrder = 0;
    m_IEzsigndocumentOrderIsSet = false;
    m_IEzsigndocumentPagetotal = 0;
    m_IEzsigndocumentPagetotalIsSet = false;
    m_IEzsigndocumentSignaturesigned = 0;
    m_IEzsigndocumentSignaturesignedIsSet = false;
    m_IEzsigndocumentSignaturetotal = 0;
    m_IEzsigndocumentSignaturetotalIsSet = false;
    m_SEzsigndocumentMD5initial = utility::conversions::to_string_t("");
    m_SEzsigndocumentMD5initialIsSet = false;
    m_SEzsigndocumentMD5signed = utility::conversions::to_string_t("");
    m_SEzsigndocumentMD5signedIsSet = false;
    m_ObjAuditIsSet = false;
}

Ezsigndocument_Response_allOf::~Ezsigndocument_Response_allOf()
{
}

void Ezsigndocument_Response_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_Response_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
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
    if(m_PkiEzsigndocumentIDIsSet)
    {
        val[utility::conversions::to_string_t("pkiEzsigndocumentID")] = ModelBase::toJson(m_PkiEzsigndocumentID);
    }
    if(m_EEzsigndocumentStepIsSet)
    {
        val[utility::conversions::to_string_t("eEzsigndocumentStep")] = ModelBase::toJson(m_EEzsigndocumentStep);
    }
    if(m_DtEzsigndocumentFirstsendIsSet)
    {
        val[utility::conversions::to_string_t("dtEzsigndocumentFirstsend")] = ModelBase::toJson(m_DtEzsigndocumentFirstsend);
    }
    if(m_DtEzsigndocumentLastsendIsSet)
    {
        val[utility::conversions::to_string_t("dtEzsigndocumentLastsend")] = ModelBase::toJson(m_DtEzsigndocumentLastsend);
    }
    if(m_IEzsigndocumentOrderIsSet)
    {
        val[utility::conversions::to_string_t("iEzsigndocumentOrder")] = ModelBase::toJson(m_IEzsigndocumentOrder);
    }
    if(m_IEzsigndocumentPagetotalIsSet)
    {
        val[utility::conversions::to_string_t("iEzsigndocumentPagetotal")] = ModelBase::toJson(m_IEzsigndocumentPagetotal);
    }
    if(m_IEzsigndocumentSignaturesignedIsSet)
    {
        val[utility::conversions::to_string_t("iEzsigndocumentSignaturesigned")] = ModelBase::toJson(m_IEzsigndocumentSignaturesigned);
    }
    if(m_IEzsigndocumentSignaturetotalIsSet)
    {
        val[utility::conversions::to_string_t("iEzsigndocumentSignaturetotal")] = ModelBase::toJson(m_IEzsigndocumentSignaturetotal);
    }
    if(m_SEzsigndocumentMD5initialIsSet)
    {
        val[utility::conversions::to_string_t("sEzsigndocumentMD5initial")] = ModelBase::toJson(m_SEzsigndocumentMD5initial);
    }
    if(m_SEzsigndocumentMD5signedIsSet)
    {
        val[utility::conversions::to_string_t("sEzsigndocumentMD5signed")] = ModelBase::toJson(m_SEzsigndocumentMD5signed);
    }
    if(m_ObjAuditIsSet)
    {
        val[utility::conversions::to_string_t("objAudit")] = ModelBase::toJson(m_ObjAudit);
    }

    return val;
}

bool Ezsigndocument_Response_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("pkiEzsigndocumentID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pkiEzsigndocumentID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_pkiEzsigndocumentID;
            ok &= ModelBase::fromJson(fieldValue, refVal_pkiEzsigndocumentID);
            setPkiEzsigndocumentID(refVal_pkiEzsigndocumentID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eEzsigndocumentStep")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsigndocumentStep"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_eEzsigndocumentStep> refVal_eEzsigndocumentStep;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsigndocumentStep);
            setEEzsigndocumentStep(refVal_eEzsigndocumentStep);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtEzsigndocumentFirstsend")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtEzsigndocumentFirstsend"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtEzsigndocumentFirstsend;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtEzsigndocumentFirstsend);
            setDtEzsigndocumentFirstsend(refVal_dtEzsigndocumentFirstsend);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtEzsigndocumentLastsend")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtEzsigndocumentLastsend"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtEzsigndocumentLastsend;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtEzsigndocumentLastsend);
            setDtEzsigndocumentLastsend(refVal_dtEzsigndocumentLastsend);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsigndocumentOrder")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsigndocumentOrder"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsigndocumentOrder;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsigndocumentOrder);
            setIEzsigndocumentOrder(refVal_iEzsigndocumentOrder);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsigndocumentPagetotal")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsigndocumentPagetotal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsigndocumentPagetotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsigndocumentPagetotal);
            setIEzsigndocumentPagetotal(refVal_iEzsigndocumentPagetotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsigndocumentSignaturesigned")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsigndocumentSignaturesigned"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsigndocumentSignaturesigned;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsigndocumentSignaturesigned);
            setIEzsigndocumentSignaturesigned(refVal_iEzsigndocumentSignaturesigned);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsigndocumentSignaturetotal")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsigndocumentSignaturetotal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsigndocumentSignaturetotal;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsigndocumentSignaturetotal);
            setIEzsigndocumentSignaturetotal(refVal_iEzsigndocumentSignaturetotal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEzsigndocumentMD5initial")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsigndocumentMD5initial"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsigndocumentMD5initial;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsigndocumentMD5initial);
            setSEzsigndocumentMD5initial(refVal_sEzsigndocumentMD5initial);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sEzsigndocumentMD5signed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsigndocumentMD5signed"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsigndocumentMD5signed;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsigndocumentMD5signed);
            setSEzsigndocumentMD5signed(refVal_sEzsigndocumentMD5signed);
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

void Ezsigndocument_Response_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(m_PkiEzsigndocumentIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pkiEzsigndocumentID"), m_PkiEzsigndocumentID));
    }
    if(m_EEzsigndocumentStepIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsigndocumentStep"), m_EEzsigndocumentStep));
    }
    if(m_DtEzsigndocumentFirstsendIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtEzsigndocumentFirstsend"), m_DtEzsigndocumentFirstsend));
    }
    if(m_DtEzsigndocumentLastsendIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtEzsigndocumentLastsend"), m_DtEzsigndocumentLastsend));
    }
    if(m_IEzsigndocumentOrderIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsigndocumentOrder"), m_IEzsigndocumentOrder));
    }
    if(m_IEzsigndocumentPagetotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsigndocumentPagetotal"), m_IEzsigndocumentPagetotal));
    }
    if(m_IEzsigndocumentSignaturesignedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsigndocumentSignaturesigned"), m_IEzsigndocumentSignaturesigned));
    }
    if(m_IEzsigndocumentSignaturetotalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsigndocumentSignaturetotal"), m_IEzsigndocumentSignaturetotal));
    }
    if(m_SEzsigndocumentMD5initialIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsigndocumentMD5initial"), m_SEzsigndocumentMD5initial));
    }
    if(m_SEzsigndocumentMD5signedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsigndocumentMD5signed"), m_SEzsigndocumentMD5signed));
    }
    if(m_ObjAuditIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objAudit"), m_ObjAudit));
    }
}

bool Ezsigndocument_Response_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("pkiEzsigndocumentID")))
    {
        int32_t refVal_pkiEzsigndocumentID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pkiEzsigndocumentID")), refVal_pkiEzsigndocumentID );
        setPkiEzsigndocumentID(refVal_pkiEzsigndocumentID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eEzsigndocumentStep")))
    {
        std::shared_ptr<Field_eEzsigndocumentStep> refVal_eEzsigndocumentStep;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsigndocumentStep")), refVal_eEzsigndocumentStep );
        setEEzsigndocumentStep(refVal_eEzsigndocumentStep);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtEzsigndocumentFirstsend")))
    {
        utility::string_t refVal_dtEzsigndocumentFirstsend;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtEzsigndocumentFirstsend")), refVal_dtEzsigndocumentFirstsend );
        setDtEzsigndocumentFirstsend(refVal_dtEzsigndocumentFirstsend);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtEzsigndocumentLastsend")))
    {
        utility::string_t refVal_dtEzsigndocumentLastsend;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtEzsigndocumentLastsend")), refVal_dtEzsigndocumentLastsend );
        setDtEzsigndocumentLastsend(refVal_dtEzsigndocumentLastsend);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsigndocumentOrder")))
    {
        int32_t refVal_iEzsigndocumentOrder;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsigndocumentOrder")), refVal_iEzsigndocumentOrder );
        setIEzsigndocumentOrder(refVal_iEzsigndocumentOrder);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsigndocumentPagetotal")))
    {
        int32_t refVal_iEzsigndocumentPagetotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsigndocumentPagetotal")), refVal_iEzsigndocumentPagetotal );
        setIEzsigndocumentPagetotal(refVal_iEzsigndocumentPagetotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsigndocumentSignaturesigned")))
    {
        int32_t refVal_iEzsigndocumentSignaturesigned;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsigndocumentSignaturesigned")), refVal_iEzsigndocumentSignaturesigned );
        setIEzsigndocumentSignaturesigned(refVal_iEzsigndocumentSignaturesigned);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsigndocumentSignaturetotal")))
    {
        int32_t refVal_iEzsigndocumentSignaturetotal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsigndocumentSignaturetotal")), refVal_iEzsigndocumentSignaturetotal );
        setIEzsigndocumentSignaturetotal(refVal_iEzsigndocumentSignaturetotal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsigndocumentMD5initial")))
    {
        utility::string_t refVal_sEzsigndocumentMD5initial;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsigndocumentMD5initial")), refVal_sEzsigndocumentMD5initial );
        setSEzsigndocumentMD5initial(refVal_sEzsigndocumentMD5initial);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsigndocumentMD5signed")))
    {
        utility::string_t refVal_sEzsigndocumentMD5signed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsigndocumentMD5signed")), refVal_sEzsigndocumentMD5signed );
        setSEzsigndocumentMD5signed(refVal_sEzsigndocumentMD5signed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("objAudit")))
    {
        std::shared_ptr<Common_Audit> refVal_objAudit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objAudit")), refVal_objAudit );
        setObjAudit(refVal_objAudit);
    }
    return ok;
}

int32_t Ezsigndocument_Response_allOf::getFkiEzsignfolderID() const
{
    return m_FkiEzsignfolderID;
}

void Ezsigndocument_Response_allOf::setFkiEzsignfolderID(int32_t value)
{
    m_FkiEzsignfolderID = value;
    m_FkiEzsignfolderIDIsSet = true;
}

bool Ezsigndocument_Response_allOf::fkiEzsignfolderIDIsSet() const
{
    return m_FkiEzsignfolderIDIsSet;
}

void Ezsigndocument_Response_allOf::unsetFkiEzsignfolderID()
{
    m_FkiEzsignfolderIDIsSet = false;
}
utility::string_t Ezsigndocument_Response_allOf::getDtEzsigndocumentDuedate() const
{
    return m_DtEzsigndocumentDuedate;
}

void Ezsigndocument_Response_allOf::setDtEzsigndocumentDuedate(const utility::string_t& value)
{
    m_DtEzsigndocumentDuedate = value;
    m_DtEzsigndocumentDuedateIsSet = true;
}

bool Ezsigndocument_Response_allOf::dtEzsigndocumentDuedateIsSet() const
{
    return m_DtEzsigndocumentDuedateIsSet;
}

void Ezsigndocument_Response_allOf::unsetDtEzsigndocumentDuedate()
{
    m_DtEzsigndocumentDuedateIsSet = false;
}
int32_t Ezsigndocument_Response_allOf::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Ezsigndocument_Response_allOf::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Ezsigndocument_Response_allOf::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Ezsigndocument_Response_allOf::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t Ezsigndocument_Response_allOf::getSEzsigndocumentName() const
{
    return m_SEzsigndocumentName;
}

void Ezsigndocument_Response_allOf::setSEzsigndocumentName(const utility::string_t& value)
{
    m_SEzsigndocumentName = value;
    m_SEzsigndocumentNameIsSet = true;
}

bool Ezsigndocument_Response_allOf::sEzsigndocumentNameIsSet() const
{
    return m_SEzsigndocumentNameIsSet;
}

void Ezsigndocument_Response_allOf::unsetSEzsigndocumentName()
{
    m_SEzsigndocumentNameIsSet = false;
}
int32_t Ezsigndocument_Response_allOf::getPkiEzsigndocumentID() const
{
    return m_PkiEzsigndocumentID;
}

void Ezsigndocument_Response_allOf::setPkiEzsigndocumentID(int32_t value)
{
    m_PkiEzsigndocumentID = value;
    m_PkiEzsigndocumentIDIsSet = true;
}

bool Ezsigndocument_Response_allOf::pkiEzsigndocumentIDIsSet() const
{
    return m_PkiEzsigndocumentIDIsSet;
}

void Ezsigndocument_Response_allOf::unsetPkiEzsigndocumentID()
{
    m_PkiEzsigndocumentIDIsSet = false;
}
std::shared_ptr<Field_eEzsigndocumentStep> Ezsigndocument_Response_allOf::getEEzsigndocumentStep() const
{
    return m_EEzsigndocumentStep;
}

void Ezsigndocument_Response_allOf::setEEzsigndocumentStep(const std::shared_ptr<Field_eEzsigndocumentStep>& value)
{
    m_EEzsigndocumentStep = value;
    m_EEzsigndocumentStepIsSet = true;
}

bool Ezsigndocument_Response_allOf::eEzsigndocumentStepIsSet() const
{
    return m_EEzsigndocumentStepIsSet;
}

void Ezsigndocument_Response_allOf::unsetEEzsigndocumentStep()
{
    m_EEzsigndocumentStepIsSet = false;
}
utility::string_t Ezsigndocument_Response_allOf::getDtEzsigndocumentFirstsend() const
{
    return m_DtEzsigndocumentFirstsend;
}

void Ezsigndocument_Response_allOf::setDtEzsigndocumentFirstsend(const utility::string_t& value)
{
    m_DtEzsigndocumentFirstsend = value;
    m_DtEzsigndocumentFirstsendIsSet = true;
}

bool Ezsigndocument_Response_allOf::dtEzsigndocumentFirstsendIsSet() const
{
    return m_DtEzsigndocumentFirstsendIsSet;
}

void Ezsigndocument_Response_allOf::unsetDtEzsigndocumentFirstsend()
{
    m_DtEzsigndocumentFirstsendIsSet = false;
}
utility::string_t Ezsigndocument_Response_allOf::getDtEzsigndocumentLastsend() const
{
    return m_DtEzsigndocumentLastsend;
}

void Ezsigndocument_Response_allOf::setDtEzsigndocumentLastsend(const utility::string_t& value)
{
    m_DtEzsigndocumentLastsend = value;
    m_DtEzsigndocumentLastsendIsSet = true;
}

bool Ezsigndocument_Response_allOf::dtEzsigndocumentLastsendIsSet() const
{
    return m_DtEzsigndocumentLastsendIsSet;
}

void Ezsigndocument_Response_allOf::unsetDtEzsigndocumentLastsend()
{
    m_DtEzsigndocumentLastsendIsSet = false;
}
int32_t Ezsigndocument_Response_allOf::getIEzsigndocumentOrder() const
{
    return m_IEzsigndocumentOrder;
}

void Ezsigndocument_Response_allOf::setIEzsigndocumentOrder(int32_t value)
{
    m_IEzsigndocumentOrder = value;
    m_IEzsigndocumentOrderIsSet = true;
}

bool Ezsigndocument_Response_allOf::iEzsigndocumentOrderIsSet() const
{
    return m_IEzsigndocumentOrderIsSet;
}

void Ezsigndocument_Response_allOf::unsetIEzsigndocumentOrder()
{
    m_IEzsigndocumentOrderIsSet = false;
}
int32_t Ezsigndocument_Response_allOf::getIEzsigndocumentPagetotal() const
{
    return m_IEzsigndocumentPagetotal;
}

void Ezsigndocument_Response_allOf::setIEzsigndocumentPagetotal(int32_t value)
{
    m_IEzsigndocumentPagetotal = value;
    m_IEzsigndocumentPagetotalIsSet = true;
}

bool Ezsigndocument_Response_allOf::iEzsigndocumentPagetotalIsSet() const
{
    return m_IEzsigndocumentPagetotalIsSet;
}

void Ezsigndocument_Response_allOf::unsetIEzsigndocumentPagetotal()
{
    m_IEzsigndocumentPagetotalIsSet = false;
}
int32_t Ezsigndocument_Response_allOf::getIEzsigndocumentSignaturesigned() const
{
    return m_IEzsigndocumentSignaturesigned;
}

void Ezsigndocument_Response_allOf::setIEzsigndocumentSignaturesigned(int32_t value)
{
    m_IEzsigndocumentSignaturesigned = value;
    m_IEzsigndocumentSignaturesignedIsSet = true;
}

bool Ezsigndocument_Response_allOf::iEzsigndocumentSignaturesignedIsSet() const
{
    return m_IEzsigndocumentSignaturesignedIsSet;
}

void Ezsigndocument_Response_allOf::unsetIEzsigndocumentSignaturesigned()
{
    m_IEzsigndocumentSignaturesignedIsSet = false;
}
int32_t Ezsigndocument_Response_allOf::getIEzsigndocumentSignaturetotal() const
{
    return m_IEzsigndocumentSignaturetotal;
}

void Ezsigndocument_Response_allOf::setIEzsigndocumentSignaturetotal(int32_t value)
{
    m_IEzsigndocumentSignaturetotal = value;
    m_IEzsigndocumentSignaturetotalIsSet = true;
}

bool Ezsigndocument_Response_allOf::iEzsigndocumentSignaturetotalIsSet() const
{
    return m_IEzsigndocumentSignaturetotalIsSet;
}

void Ezsigndocument_Response_allOf::unsetIEzsigndocumentSignaturetotal()
{
    m_IEzsigndocumentSignaturetotalIsSet = false;
}
utility::string_t Ezsigndocument_Response_allOf::getSEzsigndocumentMD5initial() const
{
    return m_SEzsigndocumentMD5initial;
}

void Ezsigndocument_Response_allOf::setSEzsigndocumentMD5initial(const utility::string_t& value)
{
    m_SEzsigndocumentMD5initial = value;
    m_SEzsigndocumentMD5initialIsSet = true;
}

bool Ezsigndocument_Response_allOf::sEzsigndocumentMD5initialIsSet() const
{
    return m_SEzsigndocumentMD5initialIsSet;
}

void Ezsigndocument_Response_allOf::unsetSEzsigndocumentMD5initial()
{
    m_SEzsigndocumentMD5initialIsSet = false;
}
utility::string_t Ezsigndocument_Response_allOf::getSEzsigndocumentMD5signed() const
{
    return m_SEzsigndocumentMD5signed;
}

void Ezsigndocument_Response_allOf::setSEzsigndocumentMD5signed(const utility::string_t& value)
{
    m_SEzsigndocumentMD5signed = value;
    m_SEzsigndocumentMD5signedIsSet = true;
}

bool Ezsigndocument_Response_allOf::sEzsigndocumentMD5signedIsSet() const
{
    return m_SEzsigndocumentMD5signedIsSet;
}

void Ezsigndocument_Response_allOf::unsetSEzsigndocumentMD5signed()
{
    m_SEzsigndocumentMD5signedIsSet = false;
}
std::shared_ptr<Common_Audit> Ezsigndocument_Response_allOf::getObjAudit() const
{
    return m_ObjAudit;
}

void Ezsigndocument_Response_allOf::setObjAudit(const std::shared_ptr<Common_Audit>& value)
{
    m_ObjAudit = value;
    m_ObjAuditIsSet = true;
}

bool Ezsigndocument_Response_allOf::objAuditIsSet() const
{
    return m_ObjAuditIsSet;
}

void Ezsigndocument_Response_allOf::unsetObjAudit()
{
    m_ObjAuditIsSet = false;
}
}
}
}
}


