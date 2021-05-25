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
 * Sspr_resetPassword_v1_Request.h
 *
 * Request for the /1/module/sspr/resetPassword API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Sspr_resetPassword_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Sspr_resetPassword_v1_Request_H_


#include "../ModelBase.h"

#include "Field_eUserTypeSSPR.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/module/sspr/resetPassword API Request
/// </summary>
class  Sspr_resetPassword_v1_Request
    : public ModelBase
{
public:
    Sspr_resetPassword_v1_Request();
    virtual ~Sspr_resetPassword_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Sspr_resetPassword_v1_Request members

    /// <summary>
    /// The customer code assigned to your account
    /// </summary>
    utility::string_t getPksCustomerCode() const;
    bool pksCustomerCodeIsSet() const;
    void unsetPksCustomerCode();

    void setPksCustomerCode(const utility::string_t& value);

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
    std::shared_ptr<Field_eUserTypeSSPR> getEUserTypeSSPR() const;
    bool eUserTypeSSPRIsSet() const;
    void unsetEUserTypeSSPR();

    void setEUserTypeSSPR(const std::shared_ptr<Field_eUserTypeSSPR>& value);

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
    /// Hex Encoded Secret SSPR token
    /// </summary>
    utility::string_t getBinUserSSPRtoken() const;
    bool binUserSSPRtokenIsSet() const;
    void unsetBinUserSSPRtoken();

    void setBinUserSSPRtoken(const utility::string_t& value);

    /// <summary>
    /// A Password.  Must meet complexity requirements
    /// </summary>
    utility::string_t getSPassword() const;
    bool sPasswordIsSet() const;
    void unsetSPassword();

    void setSPassword(const utility::string_t& value);


protected:
    utility::string_t m_PksCustomerCode;
    bool m_PksCustomerCodeIsSet;
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    std::shared_ptr<Field_eUserTypeSSPR> m_EUserTypeSSPR;
    bool m_EUserTypeSSPRIsSet;
    utility::string_t m_SEmailAddress;
    bool m_SEmailAddressIsSet;
    utility::string_t m_SUserLoginname;
    bool m_SUserLoginnameIsSet;
    utility::string_t m_BinUserSSPRtoken;
    bool m_BinUserSSPRtokenIsSet;
    utility::string_t m_SPassword;
    bool m_SPasswordIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Sspr_resetPassword_v1_Request_H_ */
