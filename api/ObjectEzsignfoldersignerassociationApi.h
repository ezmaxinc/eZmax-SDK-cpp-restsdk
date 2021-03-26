/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ObjectEzsignfoldersignerassociationApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectEzsignfoldersignerassociationApi_H_
#define COM_EZMAX_API_ObjectEzsignfoldersignerassociationApi_H_


#include "../ApiClient.h"

#include "Common_Response_Error.h"
#include "Ezsignfoldersignerassociation_createObject_v1_Request.h"
#include "Ezsignfoldersignerassociation_createObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_deleteObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h"
#include "Ezsignfoldersignerassociation_getObject_v1_Response.h"
#include <vector>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectEzsignfoldersignerassociationApi 
{
public:

    explicit ObjectEzsignfoldersignerassociationApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectEzsignfoldersignerassociationApi();

    /// <summary>
    /// Create a new Ezsignfoldersignerassociation
    /// </summary>
    /// <remarks>
    /// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
    /// </remarks>
    /// <param name="ezsignfoldersignerassociationCreateObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsignfoldersignerassociation_createObject_v1_Response>> ezsignfoldersignerassociationCreateObjectV1(
        std::vector<std::shared_ptr<Ezsignfoldersignerassociation_createObject_v1_Request>> ezsignfoldersignerassociationCreateObjectV1Request
    ) const;
    /// <summary>
    /// Delete an existing Ezsignfoldersignerassociation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfoldersignerassociationID">The unique ID of the Ezsignfoldersignerassociation</param>
    pplx::task<std::shared_ptr<Ezsignfoldersignerassociation_deleteObject_v1_Response>> ezsignfoldersignerassociationDeleteObjectV1(
        int32_t pkiEzsignfoldersignerassociationID
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsignfoldersignerassociation&#39;s children IDs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfoldersignerassociationID">The unique ID of the Ezsignfoldersignerassociation</param>
    pplx::task<void> ezsignfoldersignerassociationGetChildrenV1(
        int32_t pkiEzsignfoldersignerassociationID
    ) const;
    /// <summary>
    /// Retrieve a Login Url to allow In-Person signing
    /// </summary>
    /// <remarks>
    /// This endpoint returns a Login Url that can be used in a browser or embedded in an I-Frame to allow in person signing.  The signer Login type must be configured as In-Person.
    /// </remarks>
    /// <param name="pkiEzsignfoldersignerassociationID">The unique ID of the Ezsignfoldersignerassociation</param>
    pplx::task<std::shared_ptr<Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response>> ezsignfoldersignerassociationGetInPersonLoginUrlV1(
        int32_t pkiEzsignfoldersignerassociationID
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsignfoldersignerassociation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsignfoldersignerassociationID">The unique ID of the Ezsignfoldersignerassociation</param>
    pplx::task<std::shared_ptr<Ezsignfoldersignerassociation_getObject_v1_Response>> ezsignfoldersignerassociationGetObjectV1(
        int32_t pkiEzsignfoldersignerassociationID
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectEzsignfoldersignerassociationApi_H_ */

