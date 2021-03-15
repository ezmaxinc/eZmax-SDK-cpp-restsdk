/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Webhook_User_UserCreated.h
 *
 * This is the base Webhook object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_User_UserCreated_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_User_UserCreated_H_


#include "../ModelBase.h"

#include "Common_Webhook.h"
#include "Webhook_User_UserCreated_allOf.h"
#include "User_Response.h"
#include "Attempt_Response.h"
#include "Webhook_Response.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// This is the base Webhook object
/// </summary>
class  Webhook_User_UserCreated
    : public ModelBase
{
public:
    Webhook_User_UserCreated();
    virtual ~Webhook_User_UserCreated();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Webhook_User_UserCreated members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<User_Response> getObjUser() const;
    bool objUserIsSet() const;
    void unsetObjUser();

    void setObjUser(const std::shared_ptr<User_Response>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Webhook_Response> getObjWebhook() const;
    bool objWebhookIsSet() const;
    void unsetObjWebhook();

    void setObjWebhook(const std::shared_ptr<Webhook_Response>& value);

    /// <summary>
    /// An array containing details of previous attempts that were made to deliver the message. The array is empty if it&#39;s the first attempt.
    /// </summary>
    std::vector<std::shared_ptr<Attempt_Response>>& getAObjAttempt();
    bool aObjAttemptIsSet() const;
    void unsetA_objAttempt();

    void setAObjAttempt(const std::vector<std::shared_ptr<Attempt_Response>>& value);


protected:
    std::shared_ptr<User_Response> m_ObjUser;
    bool m_ObjUserIsSet;
    std::shared_ptr<Webhook_Response> m_ObjWebhook;
    bool m_ObjWebhookIsSet;
    std::vector<std::shared_ptr<Attempt_Response>> m_A_objAttempt;
    bool m_A_objAttemptIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_User_UserCreated_H_ */
