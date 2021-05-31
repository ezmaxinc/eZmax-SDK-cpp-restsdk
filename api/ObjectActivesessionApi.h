/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.44
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ObjectActivesessionApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ObjectActivesessionApi_H_
#define COM_EZMAX_API_ObjectActivesessionApi_H_


#include "../ApiClient.h"

#include "Activesession_getCurrent_v1_Response.h"


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ObjectActivesessionApi 
{
public:

    explicit ObjectActivesessionApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ObjectActivesessionApi();

    /// <summary>
    /// Get Current Activesession
    /// </summary>
    /// <remarks>
    /// Retrieve the details about the current activesession
    /// </remarks>
    pplx::task<std::shared_ptr<Activesession_getCurrent_v1_Response>> activesessionGetCurrentV1(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ObjectActivesessionApi_H_ */

