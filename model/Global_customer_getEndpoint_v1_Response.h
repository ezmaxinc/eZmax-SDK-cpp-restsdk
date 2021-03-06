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
 * Global_customer_getEndpoint_v1_Response.h
 *
 * Response for the /1/customer/{pksCustomerCode}/endpoint API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Global_customer_getEndpoint_v1_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Global_customer_getEndpoint_v1_Response_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Response for the /1/customer/{pksCustomerCode}/endpoint API Request
/// </summary>
class  Global_customer_getEndpoint_v1_Response
    : public ModelBase
{
public:
    Global_customer_getEndpoint_v1_Response();
    virtual ~Global_customer_getEndpoint_v1_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Global_customer_getEndpoint_v1_Response members

    /// <summary>
    /// The endpoint&#39;s URL
    /// </summary>
    utility::string_t getSEndpointURL() const;
    bool sEndpointURLIsSet() const;
    void unsetSEndpointURL();

    void setSEndpointURL(const utility::string_t& value);


protected:
    utility::string_t m_SEndpointURL;
    bool m_SEndpointURLIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Global_customer_getEndpoint_v1_Response_H_ */
