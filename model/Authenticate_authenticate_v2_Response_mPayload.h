/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.44
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Authenticate_authenticate_v2_Response_mPayload.h
 *
 * Payload for the /2/module/authenticate/authenticate API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Authenticate_authenticate_v2_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Authenticate_authenticate_v2_Response_mPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /2/module/authenticate/authenticate API Request
/// </summary>
class  Authenticate_authenticate_v2_Response_mPayload
    : public ModelBase
{
public:
    Authenticate_authenticate_v2_Response_mPayload();
    virtual ~Authenticate_authenticate_v2_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Authenticate_authenticate_v2_Response_mPayload members

    /// <summary>
    /// The Authorization key
    /// </summary>
    utility::string_t getSAuthorization() const;
    bool sAuthorizationIsSet() const;
    void unsetSAuthorization();

    void setSAuthorization(const utility::string_t& value);

    /// <summary>
    /// The secret key
    /// </summary>
    utility::string_t getSSecret() const;
    bool sSecretIsSet() const;
    void unsetSSecret();

    void setSSecret(const utility::string_t& value);


protected:
    utility::string_t m_SAuthorization;
    bool m_SAuthorizationIsSet;
    utility::string_t m_SSecret;
    bool m_SSecretIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Authenticate_authenticate_v2_Response_mPayload_H_ */
