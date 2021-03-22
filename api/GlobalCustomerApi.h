/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.38
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GlobalCustomerApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_GlobalCustomerApi_H_
#define COM_EZMAX_API_GlobalCustomerApi_H_


#include "../ApiClient.h"

#include "Common_Response_Error.h"
#include "Global_customer_getEndpoint_v1_Response.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  GlobalCustomerApi 
{
public:

    explicit GlobalCustomerApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~GlobalCustomerApi();

    /// <summary>
    /// Get customer endpoint
    /// </summary>
    /// <remarks>
    /// Retrieve the customer&#39;s specific server endpoint where to send requests. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer&#39;s data is stored.
    /// </remarks>
    /// <param name="pksCustomerCode">The customer code assigned to your account</param>
    /// <param name="sInfrastructureproductCode">The infrastructure product Code  If undefined, \&quot;appcluster01\&quot; is assumed (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Global_customer_getEndpoint_v1_Response>> globalCustomerGetEndpointV1(
        utility::string_t pksCustomerCode,
        boost::optional<utility::string_t> sInfrastructureproductCode
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_GlobalCustomerApi_H_ */

