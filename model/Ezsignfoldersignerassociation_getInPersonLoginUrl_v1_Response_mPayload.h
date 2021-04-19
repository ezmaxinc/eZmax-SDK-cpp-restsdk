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
 * Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfoldersignerassociation/getInPersonLoginUrl API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /1/object/ezsignfoldersignerassociation/getInPersonLoginUrl API Request
/// </summary>
class  Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload
    : public ModelBase
{
public:
    Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload();
    virtual ~Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload members

    /// <summary>
    /// The Url to login to the signing application.    Url will expire after 30 minutes.  
    /// </summary>
    utility::string_t getSLoginUrl() const;
    bool sLoginUrlIsSet() const;
    void unsetSLoginUrl();

    void setSLoginUrl(const utility::string_t& value);


protected:
    utility::string_t m_SLoginUrl;
    bool m_SLoginUrlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload_H_ */
