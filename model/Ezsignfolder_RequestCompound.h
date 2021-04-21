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
 * Ezsignfolder_RequestCompound.h
 *
 * An Ezsignfolder Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfolder_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfolder_RequestCompound_H_


#include "../ModelBase.h"

#include "Field_eEzsignfolderSendreminderfrequency.h"
#include <cpprest/details/basic_types.h>
#include "Ezsignfolder_Request.h"
#include "Ezsignfoldersignerassociation_Request.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsignfolder Object and children to create a complete structure
/// </summary>
class  Ezsignfolder_RequestCompound
    : public ModelBase
{
public:
    Ezsignfolder_RequestCompound();
    virtual ~Ezsignfolder_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfolder_RequestCompound members

    /// <summary>
    /// An array of signers that will be invited to sign the Ezsigndocuments
    /// </summary>
    std::vector<std::shared_ptr<Ezsignfoldersignerassociation_Request>>& getAEzsignfoldersignerassociation();
    bool aEzsignfoldersignerassociationIsSet() const;
    void unsetA_Ezsignfoldersignerassociation();

    void setAEzsignfoldersignerassociation(const std::vector<std::shared_ptr<Ezsignfoldersignerassociation_Request>>& value);

    /// <summary>
    /// The unique ID of the Ezsignfoldertype.    This value can be queried by the API and is also visible in the admin interface.    There are two types of Ezsignfoldertype. **User** and **Shared**. **User** can only be seen by the user who created the folder or its assistants. Access to **Shared** folders are configurable for access and email delivery. You should typically choose a **Shared** type here.
    /// </summary>
    int32_t getFkiEzsignfoldertypeID() const;
    bool fkiEzsignfoldertypeIDIsSet() const;
    void unsetFkiEzsignfoldertypeID();

    void setFkiEzsignfoldertypeID(int32_t value);

    /// <summary>
    /// The unique ID of the Ezsigntsarequirement.  Determine if a Time Stamping Authority should add a timestamp on each of the signature. Valid values:  |Value|Description| |-|-| |1|No. TSA Timestamping will requested. This will make all signatures a lot faster since no round-trip to the TSA server will be required. Timestamping will be made using eZsign server&#39;s time.| |2|Best effort. Timestamping from a Time Stamping Authority will be requested but is not mandatory. In the very improbable case it cannot be completed, the timestamping will be made using eZsign server&#39;s time. **Additional fee applies**| |3|Mandatory. Timestamping from a Time Stamping Authority will be requested and is mandatory. In the very improbable case it cannot be completed, the signature will fail and the user will be asked to retry. **Additional fee applies**|
    /// </summary>
    int32_t getFkiEzsigntsarequirementID() const;
    bool fkiEzsigntsarequirementIDIsSet() const;
    void unsetFkiEzsigntsarequirementID();

    void setFkiEzsigntsarequirementID(int32_t value);

    /// <summary>
    /// The description of the Ezsign Folder
    /// </summary>
    utility::string_t getSEzsignfolderDescription() const;
    bool sEzsignfolderDescriptionIsSet() const;
    void unsetSEzsignfolderDescription();

    void setSEzsignfolderDescription(const utility::string_t& value);

    /// <summary>
    /// Somes extra notes about the eZsign Folder
    /// </summary>
    utility::string_t getTEzsignfolderNote() const;
    bool tEzsignfolderNoteIsSet() const;
    void unsetTEzsignfolderNote();

    void setTEzsignfolderNote(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Field_eEzsignfolderSendreminderfrequency> getEEzsignfolderSendreminderfrequency() const;
    bool eEzsignfolderSendreminderfrequencyIsSet() const;
    void unsetEEzsignfolderSendreminderfrequency();

    void setEEzsignfolderSendreminderfrequency(const std::shared_ptr<Field_eEzsignfolderSendreminderfrequency>& value);


protected:
    std::vector<std::shared_ptr<Ezsignfoldersignerassociation_Request>> m_A_Ezsignfoldersignerassociation;
    bool m_A_EzsignfoldersignerassociationIsSet;
    int32_t m_FkiEzsignfoldertypeID;
    bool m_FkiEzsignfoldertypeIDIsSet;
    int32_t m_FkiEzsigntsarequirementID;
    bool m_FkiEzsigntsarequirementIDIsSet;
    utility::string_t m_SEzsignfolderDescription;
    bool m_SEzsignfolderDescriptionIsSet;
    utility::string_t m_TEzsignfolderNote;
    bool m_TEzsignfolderNoteIsSet;
    std::shared_ptr<Field_eEzsignfolderSendreminderfrequency> m_EEzsignfolderSendreminderfrequency;
    bool m_EEzsignfolderSendreminderfrequencyIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfolder_RequestCompound_H_ */
