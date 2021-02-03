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
 * Ezsignfoldersignerassociation_createObject_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /1/object/ezsignfoldersignerassociation/createObject API Request
/// </summary>
class  Ezsignfoldersignerassociation_createObject_v1_Response_mPayload
    : public ModelBase
{
public:
    Ezsignfoldersignerassociation_createObject_v1_Response_mPayload();
    virtual ~Ezsignfoldersignerassociation_createObject_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfoldersignerassociation_createObject_v1_Response_mPayload members

    /// <summary>
    /// An array of unique IDs representing the object that were requested to be created.  They are returned in the same order as the array containing the objects to be created that was sent in the request.
    /// </summary>
    std::vector<int32_t>& getAPkiEzsignfoldersignerassociationID();
    bool aPkiEzsignfoldersignerassociationIDIsSet() const;
    void unsetA_pkiEzsignfoldersignerassociationID();

    void setAPkiEzsignfoldersignerassociationID(std::vector<int32_t> value);


protected:
    std::vector<int32_t> m_A_pkiEzsignfoldersignerassociationID;
    bool m_A_pkiEzsignfoldersignerassociationIDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Response_mPayload_H_ */
