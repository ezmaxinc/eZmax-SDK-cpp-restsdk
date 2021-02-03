/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsigner_RequestCompound_Contact.h
 *
 * A Ezsignsigner-&gt;Contact Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsigner_RequestCompound_Contact_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsigner_RequestCompound_Contact_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Ezsignsigner-&gt;Contact Object and children to create a complete structure
/// </summary>
class  Ezsignsigner_RequestCompound_Contact
    : public ModelBase
{
public:
    Ezsignsigner_RequestCompound_Contact();
    virtual ~Ezsignsigner_RequestCompound_Contact();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignsigner_RequestCompound_Contact members

    /// <summary>
    /// The first name of the Contact
    /// </summary>
    utility::string_t getSContactFirstname() const;
    bool sContactFirstnameIsSet() const;
    void unsetSContactFirstname();

    void setSContactFirstname(const utility::string_t& value);

    /// <summary>
    /// The last name of the Contact
    /// </summary>
    utility::string_t getSContactLastname() const;
    bool sContactLastnameIsSet() const;
    void unsetSContactLastname();

    void setSContactLastname(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English|
    /// </summary>
    int32_t getFkiLanguageID() const;
    bool fkiLanguageIDIsSet() const;
    void unsetFkiLanguageID();

    void setFkiLanguageID(int32_t value);

    /// <summary>
    /// The email address of the contact. Must be filled if email authentification was requested
    /// </summary>
    utility::string_t getSEmailAddress() const;
    bool sEmailAddressIsSet() const;
    void unsetSEmailAddress();

    void setSEmailAddress(const utility::string_t& value);

    /// <summary>
    /// The Phone number of the contact. Use format \&quot;5149901516\&quot; for North American Numbers (Without \&quot;1\&quot; for long distance code) you would dial like this: 1-514-990-1516. Use format \&quot;498945233886\&quot; for international numbers (Without \&quot;011\&quot;) you would dial like this: +49 89 452 33 88-6. In this example \&quot;49\&quot; is the country code of Germany.
    /// </summary>
    utility::string_t getSPhoneNumber() const;
    bool sPhoneNumberIsSet() const;
    void unsetSPhoneNumber();

    void setSPhoneNumber(const utility::string_t& value);

    /// <summary>
    /// The Cell Phone number of the contact. Use format \&quot;5149901516\&quot; for North American Numbers (Without \&quot;1\&quot; for long distance code) you would dial like this: 1-514-990-1516. Use format \&quot;498945233886\&quot; for international numbers (Without \&quot;011\&quot;) you would dial like this: +49 89 452 33 88-6. In this example \&quot;49\&quot; is the country code of Germany.
    /// </summary>
    utility::string_t getSPhoneNumberCell() const;
    bool sPhoneNumberCellIsSet() const;
    void unsetSPhoneNumberCell();

    void setSPhoneNumberCell(const utility::string_t& value);


protected:
    utility::string_t m_SContactFirstname;
    bool m_SContactFirstnameIsSet;
    utility::string_t m_SContactLastname;
    bool m_SContactLastnameIsSet;
    int32_t m_FkiLanguageID;
    bool m_FkiLanguageIDIsSet;
    utility::string_t m_SEmailAddress;
    bool m_SEmailAddressIsSet;
    utility::string_t m_SPhoneNumber;
    bool m_SPhoneNumberIsSet;
    utility::string_t m_SPhoneNumberCell;
    bool m_SPhoneNumberCellIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsigner_RequestCompound_Contact_H_ */
