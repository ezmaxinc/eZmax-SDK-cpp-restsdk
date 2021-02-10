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
 * Common_Response_objDebugPayload.h
 *
 * This is a debug object containing debugging information on the actual function
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objDebugPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objDebugPayload_H_


#include "../ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// This is a debug object containing debugging information on the actual function
/// </summary>
class  Common_Response_objDebugPayload
    : public ModelBase
{
public:
    Common_Response_objDebugPayload();
    virtual ~Common_Response_objDebugPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Response_objDebugPayload members

    /// <summary>
    /// The minimum version of the function that can be called
    /// </summary>
    int32_t getIVersionMin() const;
    bool iVersionMinIsSet() const;
    void unsetIVersionMin();

    void setIVersionMin(int32_t value);

    /// <summary>
    /// The maximum version of the function that can be called
    /// </summary>
    int32_t getIVersionMax() const;
    bool iVersionMaxIsSet() const;
    void unsetIVersionMax();

    void setIVersionMax(int32_t value);

    /// <summary>
    /// An array of permissions required to access this function.  If the value \&quot;0\&quot; is present in the array, anyone can call this function.  You must have one of the permission to access the function. You don&#39;t need to have all of them.
    /// </summary>
    std::vector<int32_t>& getARequiredPermissions();
    bool aRequiredPermissionsIsSet() const;
    void unsetA_RequiredPermissions();

    void setARequiredPermissions(std::vector<int32_t> value);


protected:
    int32_t m_IVersionMin;
    bool m_IVersionMinIsSet;
    int32_t m_IVersionMax;
    bool m_IVersionMaxIsSet;
    std::vector<int32_t> m_A_RequiredPermissions;
    bool m_A_RequiredPermissionsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objDebugPayload_H_ */
