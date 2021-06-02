/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.45
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * User_Response_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_User_Response_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_User_Response_allOf_H_


#include "../ModelBase.h"

#include "Field_eUserType.h"
#include <cpprest/details/basic_types.h>
#include "Common_Audit.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  User_Response_allOf
    : public ModelBase
{
public:
    User_Response_allOf();
    virtual ~User_Response_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// User_Response_allOf members

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

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_User_Response_allOf_H_ */
