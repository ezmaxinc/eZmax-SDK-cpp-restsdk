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
 * ObjectFranchisebrokerApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectFranchisebrokerApi_H_
#define COM_EZMAX_API_ObjectFranchisebrokerApi_H_


#include "../ApiClient.h"

#include "Common_getAutocomplete_v1_Response.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectFranchisebrokerApi 
{
public:

    explicit ObjectFranchisebrokerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectFranchisebrokerApi();

    /// <summary>
    /// Retrieve Franchisebrokers and IDs
    /// </summary>
    /// <remarks>
    /// Get the list of Franchisebrokers to be used in a dropdown or autocomplete control.
    /// </remarks>
    /// <param name="sSelector">The type of Franchisebrokers to return</param>
    /// <param name="sQuery">Allow to filter on the option value (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Common_getAutocomplete_v1_Response>> franchisebrokerGetAutocompleteV1(
        utility::string_t sSelector,
        boost::optional<utility::string_t> sQuery
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectFranchisebrokerApi_H_ */

