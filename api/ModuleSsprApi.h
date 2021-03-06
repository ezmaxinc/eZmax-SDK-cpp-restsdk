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
 * ModuleSsprApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ModuleSsprApi_H_
#define COM_EZMAX_API_ModuleSsprApi_H_


#include "../ApiClient.h"

#include "Common_Response_Error.h"
#include "Sspr_resetPasswordRequest_v1_Request.h"
#include "Sspr_resetPassword_v1_Request.h"
#include "Sspr_sendUsernames_v1_Request.h"
#include "Sspr_unlockAccountRequest_v1_Request.h"
#include "Sspr_unlockAccount_v1_Request.h"
#include "Sspr_validateToken_v1_Request.h"


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ModuleSsprApi 
{
public:

    explicit ModuleSsprApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ModuleSsprApi();

    /// <summary>
    /// Reset Password Request
    /// </summary>
    /// <remarks>
    /// This endpoint sends an email with a link to reset the user&#39;s password.  sEmailAddress must be set if eUserTypeSSPR &#x3D; EzsignUser  sUserLoginname must be set if eUserTypeSSPR &#x3D; Native
    /// </remarks>
    /// <param name="ssprResetPasswordRequestV1Request"></param>
    pplx::task<void> ssprResetPasswordRequestV1(
        std::shared_ptr<Sspr_resetPasswordRequest_v1_Request> ssprResetPasswordRequestV1Request
    ) const;
    /// <summary>
    /// Reset Password
    /// </summary>
    /// <remarks>
    /// This endpoint resets the user&#39;s password.  sEmailAddress must be set if eUserTypeSSPR &#x3D; EzsignUser  sUserLoginname must be set if eUserTypeSSPR &#x3D; Native
    /// </remarks>
    /// <param name="ssprResetPasswordV1Request"></param>
    pplx::task<void> ssprResetPasswordV1(
        std::shared_ptr<Sspr_resetPassword_v1_Request> ssprResetPasswordV1Request
    ) const;
    /// <summary>
    /// Send username(s)
    /// </summary>
    /// <remarks>
    /// This endpoint returns an email with the username(s) matching the email address provided in case of forgotten username
    /// </remarks>
    /// <param name="ssprSendUsernamesV1Request"></param>
    pplx::task<void> ssprSendUsernamesV1(
        std::shared_ptr<Sspr_sendUsernames_v1_Request> ssprSendUsernamesV1Request
    ) const;
    /// <summary>
    /// Unlock Account Request
    /// </summary>
    /// <remarks>
    /// This endpoint sends an email with a link to unlock the user account.  sEmailAddress must be set if eUserTypeSSPR &#x3D; EzsignUser  sUserLoginname must be set if eUserTypeSSPR &#x3D; Native
    /// </remarks>
    /// <param name="ssprUnlockAccountRequestV1Request"></param>
    pplx::task<void> ssprUnlockAccountRequestV1(
        std::shared_ptr<Sspr_unlockAccountRequest_v1_Request> ssprUnlockAccountRequestV1Request
    ) const;
    /// <summary>
    /// Unlock Account
    /// </summary>
    /// <remarks>
    /// This endpoint unlocks the user account.  sEmailAddress must be set if eUserTypeSSPR &#x3D; EzsignUser  sUserLoginname must be set if eUserTypeSSPR &#x3D; Native
    /// </remarks>
    /// <param name="ssprUnlockAccountV1Request"></param>
    pplx::task<void> ssprUnlockAccountV1(
        std::shared_ptr<Sspr_unlockAccount_v1_Request> ssprUnlockAccountV1Request
    ) const;
    /// <summary>
    /// Validate Token
    /// </summary>
    /// <remarks>
    /// This endpoint validates if a Token is valid and not expired.  sEmailAddress must be set if eUserTypeSSPR &#x3D; EzsignUser  sUserLoginname must be set if eUserTypeSSPR &#x3D; Native
    /// </remarks>
    /// <param name="ssprValidateTokenV1Request"></param>
    pplx::task<void> ssprValidateTokenV1(
        std::shared_ptr<Sspr_validateToken_v1_Request> ssprValidateTokenV1Request
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ModuleSsprApi_H_ */

