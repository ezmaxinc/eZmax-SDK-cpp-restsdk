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
 * Common_Webhook.h
 *
 * This is the base Webhook object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Webhook_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Webhook_H_


#include "../ModelBase.h"

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
class  Common_Webhook
    : public ModelBase
{
public:
    Common_Webhook();
    virtual ~Common_Webhook();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Webhook members

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
    std::shared_ptr<Webhook_Response> m_ObjWebhook;
    bool m_ObjWebhookIsSet;
    std::vector<std::shared_ptr<Attempt_Response>> m_A_objAttempt;
    bool m_A_objAttemptIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Webhook_H_ */
