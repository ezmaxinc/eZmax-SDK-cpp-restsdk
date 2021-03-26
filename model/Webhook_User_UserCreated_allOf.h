/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Webhook_User_UserCreated_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_User_UserCreated_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_User_UserCreated_allOf_H_


#include "../ModelBase.h"

#include "User_Response.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Webhook_User_UserCreated_allOf
    : public ModelBase
{
public:
    Webhook_User_UserCreated_allOf();
    virtual ~Webhook_User_UserCreated_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Webhook_User_UserCreated_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<User_Response> getObjUser() const;
    bool objUserIsSet() const;
    void unsetObjUser();

    void setObjUser(const std::shared_ptr<User_Response>& value);


protected:
    std::shared_ptr<User_Response> m_ObjUser;
    bool m_ObjUserIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_User_UserCreated_allOf_H_ */
