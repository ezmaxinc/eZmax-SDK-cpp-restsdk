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
 * ObjectEzsignsignatureApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectEzsignsignatureApi_H_
#define COM_EZMAX_API_ObjectEzsignsignatureApi_H_


#include "../ApiClient.h"

#include "Common_Response_Error.h"
#include "Ezsignsignature_createObject_v1_Request.h"
#include "Ezsignsignature_createObject_v1_Response.h"
#include "Ezsignsignature_deleteObject_v1_Response.h"
#include "Ezsignsignature_editObject_v1_Request.h"
#include "Ezsignsignature_editObject_v1_Response.h"
#include "Ezsignsignature_getObject_v1_Response.h"
#include <vector>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectEzsignsignatureApi 
{
public:

    explicit ObjectEzsignsignatureApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectEzsignsignatureApi();

    /// <summary>
    /// Create a new Ezsignsignature
    /// </summary>
    /// <remarks>
    /// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
    /// </remarks>
    /// <param name="ezsignsignatureCreateObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsignsignature_createObject_v1_Response>> ezsignsignatureCreateObjectV1(
        std::vector<std::shared_ptr<Ezsignsignature_createObject_v1_Request>> ezsignsignatureCreateObjectV1Request
    ) const;
    /// <summary>
    /// Delete an existing Ezsignsignature
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignsignatureID">The unique ID of the Ezsignsignature</param>
    pplx::task<std::shared_ptr<Ezsignsignature_deleteObject_v1_Response>> ezsignsignatureDeleteObjectV1(
        int32_t pkiEzsignsignatureID
    ) const;
    /// <summary>
    /// Modify an existing Ezsignsignature
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignsignatureID">The unique ID of the Ezsignsignature</param>
    /// <param name="ezsignsignatureEditObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsignsignature_editObject_v1_Response>> ezsignsignatureEditObjectV1(
        int32_t pkiEzsignsignatureID,
        std::shared_ptr<Ezsignsignature_editObject_v1_Request> ezsignsignatureEditObjectV1Request
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsignsignature&#39;s children IDs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignsignatureID">The unique ID of the Ezsignsignature</param>
    pplx::task<void> ezsignsignatureGetObjectGetChildrenV1(
        int32_t pkiEzsignsignatureID
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsignsignature
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignsignatureID">The unique ID of the Ezsignsignature</param>
    pplx::task<std::shared_ptr<Ezsignsignature_getObject_v1_Response>> ezsignsignatureGetObjectV1(
        int32_t pkiEzsignsignatureID
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectEzsignsignatureApi_H_ */

