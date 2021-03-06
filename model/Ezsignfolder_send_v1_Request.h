/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_send_v1_Request.h
 *
 * Request for the /1/object/ezsignfolder/{pkiEzsignfolderID}/send API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfolder_send_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfolder_send_v1_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/ezsignfolder/{pkiEzsignfolderID}/send API Request
/// </summary>
class  Ezsignfolder_send_v1_Request
    : public ModelBase
{
public:
    Ezsignfolder_send_v1_Request();
    virtual ~Ezsignfolder_send_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfolder_send_v1_Request members

    /// <summary>
    /// A custom text message that will be added to the email sent to signatories inviting them to sign.  You can send an empty string and only the generic message will be sent.
    /// </summary>
    utility::string_t getTExtraMessage() const;
    bool tExtraMessageIsSet() const;
    void unsetTExtraMessage();

    void setTExtraMessage(const utility::string_t& value);


protected:
    utility::string_t m_TExtraMessage;
    bool m_TExtraMessageIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfolder_send_v1_Request_H_ */
