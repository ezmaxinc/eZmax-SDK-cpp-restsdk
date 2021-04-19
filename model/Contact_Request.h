/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.40
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Contact_Request.h
 *
 * A Contact Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Contact_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Contact_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Contact Object
/// </summary>
class  Contact_Request
    : public ModelBase
{
public:
    Contact_Request();
    virtual ~Contact_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Contact_Request members

    /// <summary>
    /// The unique ID of the Contacttitle.  Valid values:  |Value|Description| |-|-| |1|Ms.| |2|Mr.| |4|(Blank)| |5|Me (For Notaries)|
    /// </summary>
    int32_t getFkiContacttitleID() const;
    bool fkiContacttitleIDIsSet() const;
    void unsetFkiContacttitleID();

    void setFkiContacttitleID(int32_t value);

    /// <summary>
    /// The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English|
    /// </summary>
    int32_t getFkiLanguageID() const;
    bool fkiLanguageIDIsSet() const;
    void unsetFkiLanguageID();

    void setFkiLanguageID(int32_t value);

    /// <summary>
    /// The First name of the contact
    /// </summary>
    utility::string_t getSContactFirstname() const;
    bool sContactFirstnameIsSet() const;
    void unsetSContactFirstname();

    void setSContactFirstname(const utility::string_t& value);

    /// <summary>
    /// The Last name of the contact
    /// </summary>
    utility::string_t getSContactLastname() const;
    bool sContactLastnameIsSet() const;
    void unsetSContactLastname();

    void setSContactLastname(const utility::string_t& value);

    /// <summary>
    /// The Company name of the contact
    /// </summary>
    utility::string_t getSContactCompany() const;
    bool sContactCompanyIsSet() const;
    void unsetSContactCompany();

    void setSContactCompany(const utility::string_t& value);

    /// <summary>
    /// The Birth Date of the contact
    /// </summary>
    utility::string_t getDtContactBirthdate() const;
    bool dtContactBirthdateIsSet() const;
    void unsetDtContactBirthdate();

    void setDtContactBirthdate(const utility::string_t& value);


protected:
    int32_t m_FkiContacttitleID;
    bool m_FkiContacttitleIDIsSet;
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    utility::string_t m_SContactFirstname;
    bool m_SContactFirstnameIsSet;
    utility::string_t m_SContactLastname;
    bool m_SContactLastnameIsSet;
    utility::string_t m_SContactCompany;
    bool m_SContactCompanyIsSet;
    utility::string_t m_DtContactBirthdate;
    bool m_DtContactBirthdateIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Contact_Request_H_ */
