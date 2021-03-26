/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_getAutocomplete_v1_Response_mPayload.h
 *
 * Generic Autocomplete Response
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_getAutocomplete_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_getAutocomplete_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Generic Autocomplete Response
/// </summary>
class  Common_getAutocomplete_v1_Response_mPayload
    : public ModelBase
{
public:
    Common_getAutocomplete_v1_Response_mPayload();
    virtual ~Common_getAutocomplete_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_getAutocomplete_v1_Response_mPayload members

    /// <summary>
    /// The Category (ie group) for the dropdown or an empty string if not categorized
    /// </summary>
    utility::string_t getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();

    void setGroup(const utility::string_t& value);

    /// <summary>
    /// The Unique ID of the element
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// The Description of the element
    /// </summary>
    utility::string_t getOption() const;
    bool optionIsSet() const;
    void unsetOption();

    void setOption(const utility::string_t& value);


protected:
    utility::string_t m_Group;
    bool m_GroupIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Option;
    bool m_OptionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_getAutocomplete_v1_Response_mPayload_H_ */
