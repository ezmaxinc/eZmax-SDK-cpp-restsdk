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

/*
 * Ezsignsignature_Request.h
 *
 * An Ezsignsignature Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsignsignature Object
/// </summary>
class  Ezsignsignature_Request
    : public ModelBase
{
public:
    Ezsignsignature_Request();
    virtual ~Ezsignsignature_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignsignature_Request members

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

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_Request_H_ */
