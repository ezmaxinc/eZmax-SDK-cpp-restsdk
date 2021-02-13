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
 * ObjectEzsignfolderApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectEzsignfolderApi_H_
#define COM_EZMAX_API_ObjectEzsignfolderApi_H_


#include "../ApiClient.h"

#include "Common_Response_Error.h"
#include "Ezsignfolder_createObject_v1_Request.h"
#include "Ezsignfolder_createObject_v1_Response.h"
#include "Ezsignfolder_deleteObject_v1_Response.h"
#include "Ezsignfolder_editObject_v1_Request.h"
#include "Ezsignfolder_editObject_v1_Response.h"
#include "Ezsignfolder_getObject_v1_Response.h"
#include "Ezsignfolder_send_v1_Request.h"
#include "Ezsignfolder_send_v1_Response.h"
#include <vector>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectEzsignfolderApi 
{
public:

    explicit ObjectEzsignfolderApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectEzsignfolderApi();

    /// <summary>
    /// Create a new Ezsignfolder
    /// </summary>
    /// <remarks>
    /// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
    /// </remarks>
    /// <param name="ezsignfolderCreateObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsignfolder_createObject_v1_Response>> ezsignfolderCreateObjectV1(
        std::vector<std::shared_ptr<Ezsignfolder_createObject_v1_Request>> ezsignfolderCreateObjectV1Request
    ) const;
    /// <summary>
    /// Delete an existing Ezsignfolder
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfolderID">The unique ID of the Ezsignfolder</param>
    pplx::task<std::shared_ptr<Ezsignfolder_deleteObject_v1_Response>> ezsignfolderDeleteObjectV1(
        int32_t pkiEzsignfolderID
    ) const;
    /// <summary>
    /// Modify an existing Ezsignfolder
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfolderID">The unique ID of the Ezsignfolder</param>
    /// <param name="ezsignfolderEditObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsignfolder_editObject_v1_Response>> ezsignfolderEditObjectV1(
        int32_t pkiEzsignfolderID,
        std::shared_ptr<Ezsignfolder_editObject_v1_Request> ezsignfolderEditObjectV1Request
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsignfolder&#39;s children IDs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfolderID">The unique ID of the Ezsignfolder</param>
    pplx::task<void> ezsignfolderGetChildrenV1(
        int32_t pkiEzsignfolderID
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsignfolder
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfolderID">The unique ID of the Ezsignfolder</param>
    pplx::task<std::shared_ptr<Ezsignfolder_getObject_v1_Response>> ezsignfolderGetObjectV1(
        int32_t pkiEzsignfolderID
    ) const;
    /// <summary>
    /// Send the Ezsignfolder to the signatories for signature
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfolderID">The unique ID of the Ezsignfolder</param>
    /// <param name="ezsignfolderSendV1Request"></param>
    pplx::task<std::shared_ptr<Ezsignfolder_send_v1_Response>> ezsignfolderSendV1(
        int32_t pkiEzsignfolderID,
        std::shared_ptr<Ezsignfolder_send_v1_Request> ezsignfolderSendV1Request
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectEzsignfolderApi_H_ */

