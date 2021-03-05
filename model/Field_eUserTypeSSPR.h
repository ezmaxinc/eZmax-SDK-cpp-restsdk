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
 * Field_eUserTypeSSPR.h
 *
 * The user type of the User for SSPR
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eUserTypeSSPR_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eUserTypeSSPR_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Field_eUserTypeSSPR
    : public ModelBase
{
public:
    Field_eUserTypeSSPR();
    virtual ~Field_eUserTypeSSPR();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eField_eUserTypeSSPR
    {
        Field_eUserTypeSSPR_EZSIGNUSER,
        Field_eUserTypeSSPR_NATIVE,
    };

    eField_eUserTypeSSPR getValue() const;
    void setValue(eField_eUserTypeSSPR const value);

    protected:
        eField_eUserTypeSSPR m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eUserTypeSSPR_H_ */