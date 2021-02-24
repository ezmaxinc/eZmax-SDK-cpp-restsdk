/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
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
    /// Retrieve an existing Ezsignsignature&#39;s children IDs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignsignatureID">The unique ID of the Ezsignsignature</param>
    pplx::task<void> ezsignsignatureGetChildrenV1(
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

