/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.29
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_getDownloadUrl_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsigndocument/{pkiEzsigndocument}/getDownloadUrl API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_getDownloadUrl_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_getDownloadUrl_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /1/object/ezsigndocument/{pkiEzsigndocument}/getDownloadUrl API Request
/// </summary>
class  Ezsigndocument_getDownloadUrl_v1_Response_mPayload
    : public ModelBase
{
public:
    Ezsigndocument_getDownloadUrl_v1_Response_mPayload();
    virtual ~Ezsigndocument_getDownloadUrl_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsigndocument_getDownloadUrl_v1_Response_mPayload members

    /// <summary>
    /// The Url to the requested document.  Url will expire after 5 minutes.
    /// </summary>
    utility::string_t getSDownloadUrl() const;
    bool sDownloadUrlIsSet() const;
    void unsetSDownloadUrl();

    void setSDownloadUrl(const utility::string_t& value);


protected:
    utility::string_t m_SDownloadUrl;
    bool m_SDownloadUrlIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_getDownloadUrl_v1_Response_mPayload_H_ */
