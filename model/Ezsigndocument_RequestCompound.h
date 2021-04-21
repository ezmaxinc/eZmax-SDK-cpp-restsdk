/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_RequestCompound.h
 *
 * An Ezsigndocument Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_RequestCompound_H_


#include "../ModelBase.h"

#include "Ezsigndocument_Request.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsigndocument Object and children to create a complete structure
/// </summary>
class  Ezsigndocument_RequestCompound
    : public ModelBase
{
public:
    Ezsigndocument_RequestCompound();
    virtual ~Ezsigndocument_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsigndocument_RequestCompound members

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
    utility::string_t m_SEzsigndocumentName;
    bool m_SEzsigndocumentNameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_RequestCompound_H_ */
