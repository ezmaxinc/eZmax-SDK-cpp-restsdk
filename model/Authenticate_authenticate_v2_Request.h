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
 * Authenticate_authenticate_v2_Request.h
 *
 * Request for the /2/module/authenticate/authenticate API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Authenticate_authenticate_v2_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Authenticate_authenticate_v2_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /2/module/authenticate/authenticate API Request
/// </summary>
class  Authenticate_authenticate_v2_Request
    : public ModelBase
{
public:
    Authenticate_authenticate_v2_Request();
    virtual ~Authenticate_authenticate_v2_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Authenticate_authenticate_v2_Request members

    /// <summary>
    /// The customer code assigned to your account
    /// </summary>
    utility::string_t getPksCustomerCode() const;
    bool pksCustomerCodeIsSet() const;
    void unsetPksCustomerCode();

    void setPksCustomerCode(const utility::string_t& value);

    /// <summary>
    /// The email address.
    /// </summary>
    utility::string_t getSEmailAddress() const;
    bool sEmailAddressIsSet() const;
    void unsetSEmailAddress();

    void setSEmailAddress(const utility::string_t& value);

    /// <summary>
    /// The Login name of the User.
    /// </summary>
    utility::string_t getSUserLoginname() const;
    bool sUserLoginnameIsSet() const;
    void unsetSUserLoginname();

    void setSUserLoginname(const utility::string_t& value);

    /// <summary>
    /// A Password.  Must meet complexity requirements
    /// </summary>
    utility::string_t getSPassword() const;
    bool sPasswordIsSet() const;
    void unsetSPassword();

    void setSPassword(const utility::string_t& value);

    /// <summary>
    /// A Password encrypted and encoded in Base64  Must meet complexity requirements
    /// </summary>
    utility::string_t getSPasswordEncrypted() const;
    bool sPasswordEncryptedIsSet() const;
    void unsetSPasswordEncrypted();

    void setSPasswordEncrypted(const utility::string_t& value);


protected:
    utility::string_t m_PksCustomerCode;
    bool m_PksCustomerCodeIsSet;
    utility::string_t m_SEmailAddress;
    bool m_SEmailAddressIsSet;
    utility::string_t m_SUserLoginname;
    bool m_SUserLoginnameIsSet;
    utility::string_t m_SPassword;
    bool m_SPasswordIsSet;
    utility::string_t m_SPasswordEncrypted;
    bool m_SPasswordEncryptedIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Authenticate_authenticate_v2_Request_H_ */
