/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Email_Request.h
 *
 * A Contact Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Email_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Email_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Contact Object
/// </summary>
class  Email_Request
    : public ModelBase
{
public:
    Email_Request();
    virtual ~Email_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Email_Request members

    /// <summary>
    /// The unique ID of the Emailtype.  Valid values:  |Value|Description| |-|-| |1|Office| |2|Home|
    /// </summary>
    int32_t getFkiEmailtypeID() const;
    bool fkiEmailtypeIDIsSet() const;
    void unsetFkiEmailtypeID();

    void setFkiEmailtypeID(int32_t value);

    /// <summary>
    /// The email address.
    /// </summary>
    utility::string_t getSEmailAddress() const;
    bool sEmailAddressIsSet() const;
    void unsetSEmailAddress();

    void setSEmailAddress(const utility::string_t& value);


protected:
    int32_t m_FkiEmailtypeID;
    bool m_FkiEmailtypeIDIsSet;
    utility::string_t m_SEmailAddress;
    bool m_SEmailAddressIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Email_Request_H_ */
