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
 * Field_eEzsigndocumentStep.h
 *
 * The signature step of the Ezsigndocument.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsigndocumentStep_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsigndocumentStep_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Field_eEzsigndocumentStep
    : public ModelBase
{
public:
    Field_eEzsigndocumentStep();
    virtual ~Field_eEzsigndocumentStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eField_eEzsigndocumentStep
    {
        Field_eEzsigndocumentStep_UNSENT,
        Field_eEzsigndocumentStep_UNSIGNED,
        Field_eEzsigndocumentStep_PARTIALLYSIGNED,
        Field_eEzsigndocumentStep_COMPLETED,
    };

    eField_eEzsigndocumentStep getValue() const;
    void setValue(eField_eEzsigndocumentStep const value);

    protected:
        eField_eEzsigndocumentStep m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eEzsigndocumentStep_H_ */
