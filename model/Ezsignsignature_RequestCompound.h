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

/*
 * Ezsignsignature_RequestCompound.h
 *
 * An Ezsignsignature Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_RequestCompound_H_


#include "../ModelBase.h"

#include "Ezsignsignature_Request.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsignsignature Object and children to create a complete structure
/// </summary>
class  Ezsignsignature_RequestCompound
    : public ModelBase
{
public:
    Ezsignsignature_RequestCompound();
    virtual ~Ezsignsignature_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignsignature_RequestCompound members

    /// <summary>
    /// A reference to a valid Ezsignfoldersignerassociation.  That value is returned after a successful Ezsignfoldersignerassociation Creation. 
    /// </summary>
    int32_t getFkiEzsignfoldersignerassociationID() const;
    bool fkiEzsignfoldersignerassociationIDIsSet() const;
    void unsetFkiEzsignfoldersignerassociationID();

    void setFkiEzsignfoldersignerassociationID(int32_t value);

    /// <summary>
    /// The page number in the document where to apply the signature
    /// </summary>
    int32_t getIEzsignpagePagenumber() const;
    bool iEzsignpagePagenumberIsSet() const;
    void unsetIEzsignpagePagenumber();

    void setIEzsignpagePagenumber(int32_t value);

    /// <summary>
    /// The X coordinate (Horizontal) where to put the signature block on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the signature block 2 inches from the left border of the page, you would use \&quot;200\&quot; for the X coordinate.
    /// </summary>
    int32_t getIEzsignsignatureX() const;
    bool iEzsignsignatureXIsSet() const;
    void unsetIEzsignsignatureX();

    void setIEzsignsignatureX(int32_t value);

    /// <summary>
    /// The Y coordinate (Vertical) where to put the signature block on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the signature block 3 inches from the top border of the page, you would use \&quot;300\&quot; for the Y coordinate.
    /// </summary>
    int32_t getIEzsignsignatureY() const;
    bool iEzsignsignatureYIsSet() const;
    void unsetIEzsignsignatureY();

    void setIEzsignsignatureY(int32_t value);

    /// <summary>
    /// The step when the Ezsignsigner will be invited to sign.  For example, if you say iEzsignsignatureStep&#x3D;2, that block of signature will be available for signature only after ALL the signatures in step 1 are completed.
    /// </summary>
    int32_t getIEzsignsignatureStep() const;
    bool iEzsignsignatureStepIsSet() const;
    void unsetIEzsignsignatureStep();

    void setIEzsignsignatureStep(int32_t value);

    /// <summary>
    /// The type of signature required.  1. **Acknowledgement** is for an acknowledgment of receipt. 2. **Handwritten** is for a handwritten kind of signature where users needs to \&quot;draw\&quot; their signature on screen. 3. **Initials** is a simple \&quot;click to add initials\&quot; block. 4. **Name** is a simple \&quot;Click to sign\&quot; block. This is the most common block of signature.
    /// </summary>
    utility::string_t getEEzsignsignatureType() const;
    bool eEzsignsignatureTypeIsSet() const;
    void unsetEEzsignsignatureType();

    void setEEzsignsignatureType(const utility::string_t& value);

    /// <summary>
    /// A reference to a valid Ezsigndocument.  That value is returned after a successful Ezsigndocumentation Creation.
    /// </summary>
    int32_t getFkiEzsigndocumentID() const;
    bool fkiEzsigndocumentIDIsSet() const;
    void unsetFkiEzsigndocumentID();

    void setFkiEzsigndocumentID(int32_t value);


protected:
    int32_t m_FkiEzsignfoldersignerassociationID;
    bool m_FkiEzsignfoldersignerassociationIDIsSet;
    int32_t m_IEzsignpagePagenumber;
    bool m_IEzsignpagePagenumberIsSet;
    int32_t m_IEzsignsignatureX;
    bool m_IEzsignsignatureXIsSet;
    int32_t m_IEzsignsignatureY;
    bool m_IEzsignsignatureYIsSet;
    int32_t m_IEzsignsignatureStep;
    bool m_IEzsignsignatureStepIsSet;
    utility::string_t m_EEzsignsignatureType;
    bool m_EEzsignsignatureTypeIsSet;
    int32_t m_FkiEzsigndocumentID;
    bool m_FkiEzsigndocumentIDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_RequestCompound_H_ */
