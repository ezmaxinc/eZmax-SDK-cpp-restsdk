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
 * User_createEzsignuser_v1_Response_mPayload.h
 *
 * Payload for the /1/module/user/createEzsignuser API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_User_createEzsignuser_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_User_createEzsignuser_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /1/module/user/createEzsignuser API Request
/// </summary>
class  User_createEzsignuser_v1_Response_mPayload
    : public ModelBase
{
public:
    User_createEzsignuser_v1_Response_mPayload();
    virtual ~User_createEzsignuser_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// User_createEzsignuser_v1_Response_mPayload members

    /// <summary>
    /// An array of email addresses that succeeded.
    /// </summary>
    std::vector<utility::string_t>& getASEmailAddressSuccess();
    bool aSEmailAddressSuccessIsSet() const;
    void unsetA_sEmailAddressSuccess();

    void setASEmailAddressSuccess(const std::vector<utility::string_t>& value);

    /// <summary>
    /// An array of email addresses that failed.
    /// </summary>
    std::vector<utility::string_t>& getASEmailAddressFailure();
    bool aSEmailAddressFailureIsSet() const;
    void unsetA_sEmailAddressFailure();

    void setASEmailAddressFailure(const std::vector<utility::string_t>& value);


protected:
    std::vector<utility::string_t> m_A_sEmailAddressSuccess;
    bool m_A_sEmailAddressSuccessIsSet;
    std::vector<utility::string_t> m_A_sEmailAddressFailure;
    bool m_A_sEmailAddressFailureIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_User_createEzsignuser_v1_Response_mPayload_H_ */
