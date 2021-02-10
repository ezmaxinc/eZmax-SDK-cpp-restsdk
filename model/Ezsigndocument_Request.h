/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_Request.h
 *
 * An Ezsigndocument Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsigndocument Object
/// </summary>
class  Ezsigndocument_Request
    : public ModelBase
{
public:
    Ezsigndocument_Request();
    virtual ~Ezsigndocument_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsigndocument_Request members

    /// <summary>
    /// Indicates where to look for the document binary content.
    /// </summary>
    utility::string_t getEEzsigndocumentSource() const;
    bool eEzsigndocumentSourceIsSet() const;
    void unsetEEzsigndocumentSource();

    void setEEzsigndocumentSource(const utility::string_t& value);

    /// <summary>
    /// Indicates the format of the document.
    /// </summary>
    utility::string_t getEEzsigndocumentFormat() const;
    bool eEzsigndocumentFormatIsSet() const;
    void unsetEEzsigndocumentFormat();

    void setEEzsigndocumentFormat(const utility::string_t& value);

    /// <summary>
    /// The Base64 encoded binary content of the document.  This field is Required when eEzsigndocumentSource &#x3D; Base64.
    /// </summary>
    utility::string_t getSEzsigndocumentBase64() const;
    bool sEzsigndocumentBase64IsSet() const;
    void unsetSEzsigndocumentBase64();

    void setSEzsigndocumentBase64(const utility::string_t& value);

    /// <summary>
    /// A reference to a valid Ezsignfolder.  That value is returned after a successful Ezsignfolder Creation.
    /// </summary>
    int32_t getFkiEzsignfolderID() const;
    bool fkiEzsignfolderIDIsSet() const;
    void unsetFkiEzsignfolderID();

    void setFkiEzsignfolderID(int32_t value);

    /// <summary>
    /// Represent a Date Time. The timezone is the one configured in the User&#39;s profile.
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


protected:
    utility::string_t m_EEzsigndocumentSource;
    bool m_EEzsigndocumentSourceIsSet;
    utility::string_t m_EEzsigndocumentFormat;
    bool m_EEzsigndocumentFormatIsSet;
    utility::string_t m_SEzsigndocumentBase64;
    bool m_SEzsigndocumentBase64IsSet;
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
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_Request_H_ */
