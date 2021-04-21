/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
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

