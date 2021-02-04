/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * User_Response.h
 *
 * A User Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_User_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_User_Response_H_


#include "../ModelBase.h"

#include "Field_eUserType.h"
#include <cpprest/details/basic_types.h>
#include "Common_Audit.h"
#include "User_Response_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A User Object
/// </summary>
class  User_Response
    : public ModelBase
{
public:
    User_Response();
    virtual ~User_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// User_Response members

    /// <summary>
    /// The unique ID of the User
    /// </summary>
    int32_t getPkiUserID() const;
    bool pkiUserIDIsSet() const;
    void unsetPkiUserID();

    void setPkiUserID(int32_t value);

    /// <summary>
    /// The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English|
    /// </summary>
    int32_t getFkiLanguageID() const;
    bool fkiLanguageIDIsSet() const;
    void unsetFkiLanguageID();

    void setFkiLanguageID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Field_eUserType> getEUserType() const;
    bool eUserTypeIsSet() const;
    void unsetEUserType();

    void setEUserType(const std::shared_ptr<Field_eUserType>& value);

    /// <summary>
    /// The First name of the user
    /// </summary>
    utility::string_t getSUserFirstname() const;
    bool sUserFirstnameIsSet() const;
    void unsetSUserFirstname();

    void setSUserFirstname(const utility::string_t& value);

    /// <summary>
    /// The Last name of the user
    /// </summary>
    utility::string_t getSUserLastname() const;
    bool sUserLastnameIsSet() const;
    void unsetSUserLastname();

    void setSUserLastname(const utility::string_t& value);

    /// <summary>
    /// The Login name of the User.
    /// </summary>
    utility::string_t getSUserLoginname() const;
    bool sUserLoginnameIsSet() const;
    void unsetSUserLoginname();

    void setSUserLoginname(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Audit> getObjAudit() const;
    bool objAuditIsSet() const;
    void unsetObjAudit();

    void setObjAudit(const std::shared_ptr<Common_Audit>& value);


protected:
    int32_t m_PkiUserID;
    bool m_PkiUserIDIsSet;
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    std::shared_ptr<Field_eUserType> m_EUserType;
    bool m_EUserTypeIsSet;
    utility::string_t m_SUserFirstname;
    bool m_SUserFirstnameIsSet;
    utility::string_t m_SUserLastname;
    bool m_SUserLastnameIsSet;
    utility::string_t m_SUserLoginname;
    bool m_SUserLoginnameIsSet;
    std::shared_ptr<Common_Audit> m_ObjAudit;
    bool m_ObjAuditIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_User_Response_H_ */
