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
 * Common_Response_Error.h
 *
 * Generic Error Message
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_Error_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_Error_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Generic Error Message
/// </summary>
class  Common_Response_Error
    : public ModelBase
{
public:
    Common_Response_Error();
    virtual ~Common_Response_Error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Response_Error members

    /// <summary>
    /// More detail about the error
    /// </summary>
    utility::string_t getSErrorMessage() const;
    bool sErrorMessageIsSet() const;
    void unsetSErrorMessage();

    void setSErrorMessage(const utility::string_t& value);

    /// <summary>
    /// The error code. See documentation for valid values
    /// </summary>
    utility::string_t getEErrorCode() const;
    bool eErrorCodeIsSet() const;
    void unsetEErrorCode();

    void setEErrorCode(const utility::string_t& value);


protected:
    utility::string_t m_SErrorMessage;
    bool m_SErrorMessageIsSet;
    utility::string_t m_EErrorCode;
    bool m_EErrorCodeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_Error_H_ */
