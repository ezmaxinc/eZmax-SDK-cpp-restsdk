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

/*
 * Ezsigndocument_Response.h
 *
 * An Ezsigndocument Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_Response_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Ezsigndocument_Response_allOf.h"
#include "Field_eEzsigndocumentStep.h"
#include "Common_Audit.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsigndocument Object
/// </summary>
class  Ezsigndocument_Response
    : public ModelBase
{
public:
    Ezsigndocument_Response();
    virtual ~Ezsigndocument_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsigndocument_Response members

    /// <summary>
    /// The unique ID of the Ezsignfolder
    /// </summary>
    int32_t getFkiEzsignfolderID() const;
    bool fkiEzsignfolderIDIsSet() const;
    void unsetFkiEzsignfolderID();

    void setFkiEzsignfolderID(int32_t value);

    /// <summary>
    /// The maximum date and time at which the document can be signed.
    /// </summary>
    utility::string_t getDtEzsigndocumentDuedate() const;
    bool dtEzsigndocumentDuedateIsSet() const;
    void unsetDtEzsigndocumentDuedate();

    void setDtEzsigndocumentDuedate(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English|
    /// </summary>
    int32_t getFkiLanguageID() const;
    bool fkiLanguageIDIsSet() const;
    void unsetFkiLanguageID();

    void setFkiLanguageID(int32_t value);

    /// <summary>
    /// The actual file name that will be used when downloading or attaching to an email.
    /// </summary>
    utility::string_t getSEzsigndocumentFilename() const;
    bool sEzsigndocumentFilenameIsSet() const;
    void unsetSEzsigndocumentFilename();

    void setSEzsigndocumentFilename(const utility::string_t& value);

    /// <summary>
    /// The name of the document that will be presented to Ezsignfoldersignerassociations
    /// </summary>
    utility::string_t getSEzsigndocumentName() const;
    bool sEzsigndocumentNameIsSet() const;
    void unsetSEzsigndocumentName();

    void setSEzsigndocumentName(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Ezsigntemplate
    /// </summary>
    int32_t getPkiEzsigndocumentID() const;
    bool pkiEzsigndocumentIDIsSet() const;
    void unsetPkiEzsigndocumentID();

    void setPkiEzsigndocumentID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Field_eEzsigndocumentStep> getEEzsigndocumentStep() const;
    bool eEzsigndocumentStepIsSet() const;
    void unsetEEzsigndocumentStep();

    void setEEzsigndocumentStep(const std::shared_ptr<Field_eEzsigndocumentStep>& value);

    /// <summary>
    /// The date and time when the Ezsigndocument was first sent.
    /// </summary>
    utility::string_t getDtEzsigndocumentFirstsend() const;
    bool dtEzsigndocumentFirstsendIsSet() const;
    void unsetDtEzsigndocumentFirstsend();

    void setDtEzsigndocumentFirstsend(const utility::string_t& value);

    /// <summary>
    /// The date and time when the Ezsigndocument was sent the last time.
    /// </summary>
    utility::string_t getDtEzsigndocumentLastsend() const;
    bool dtEzsigndocumentLastsendIsSet() const;
    void unsetDtEzsigndocumentLastsend();

    void setDtEzsigndocumentLastsend(const utility::string_t& value);

    /// <summary>
    /// The order in which the Ezsigndocument will be presented to the signatory in the Ezsignfolder.
    /// </summary>
    int32_t getIEzsigndocumentOrder() const;
    bool iEzsigndocumentOrderIsSet() const;
    void unsetIEzsigndocumentOrder();

    void setIEzsigndocumentOrder(int32_t value);

    /// <summary>
    /// The number of pages in the Ezsigndocument.
    /// </summary>
    int32_t getIEzsigndocumentPagetotal() const;
    bool iEzsigndocumentPagetotalIsSet() const;
    void unsetIEzsigndocumentPagetotal();

    void setIEzsigndocumentPagetotal(int32_t value);

    /// <summary>
    /// The number of signatures that were signed in the document.
    /// </summary>
    int32_t getIEzsigndocumentSignaturesigned() const;
    bool iEzsigndocumentSignaturesignedIsSet() const;
    void unsetIEzsigndocumentSignaturesigned();

    void setIEzsigndocumentSignaturesigned(int32_t value);

    /// <summary>
    /// The number of total signatures that were requested in the Ezsigndocument.
    /// </summary>
    int32_t getIEzsigndocumentSignaturetotal() const;
    bool iEzsigndocumentSignaturetotalIsSet() const;
    void unsetIEzsigndocumentSignaturetotal();

    void setIEzsigndocumentSignaturetotal(int32_t value);

    /// <summary>
    /// MD5 Hash of the initial PDF Document before signatures were applied to it.
    /// </summary>
    utility::string_t getSEzsigndocumentMD5initial() const;
    bool sEzsigndocumentMD5initialIsSet() const;
    void unsetSEzsigndocumentMD5initial();

    void setSEzsigndocumentMD5initial(const utility::string_t& value);

    /// <summary>
    /// MD5 Hash of the final PDF Document after all signatures were applied to it.
    /// </summary>
    utility::string_t getSEzsigndocumentMD5signed() const;
    bool sEzsigndocumentMD5signedIsSet() const;
    void unsetSEzsigndocumentMD5signed();

    void setSEzsigndocumentMD5signed(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Audit> getObjAudit() const;
    bool objAuditIsSet() const;
    void unsetObjAudit();

    void setObjAudit(const std::shared_ptr<Common_Audit>& value);


protected:
    int32_t m_FkiEzsignfolderID;
    bool m_FkiEzsignfolderIDIsSet;
    utility::string_t m_DtEzsigndocumentDuedate;
    bool m_DtEzsigndocumentDuedateIsSet;
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    utility::string_t m_SEzsigndocumentFilename;
    bool m_SEzsigndocumentFilenameIsSet;
    utility::string_t m_SEzsigndocumentName;
    bool m_SEzsigndocumentNameIsSet;
    int32_t m_PkiEzsigndocumentID;
    bool m_PkiEzsigndocumentIDIsSet;
    std::shared_ptr<Field_eEzsigndocumentStep> m_EEzsigndocumentStep;
    bool m_EEzsigndocumentStepIsSet;
    utility::string_t m_DtEzsigndocumentFirstsend;
    bool m_DtEzsigndocumentFirstsendIsSet;
    utility::string_t m_DtEzsigndocumentLastsend;
    bool m_DtEzsigndocumentLastsendIsSet;
    int32_t m_IEzsigndocumentOrder;
    bool m_IEzsigndocumentOrderIsSet;
    int32_t m_IEzsigndocumentPagetotal;
    bool m_IEzsigndocumentPagetotalIsSet;
    int32_t m_IEzsigndocumentSignaturesigned;
    bool m_IEzsigndocumentSignaturesignedIsSet;
    int32_t m_IEzsigndocumentSignaturetotal;
    bool m_IEzsigndocumentSignaturetotalIsSet;
    utility::string_t m_SEzsigndocumentMD5initial;
    bool m_SEzsigndocumentMD5initialIsSet;
    utility::string_t m_SEzsigndocumentMD5signed;
    bool m_SEzsigndocumentMD5signedIsSet;
    std::shared_ptr<Common_Audit> m_ObjAudit;
    bool m_ObjAuditIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_Response_H_ */
