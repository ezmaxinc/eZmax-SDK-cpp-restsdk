/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.43
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfoldersignerassociation_RequestCompound.h
 *
 * An Ezsignfoldersignerassociation Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_RequestCompound_H_


#include "../ModelBase.h"

#include "Ezsignsigner_RequestCompound.h"
#include "Ezsignfoldersignerassociation_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsignfoldersignerassociation Object and children to create a complete structure
/// </summary>
class  Ezsignfoldersignerassociation_RequestCompound
    : public ModelBase
{
public:
    Ezsignfoldersignerassociation_RequestCompound();
    virtual ~Ezsignfoldersignerassociation_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfoldersignerassociation_RequestCompound members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignsigner_RequestCompound> getObjEzsignsigner() const;
    bool objEzsignsignerIsSet() const;
    void unsetObjEzsignsigner();

    void setObjEzsignsigner(const std::shared_ptr<Ezsignsigner_RequestCompound>& value);

    /// <summary>
    /// A reference to a valid User.  This is only used if the signatory will be a user from the system.
    /// </summary>
    int32_t getFkiUserID() const;
    bool fkiUserIDIsSet() const;
    void unsetFkiUserID();

    void setFkiUserID(int32_t value);

    /// <summary>
    /// A reference to a valid Ezsignfolder.  That value is returned after a successful Ezsignfolder Creation.
    /// </summary>
    int32_t getFkiEzsignfolderID() const;
    bool fkiEzsignfolderIDIsSet() const;
    void unsetFkiEzsignfolderID();

    void setFkiEzsignfolderID(int32_t value);


protected:
    std::shared_ptr<Ezsignsigner_RequestCompound> m_ObjEzsignsigner;
    bool m_ObjEzsignsignerIsSet;
    int32_t m_FkiUserID;
    bool m_FkiUserIDIsSet;
    int32_t m_FkiEzsignfolderID;
    bool m_FkiEzsignfolderIDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_RequestCompound_H_ */
