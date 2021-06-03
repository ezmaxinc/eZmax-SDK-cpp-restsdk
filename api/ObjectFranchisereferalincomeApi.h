/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ObjectFranchisereferalincomeApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectFranchisereferalincomeApi_H_
#define COM_EZMAX_API_ObjectFranchisereferalincomeApi_H_


#include "../ApiClient.h"

#include "Franchisereferalincome_createObject_v1_Request.h"
#include "Franchisereferalincome_createObject_v1_Response.h"
#include <vector>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectFranchisereferalincomeApi 
{
public:

    explicit ObjectFranchisereferalincomeApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectFranchisereferalincomeApi();

    /// <summary>
    /// Create a new Franchisereferalincome
    /// </summary>
    /// <remarks>
    /// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
    /// </remarks>
    /// <param name="franchisereferalincomeCreateObjectV1Request"></param>
    pplx::task<std::shared_ptr<Franchisereferalincome_createObject_v1_Response>> franchisereferalincomeCreateObjectV1(
        std::vector<std::shared_ptr<Franchisereferalincome_createObject_v1_Request>> franchisereferalincomeCreateObjectV1Request
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectFranchisereferalincomeApi_H_ */

