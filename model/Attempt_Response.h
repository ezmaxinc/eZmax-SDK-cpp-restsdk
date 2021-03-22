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
 * Attempt_Response.h
 *
 * An Attempt object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Attempt_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Attempt_Response_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Attempt object
/// </summary>
class  Attempt_Response
    : public ModelBase
{
public:
    Attempt_Response();
    virtual ~Attempt_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Attempt_Response members

    /// <summary>
    /// Represent a Date Time. The timezone is the one configured in the User&#39;s profile.
    /// </summary>
    utility::string_t getDtAttemptStart() const;
    bool dtAttemptStartIsSet() const;
    void unsetDtAttemptStart();

    void setDtAttemptStart(const utility::string_t& value);

    /// <summary>
    /// The Success or Failure message of the attempt when we tried to call the URL to deliver the webhook event.
    /// </summary>
    utility::string_t getSAttemptResult() const;
    bool sAttemptResultIsSet() const;
    void unsetSAttemptResult();

    void setSAttemptResult(const utility::string_t& value);

    /// <summary>
    /// The number of second it took to process the webhook or get an error
    /// </summary>
    int32_t getIAttemptDuration() const;
    bool iAttemptDurationIsSet() const;
    void unsetIAttemptDuration();

    void setIAttemptDuration(int32_t value);


protected:
    utility::string_t m_DtAttemptStart;
    bool m_DtAttemptStartIsSet;
    utility::string_t m_SAttemptResult;
    bool m_SAttemptResultIsSet;
    int32_t m_IAttemptDuration;
    bool m_IAttemptDurationIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Attempt_Response_H_ */
