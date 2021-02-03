/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsigndocument_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_Response::Ezsigndocument_Response()
{
    m_FkiEzsignfolderID = 0;
    m_FkiEzsignfolderIDIsSet = false;
    m_DtEzsigndocumentDuedate = utility::conversions::to_string_t("");
    m_DtEzsigndocumentDuedateIsSet = false;
    m_FkiLanguageID = 0;
    m_FkiLanguageIDIsSet = false;
    m_SEzsigndocumentFilename = utility::conversions::to_string_t("");
    m_SEzsigndocumentFilenameIsSet = false;
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

Ezsigndocument_Response::~Ezsigndocument_Response()
{
}

void Ezsigndocument_Response::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_Response::toJson() const
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
    if(m_SEzsigndocumentFilenameIsSet)
    {
        val[utility::conversions::to_string_t("sEzsigndocumentFilename")] = ModelBase::toJson(m_SEzsigndocumentFilename);
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

bool Ezsigndocument_Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sEzsigndocumentFilename")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sEzsigndocumentFilename"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sEzsigndocumentFilename;
            ok &= ModelBase::fromJson(fieldValue, refVal_sEzsigndocumentFilename);
            setSEzsigndocumentFilename(refVal_sEzsigndocumentFilename);
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

void Ezsigndocument_Response::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SEzsigndocumentFilenameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sEzsigndocumentFilename"), m_SEzsigndocumentFilename));
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

bool Ezsigndocument_Response::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("sEzsigndocumentFilename")))
    {
        utility::string_t refVal_sEzsigndocumentFilename;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sEzsigndocumentFilename")), refVal_sEzsigndocumentFilename );
        setSEzsigndocumentFilename(refVal_sEzsigndocumentFilename);
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

int32_t Ezsigndocument_Response::getFkiEzsignfolderID() const
{
    return m_FkiEzsignfolderID;
}

void Ezsigndocument_Response::setFkiEzsignfolderID(int32_t value)
{
    m_FkiEzsignfolderID = value;
    m_FkiEzsignfolderIDIsSet = true;
}

bool Ezsigndocument_Response::fkiEzsignfolderIDIsSet() const
{
    return m_FkiEzsignfolderIDIsSet;
}

void Ezsigndocument_Response::unsetFkiEzsignfolderID()
{
    m_FkiEzsignfolderIDIsSet = false;
}
utility::string_t Ezsigndocument_Response::getDtEzsigndocumentDuedate() const
{
    return m_DtEzsigndocumentDuedate;
}

void Ezsigndocument_Response::setDtEzsigndocumentDuedate(const utility::string_t& value)
{
    m_DtEzsigndocumentDuedate = value;
    m_DtEzsigndocumentDuedateIsSet = true;
}

bool Ezsigndocument_Response::dtEzsigndocumentDuedateIsSet() const
{
    return m_DtEzsigndocumentDuedateIsSet;
}

void Ezsigndocument_Response::unsetDtEzsigndocumentDuedate()
{
    m_DtEzsigndocumentDuedateIsSet = false;
}
int32_t Ezsigndocument_Response::getFkiLanguageID() const
{
    return m_FkiLanguageID;
}

void Ezsigndocument_Response::setFkiLanguageID(int32_t value)
{
    m_FkiLanguageID = value;
    m_FkiLanguageIDIsSet = true;
}

bool Ezsigndocument_Response::fkiLanguageIDIsSet() const
{
    return m_FkiLanguageIDIsSet;
}

void Ezsigndocument_Response::unsetFkiLanguageID()
{
    m_FkiLanguageIDIsSet = false;
}
utility::string_t Ezsigndocument_Response::getSEzsigndocumentFilename() const
{
    return m_SEzsigndocumentFilename;
}

void Ezsigndocument_Response::setSEzsigndocumentFilename(const utility::string_t& value)
{
    m_SEzsigndocumentFilename = value;
    m_SEzsigndocumentFilenameIsSet = true;
}

bool Ezsigndocument_Response::sEzsigndocumentFilenameIsSet() const
{
    return m_SEzsigndocumentFilenameIsSet;
}

void Ezsigndocument_Response::unsetSEzsigndocumentFilename()
{
    m_SEzsigndocumentFilenameIsSet = false;
}
utility::string_t Ezsigndocument_Response::getSEzsigndocumentName() const
{
    return m_SEzsigndocumentName;
}

void Ezsigndocument_Response::setSEzsigndocumentName(const utility::string_t& value)
{
    m_SEzsigndocumentName = value;
    m_SEzsigndocumentNameIsSet = true;
}

bool Ezsigndocument_Response::sEzsigndocumentNameIsSet() const
{
    return m_SEzsigndocumentNameIsSet;
}

void Ezsigndocument_Response::unsetSEzsigndocumentName()
{
    m_SEzsigndocumentNameIsSet = false;
}
int32_t Ezsigndocument_Response::getPkiEzsigndocumentID() const
{
    return m_PkiEzsigndocumentID;
}

void Ezsigndocument_Response::setPkiEzsigndocumentID(int32_t value)
{
    m_PkiEzsigndocumentID = value;
    m_PkiEzsigndocumentIDIsSet = true;
}

bool Ezsigndocument_Response::pkiEzsigndocumentIDIsSet() const
{
    return m_PkiEzsigndocumentIDIsSet;
}

void Ezsigndocument_Response::unsetPkiEzsigndocumentID()
{
    m_PkiEzsigndocumentIDIsSet = false;
}
std::shared_ptr<Field_eEzsigndocumentStep> Ezsigndocument_Response::getEEzsigndocumentStep() const
{
    return m_EEzsigndocumentStep;
}

void Ezsigndocument_Response::setEEzsigndocumentStep(const std::shared_ptr<Field_eEzsigndocumentStep>& value)
{
    m_EEzsigndocumentStep = value;
    m_EEzsigndocumentStepIsSet = true;
}

bool Ezsigndocument_Response::eEzsigndocumentStepIsSet() const
{
    return m_EEzsigndocumentStepIsSet;
}

void Ezsigndocument_Response::unsetEEzsigndocumentStep()
{
    m_EEzsigndocumentStepIsSet = false;
}
utility::string_t Ezsigndocument_Response::getDtEzsigndocumentFirstsend() const
{
    return m_DtEzsigndocumentFirstsend;
}

void Ezsigndocument_Response::setDtEzsigndocumentFirstsend(const utility::string_t& value)
{
    m_DtEzsigndocumentFirstsend = value;
    m_DtEzsigndocumentFirstsendIsSet = true;
}

bool Ezsigndocument_Response::dtEzsigndocumentFirstsendIsSet() const
{
    return m_DtEzsigndocumentFirstsendIsSet;
}

void Ezsigndocument_Response::unsetDtEzsigndocumentFirstsend()
{
    m_DtEzsigndocumentFirstsendIsSet = false;
}
utility::string_t Ezsigndocument_Response::getDtEzsigndocumentLastsend() const
{
    return m_DtEzsigndocumentLastsend;
}

void Ezsigndocument_Response::setDtEzsigndocumentLastsend(const utility::string_t& value)
{
    m_DtEzsigndocumentLastsend = value;
    m_DtEzsigndocumentLastsendIsSet = true;
}

bool Ezsigndocument_Response::dtEzsigndocumentLastsendIsSet() const
{
    return m_DtEzsigndocumentLastsendIsSet;
}

void Ezsigndocument_Response::unsetDtEzsigndocumentLastsend()
{
    m_DtEzsigndocumentLastsendIsSet = false;
}
int32_t Ezsigndocument_Response::getIEzsigndocumentOrder() const
{
    return m_IEzsigndocumentOrder;
}

void Ezsigndocument_Response::setIEzsigndocumentOrder(int32_t value)
{
    m_IEzsigndocumentOrder = value;
    m_IEzsigndocumentOrderIsSet = true;
}

bool Ezsigndocument_Response::iEzsigndocumentOrderIsSet() const
{
    return m_IEzsigndocumentOrderIsSet;
}

void Ezsigndocument_Response::unsetIEzsigndocumentOrder()
{
    m_IEzsigndocumentOrderIsSet = false;
}
int32_t Ezsigndocument_Response::getIEzsigndocumentPagetotal() const
{
    return m_IEzsigndocumentPagetotal;
}

void Ezsigndocument_Response::setIEzsigndocumentPagetotal(int32_t value)
{
    m_IEzsigndocumentPagetotal = value;
    m_IEzsigndocumentPagetotalIsSet = true;
}

bool Ezsigndocument_Response::iEzsigndocumentPagetotalIsSet() const
{
    return m_IEzsigndocumentPagetotalIsSet;
}

void Ezsigndocument_Response::unsetIEzsigndocumentPagetotal()
{
    m_IEzsigndocumentPagetotalIsSet = false;
}
int32_t Ezsigndocument_Response::getIEzsigndocumentSignaturesigned() const
{
    return m_IEzsigndocumentSignaturesigned;
}

void Ezsigndocument_Response::setIEzsigndocumentSignaturesigned(int32_t value)
{
    m_IEzsigndocumentSignaturesigned = value;
    m_IEzsigndocumentSignaturesignedIsSet = true;
}

bool Ezsigndocument_Response::iEzsigndocumentSignaturesignedIsSet() const
{
    return m_IEzsigndocumentSignaturesignedIsSet;
}

void Ezsigndocument_Response::unsetIEzsigndocumentSignaturesigned()
{
    m_IEzsigndocumentSignaturesignedIsSet = false;
}
int32_t Ezsigndocument_Response::getIEzsigndocumentSignaturetotal() const
{
    return m_IEzsigndocumentSignaturetotal;
}

void Ezsigndocument_Response::setIEzsigndocumentSignaturetotal(int32_t value)
{
    m_IEzsigndocumentSignaturetotal = value;
    m_IEzsigndocumentSignaturetotalIsSet = true;
}

bool Ezsigndocument_Response::iEzsigndocumentSignaturetotalIsSet() const
{
    return m_IEzsigndocumentSignaturetotalIsSet;
}

void Ezsigndocument_Response::unsetIEzsigndocumentSignaturetotal()
{
    m_IEzsigndocumentSignaturetotalIsSet = false;
}
utility::string_t Ezsigndocument_Response::getSEzsigndocumentMD5initial() const
{
    return m_SEzsigndocumentMD5initial;
}

void Ezsigndocument_Response::setSEzsigndocumentMD5initial(const utility::string_t& value)
{
    m_SEzsigndocumentMD5initial = value;
    m_SEzsigndocumentMD5initialIsSet = true;
}

bool Ezsigndocument_Response::sEzsigndocumentMD5initialIsSet() const
{
    return m_SEzsigndocumentMD5initialIsSet;
}

void Ezsigndocument_Response::unsetSEzsigndocumentMD5initial()
{
    m_SEzsigndocumentMD5initialIsSet = false;
}
utility::string_t Ezsigndocument_Response::getSEzsigndocumentMD5signed() const
{
    return m_SEzsigndocumentMD5signed;
}

void Ezsigndocument_Response::setSEzsigndocumentMD5signed(const utility::string_t& value)
{
    m_SEzsigndocumentMD5signed = value;
    m_SEzsigndocumentMD5signedIsSet = true;
}

bool Ezsigndocument_Response::sEzsigndocumentMD5signedIsSet() const
{
    return m_SEzsigndocumentMD5signedIsSet;
}

void Ezsigndocument_Response::unsetSEzsigndocumentMD5signed()
{
    m_SEzsigndocumentMD5signedIsSet = false;
}
std::shared_ptr<Common_Audit> Ezsigndocument_Response::getObjAudit() const
{
    return m_ObjAudit;
}

void Ezsigndocument_Response::setObjAudit(const std::shared_ptr<Common_Audit>& value)
{
    m_ObjAudit = value;
    m_ObjAuditIsSet = true;
}

bool Ezsigndocument_Response::objAuditIsSet() const
{
    return m_ObjAuditIsSet;
}

void Ezsigndocument_Response::unsetObjAudit()
{
    m_ObjAuditIsSet = false;
}
}
}
}
}


