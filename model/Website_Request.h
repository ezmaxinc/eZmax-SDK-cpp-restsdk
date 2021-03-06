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
 * Website_Request.h
 *
 * A Website Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Website_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Website_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Website Object
/// </summary>
class  Website_Request
    : public ModelBase
{
public:
    Website_Request();
    virtual ~Website_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Website_Request members

    /// <summary>
    /// The unique ID of the Websitetype.  Valid values:  |Value|Description| |-|-| |1|Website| |2|Twitter| |3|Facebook| |4|Survey|
    /// </summary>
    int32_t getFkiWebsitetypeID() const;
    bool fkiWebsitetypeIDIsSet() const;
    void unsetFkiWebsitetypeID();

    void setFkiWebsitetypeID(int32_t value);

    /// <summary>
    /// The URL of the website.
    /// </summary>
    utility::string_t getSWebsiteAddress() const;
    bool sWebsiteAddressIsSet() const;
    void unsetSWebsiteAddress();

    void setSWebsiteAddress(const utility::string_t& value);


protected:
    int32_t m_FkiWebsitetypeID;
    bool m_FkiWebsitetypeIDIsSet;
    utility::string_t m_SWebsiteAddress;
    bool m_SWebsiteAddressIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Website_Request_H_ */
