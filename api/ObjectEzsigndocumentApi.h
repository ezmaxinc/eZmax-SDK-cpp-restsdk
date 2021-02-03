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
 * ObjectEzsigndocumentApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectEzsigndocumentApi_H_
#define COM_EZMAX_API_ObjectEzsigndocumentApi_H_


#include "../ApiClient.h"

#include "Common_Response_Error.h"
#include "Ezsigndocument_applyEzsigntemplate_v1_Request.h"
#include "Ezsigndocument_applyEzsigntemplate_v1_Response.h"
#include "Ezsigndocument_createObject_v1_Request.h"
#include "Ezsigndocument_createObject_v1_Response.h"
#include "Ezsigndocument_deleteObject_v1_Response.h"
#include "Ezsigndocument_editObject_v1_Request.h"
#include "Ezsigndocument_editObject_v1_Response.h"
#include "Ezsigndocument_getDownloadUrl_v1_Response.h"
#include "Ezsigndocument_getObject_v1_Response.h"
#include <vector>
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectEzsigndocumentApi 
{
public:

    explicit ObjectEzsigndocumentApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectEzsigndocumentApi();

    /// <summary>
    /// Apply an Ezsign Template to the Ezsigndocument.
    /// </summary>
    /// <remarks>
    /// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
    /// </remarks>
    /// <param name="pkiEzsigndocumentID">The unique ID of the Ezsigndocument</param>
    /// <param name="ezsigndocumentApplyEzsigntemplateV1Request"></param>
    pplx::task<std::shared_ptr<Ezsigndocument_applyEzsigntemplate_v1_Response>> ezsigndocumentApplyEzsigntemplateV1(
        int32_t pkiEzsigndocumentID,
        std::shared_ptr<Ezsigndocument_applyEzsigntemplate_v1_Request> ezsigndocumentApplyEzsigntemplateV1Request
    ) const;
    /// <summary>
    /// Create a new Ezsigndocument
    /// </summary>
    /// <remarks>
    /// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
    /// </remarks>
    /// <param name="ezsigndocumentCreateObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsigndocument_createObject_v1_Response>> ezsigndocumentCreateObjectV1(
        std::vector<std::shared_ptr<Ezsigndocument_createObject_v1_Request>> ezsigndocumentCreateObjectV1Request
    ) const;
    /// <summary>
    /// Delete an existing Ezsigndocument
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsigndocumentID">The unique ID of the Ezsigndocument</param>
    pplx::task<std::shared_ptr<Ezsigndocument_deleteObject_v1_Response>> ezsigndocumentDeleteObjectV1(
        int32_t pkiEzsigndocumentID
    ) const;
    /// <summary>
    /// Modify an existing Ezsigndocument
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsigndocumentID">The unique ID of the Ezsigndocument</param>
    /// <param name="ezsigndocumentEditObjectV1Request"></param>
    pplx::task<std::shared_ptr<Ezsigndocument_editObject_v1_Response>> ezsigndocumentEditObjectV1(
        int32_t pkiEzsigndocumentID,
        std::shared_ptr<Ezsigndocument_editObject_v1_Request> ezsigndocumentEditObjectV1Request
    ) const;
    /// <summary>
    /// Retrieve a URL to download documents.
    /// </summary>
    /// <remarks>
    /// This endpoint returns URLs to different files that can be downloaded during the signing process.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
    /// </remarks>
    /// <param name="pkiEzsigndocumentID">The unique ID of the Ezsigndocument</param>
    /// <param name="eDocumentType">The type of document to retrieve.  1. **Initial** Is the initial document before any signature were applied. 2. **Signed** Is the final document once all signatures were applied. 3. **Proofdocument** Is the evidence report. 4. **Proof** Is the complete evidence archive including all of the above and more. </param>
    pplx::task<std::shared_ptr<Ezsigndocument_getDownloadUrl_v1_Response>> ezsigndocumentGetDownloadUrlV1(
        int32_t pkiEzsigndocumentID,
        utility::string_t eDocumentType
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsigndocument&#39;s children IDs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsigndocumentID">The unique ID of the Ezsigndocument</param>
    pplx::task<void> ezsigndocumentGetObjectGetChildrenV1(
        int32_t pkiEzsigndocumentID
    ) const;
    /// <summary>
    /// Retrieve an existing Ezsigndocument
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="pkiEzsigndocumentID">The unique ID of the Ezsigndocument</param>
    pplx::task<std::shared_ptr<Ezsigndocument_getObject_v1_Response>> ezsigndocumentGetObjectV1(
        int32_t pkiEzsigndocumentID
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectEzsigndocumentApi_H_ */

