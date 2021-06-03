/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsignsignatureType.h
 *
 * The type of signature.  1. **Acknowledgement** is for an acknowledgment of receipt. 2. **City** is to request the city where the document is signed. 2. **Handwritten** is for a handwritten kind of signature where users needs to \&quot;draw\&quot; their signature on screen. 3. **Initials** is a simple \&quot;click to add initials\&quot; block. 4. **Name** is a simple \&quot;Click to sign\&quot; block. This is the most common block of signature.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsignsignatureType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsignsignatureType_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Field_eEzsignsignatureType
    : public ModelBase
{
public:
    Field_eEzsignsignatureType();
    virtual ~Field_eEzsignsignatureType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eField_eEzsignsignatureType
    {
        Field_eEzsignsignatureType_ACKNOWLEDGEMENT,
        Field_eEzsignsignatureType_CITY,
        Field_eEzsignsignatureType_HANDWRITTEN,
        Field_eEzsignsignatureType_INITIALS,
        Field_eEzsignsignatureType_NAME,
    };

    eField_eEzsignsignatureType getValue() const;
    void setValue(eField_eEzsignsignatureType const value);

    protected:
        eField_eEzsignsignatureType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsignsignatureType_H_ */