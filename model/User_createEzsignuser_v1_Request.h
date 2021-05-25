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
 * User_createEzsignuser_v1_Request.h
 *
 * Request for the /1/module/user/createEzsignuser API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_User_createEzsignuser_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_User_createEzsignuser_v1_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/module/user/createEzsignuser API Request
/// </summary>
class  User_createEzsignuser_v1_Request
    : public ModelBase
{
public:
    User_createEzsignuser_v1_Request();
    virtual ~User_createEzsignuser_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// User_createEzsignuser_v1_Request members

    /// <summary>
    /// The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English|
    /// </summary>
    int32_t getFkiLanguageID() const;
    bool fkiLanguageIDIsSet() const;
    void unsetFkiLanguageID();

    void setFkiLanguageID(int32_t value);

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
    /// The email address.
    /// </summary>
    utility::string_t getSEmailAddress() const;
    bool sEmailAddressIsSet() const;
    void unsetSEmailAddress();

    void setSEmailAddress(const utility::string_t& value);

    /// <summary>
    /// The region of the phone number. (For a North America Number only)  The region is the \&quot;514\&quot; section in this sample phone number: (514) 990-1516 x123
    /// </summary>
    utility::string_t getSPhoneRegion() const;
    bool sPhoneRegionIsSet() const;
    void unsetSPhoneRegion();

    void setSPhoneRegion(const utility::string_t& value);

    /// <summary>
    /// The exchange of the phone number. (For a North America Number only)  The exchange is the \&quot;990\&quot; section in this sample phone number: (514) 990-1516 x123
    /// </summary>
    utility::string_t getSPhoneExchange() const;
    bool sPhoneExchangeIsSet() const;
    void unsetSPhoneExchange();

    void setSPhoneExchange(const utility::string_t& value);

    /// <summary>
    /// The number of the phone number. (For a North America Number only)  The number is the \&quot;1516\&quot; section in this sample phone number: (514) 990-1516 x123
    /// </summary>
    utility::string_t getSPhoneNumber() const;
    bool sPhoneNumberIsSet() const;
    void unsetSPhoneNumber();

    void setSPhoneNumber(const utility::string_t& value);

    /// <summary>
    /// The extension of the phone number.  The extension is the \&quot;123\&quot; section in this sample phone number: (514) 990-1516 x123.  It can also be used with international phone numbers
    /// </summary>
    utility::string_t getSPhoneExtension() const;
    bool sPhoneExtensionIsSet() const;
    void unsetSPhoneExtension();

    void setSPhoneExtension(const utility::string_t& value);


protected:
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    utility::string_t m_SUserFirstname;
    bool m_SUserFirstnameIsSet;
    utility::string_t m_SUserLastname;
    bool m_SUserLastnameIsSet;
    utility::string_t m_SEmailAddress;
    bool m_SEmailAddressIsSet;
    utility::string_t m_SPhoneRegion;
    bool m_SPhoneRegionIsSet;
    utility::string_t m_SPhoneExchange;
    bool m_SPhoneExchangeIsSet;
    utility::string_t m_SPhoneNumber;
    bool m_SPhoneNumberIsSet;
    utility::string_t m_SPhoneExtension;
    bool m_SPhoneExtensionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_User_createEzsignuser_v1_Request_H_ */
