/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.38
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Audit.h
 *
 * Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, both Created and Modified informations will be the same.  Apikey details will only be provided if the changes were made by an API key.  
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Audit_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Audit_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, both Created and Modified informations will be the same.  Apikey details will only be provided if the changes were made by an API key.  
/// </summary>
class  Common_Audit
    : public ModelBase
{
public:
    Common_Audit();
    virtual ~Common_Audit();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Audit members

    /// <summary>
    /// The unique ID of the User
    /// </summary>
    int32_t getFkiUserIDCreated() const;
    bool fkiUserIDCreatedIsSet() const;
    void unsetFkiUserIDCreated();

    void setFkiUserIDCreated(int32_t value);

    /// <summary>
    /// The unique ID of the User
    /// </summary>
    int32_t getFkiUserIDModified() const;
    bool fkiUserIDModifiedIsSet() const;
    void unsetFkiUserIDModified();

    void setFkiUserIDModified(int32_t value);

    /// <summary>
    /// The unique ID of the Apikey
    /// </summary>
    int32_t getFkiApikeyIDCreated() const;
    bool fkiApikeyIDCreatedIsSet() const;
    void unsetFkiApikeyIDCreated();

    void setFkiApikeyIDCreated(int32_t value);

    /// <summary>
    /// The unique ID of the Apikey
    /// </summary>
    int32_t getFkiApikeyIDModified() const;
    bool fkiApikeyIDModifiedIsSet() const;
    void unsetFkiApikeyIDModified();

    void setFkiApikeyIDModified(int32_t value);

    /// <summary>
    /// Represent a Date Time. The timezone is the one configured in the User&#39;s profile.
    /// </summary>
    utility::string_t getDtCreatedDate() const;
    bool dtCreatedDateIsSet() const;
    void unsetDtCreatedDate();

    void setDtCreatedDate(const utility::string_t& value);

    /// <summary>
    /// Represent a Date Time. The timezone is the one configured in the User&#39;s profile.
    /// </summary>
    utility::string_t getDtModifiedDate() const;
    bool dtModifiedDateIsSet() const;
    void unsetDtModifiedDate();

    void setDtModifiedDate(const utility::string_t& value);


protected:
    int32_t m_FkiUserIDCreated;
    bool m_FkiUserIDCreatedIsSet;
    int32_t m_FkiUserIDModified;
    bool m_FkiUserIDModifiedIsSet;
    int32_t m_FkiApikeyIDCreated;
    bool m_FkiApikeyIDCreatedIsSet;
    int32_t m_FkiApikeyIDModified;
    bool m_FkiApikeyIDModifiedIsSet;
    utility::string_t m_DtCreatedDate;
    bool m_DtCreatedDateIsSet;
    utility::string_t m_DtModifiedDate;
    bool m_DtModifiedDateIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Audit_H_ */
