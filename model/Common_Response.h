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
 * Common_Response.h
 *
 * All API response will inherit this based Response
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_H_


#include "../ModelBase.h"

#include "Common_Response_objDebug.h"
#include "Common_Response_objDebugPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// All API response will inherit this based Response
/// </summary>
class  Common_Response
    : public ModelBase
{
public:
    Common_Response();
    virtual ~Common_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Response members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Response_objDebugPayload> getObjDebugPayload() const;
    bool objDebugPayloadIsSet() const;
    void unsetObjDebugPayload();

    void setObjDebugPayload(const std::shared_ptr<Common_Response_objDebugPayload>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Response_objDebug> getObjDebug() const;
    bool objDebugIsSet() const;
    void unsetObjDebug();

    void setObjDebug(const std::shared_ptr<Common_Response_objDebug>& value);


protected:
    std::shared_ptr<Common_Response_objDebugPayload> m_ObjDebugPayload;
    bool m_ObjDebugPayloadIsSet;
    std::shared_ptr<Common_Response_objDebug> m_ObjDebug;
    bool m_ObjDebugIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_H_ */
