/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.38
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzsignfolderStep.h
 *
 * The signature step of the Ezsignfolder.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsignfolderStep_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsignfolderStep_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Field_eEzsignfolderStep
    : public ModelBase
{
public:
    Field_eEzsignfolderStep();
    virtual ~Field_eEzsignfolderStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eField_eEzsignfolderStep
    {
        Field_eEzsignfolderStep_UNSENT,
        Field_eEzsignfolderStep_SENT,
        Field_eEzsignfolderStep_PARTIALLYSIGNED,
        Field_eEzsignfolderStep_EXPIRED,
        Field_eEzsignfolderStep_SIGNED,
        Field_eEzsignfolderStep_COMPLETED,
        Field_eEzsignfolderStep_ARCHIVED,
    };

    eField_eEzsignfolderStep getValue() const;
    void setValue(eField_eEzsignfolderStep const value);

    protected:
        eField_eEzsignfolderStep m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsignfolderStep_H_ */
