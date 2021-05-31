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
 * Activesession_getCurrent_v1_Response_mPayload.h
 *
 * Payload for the /1/object/activesession/getCurrent API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Activesession_getCurrent_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Activesession_getCurrent_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /1/object/activesession/getCurrent API Request
/// </summary>
class  Activesession_getCurrent_v1_Response_mPayload
    : public ModelBase
{
public:
    Activesession_getCurrent_v1_Response_mPayload();
    virtual ~Activesession_getCurrent_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Activesession_getCurrent_v1_Response_mPayload members

    /// <summary>
    /// The customer code specific to the client in which the API request is being made
    /// </summary>
    utility::string_t getSCustomerCode() const;
    bool sCustomerCodeIsSet() const;
    void unsetSCustomerCode();

    void setSCustomerCode(const utility::string_t& value);

    /// <summary>
    /// The type of session used for the API request call
    /// </summary>
    utility::string_t getEActivesessionSessiontype() const;
    bool eActivesessionSessiontypeIsSet() const;
    void unsetEActivesessionSessiontype();

    void setEActivesessionSessiontype(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English|
    /// </summary>
    int32_t getFkiLanguageID() const;
    bool fkiLanguageIDIsSet() const;
    void unsetFkiLanguageID();

    void setFkiLanguageID(int32_t value);

    /// <summary>
    /// The name of the active Company in the current language
    /// </summary>
    utility::string_t getSCompanyNameX() const;
    bool sCompanyNameXIsSet() const;
    void unsetSCompanyNameX();

    void setSCompanyNameX(const utility::string_t& value);

    /// <summary>
    /// The name of the active Department in the current language
    /// </summary>
    utility::string_t getSDepartmentNameX() const;
    bool sDepartmentNameXIsSet() const;
    void unsetSDepartmentNameX();

    void setSDepartmentNameX(const utility::string_t& value);

    /// <summary>
    /// An Array of Registered modules.  These are the modules that are Licensed to be used by the User or the API Key.
    /// </summary>
    std::vector<utility::string_t>& getARegisteredModules();
    bool aRegisteredModulesIsSet() const;
    void unsetA_RegisteredModules();

    void setARegisteredModules(const std::vector<utility::string_t>& value);

    /// <summary>
    /// An array of permissions granted to the user or api key
    /// </summary>
    std::vector<int32_t>& getAPermissions();
    bool aPermissionsIsSet() const;
    void unsetA_Permissions();

    void setAPermissions(std::vector<int32_t> value);

    /// <summary>
    /// The unique ID of the User
    /// </summary>
    int32_t getFkiUserID() const;
    bool fkiUserIDIsSet() const;
    void unsetFkiUserID();

    void setFkiUserID(int32_t value);

    /// <summary>
    /// The unique ID of the Apikey
    /// </summary>
    int32_t getFkiApikeyID() const;
    bool fkiApikeyIDIsSet() const;
    void unsetFkiApikeyID();

    void setFkiApikeyID(int32_t value);


protected:
    utility::string_t m_SCustomerCode;
    bool m_SCustomerCodeIsSet;
    utility::string_t m_EActivesessionSessiontype;
    bool m_EActivesessionSessiontypeIsSet;
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    utility::string_t m_SCompanyNameX;
    bool m_SCompanyNameXIsSet;
    utility::string_t m_SDepartmentNameX;
    bool m_SDepartmentNameXIsSet;
    std::vector<utility::string_t> m_A_RegisteredModules;
    bool m_A_RegisteredModulesIsSet;
    std::vector<int32_t> m_A_Permissions;
    bool m_A_PermissionsIsSet;
    int32_t m_FkiUserID;
    bool m_FkiUserIDIsSet;
    int32_t m_FkiApikeyID;
    bool m_FkiApikeyIDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Activesession_getCurrent_v1_Response_mPayload_H_ */
