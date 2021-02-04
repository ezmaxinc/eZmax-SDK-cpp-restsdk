/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Apikey_RequestCompound.h
 *
 * An Apikey Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_RequestCompound_H_


#include "../ModelBase.h"

#include "Apikey_Request.h"
#include "Multilingual_ApikeyDescription.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Apikey Object and children to create a complete structure
/// </summary>
class  Apikey_RequestCompound
    : public ModelBase
{
public:
    Apikey_RequestCompound();
    virtual ~Apikey_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Apikey_RequestCompound members

    /// <summary>
    /// The unique ID of the User
    /// </summary>
    int32_t getFkiUserID() const;
    bool fkiUserIDIsSet() const;
    void unsetFkiUserID();

    void setFkiUserID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Multilingual_ApikeyDescription> getObjApikeyDescription() const;
    bool objApikeyDescriptionIsSet() const;
    void unsetObjApikeyDescription();

    void setObjApikeyDescription(const std::shared_ptr<Multilingual_ApikeyDescription>& value);


protected:
    int32_t m_FkiUserID;
    bool m_FkiUserIDIsSet;
    std::shared_ptr<Multilingual_ApikeyDescription> m_ObjApikeyDescription;
    bool m_ObjApikeyDescriptionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_RequestCompound_H_ */
