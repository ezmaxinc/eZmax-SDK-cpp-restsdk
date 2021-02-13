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
 * ModuleUserApi.h
 *
 * 
 */

#ifndef COM_EZMAX_API_ModuleUserApi_H_
#define COM_EZMAX_API_ModuleUserApi_H_


#include "../ApiClient.h"

#include "User_createEzsignuser_v1_Request.h"
#include "User_createEzsignuser_v1_Response.h"
#include <vector>


#include <boost/optional.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;



class  ModuleUserApi 
{
public:

    explicit ModuleUserApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ModuleUserApi();

    /// <summary>
    /// Create a new User of type Ezsignuser
    /// </summary>
    /// <remarks>
    /// The endpoint allows to initiate the creation or a user of type Ezsignuser.  The user will be created only once the email verification process will be completed
    /// </remarks>
    /// <param name="userCreateEzsignuserV1Request"></param>
    pplx::task<std::shared_ptr<User_createEzsignuser_v1_Response>> userCreateEzsignuserV1(
        std::vector<std::shared_ptr<User_createEzsignuser_v1_Request>> userCreateEzsignuserV1Request
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}

#endif /* COM_EZMAX_API_ModuleUserApi_H_ */

