/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Multilingual_ApikeyDescription.h
 *
 * Description of the API Key  
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Multilingual_ApikeyDescription_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Multilingual_ApikeyDescription_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Description of the API Key  
/// </summary>
class  Multilingual_ApikeyDescription
    : public ModelBase
{
public:
    Multilingual_ApikeyDescription();
    virtual ~Multilingual_ApikeyDescription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Multilingual_ApikeyDescription members

    /// <summary>
    /// Value in French
    /// </summary>
    utility::string_t getSApikeyDescription1() const;
    bool sApikeyDescription1IsSet() const;
    void unsetSApikeyDescription1();

    void setSApikeyDescription1(const utility::string_t& value);

    /// <summary>
    /// Value in English
    /// </summary>
    utility::string_t getSApikeyDescription2() const;
    bool sApikeyDescription2IsSet() const;
    void unsetSApikeyDescription2();

    void setSApikeyDescription2(const utility::string_t& value);


protected:
    utility::string_t m_SApikeyDescription1;
    bool m_SApikeyDescription1IsSet;
    utility::string_t m_SApikeyDescription2;
    bool m_SApikeyDescription2IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Multilingual_ApikeyDescription_H_ */
