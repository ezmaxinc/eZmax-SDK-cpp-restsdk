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
 * Webhook_Response.h
 *
 * A webhook object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_Response_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A webhook object
/// </summary>
class  Webhook_Response
    : public ModelBase
{
public:
    Webhook_Response();
    virtual ~Webhook_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Webhook_Response members

    /// <summary>
    /// The Webhook ID. This value is visible in the admin interface.
    /// </summary>
    int32_t getPkiWebhookID() const;
    bool pkiWebhookIDIsSet() const;
    void unsetPkiWebhookID();

    void setPkiWebhookID(int32_t value);

    /// <summary>
    /// The Module generating the Event.
    /// </summary>
    utility::string_t getEWebhookModule() const;
    bool eWebhookModuleIsSet() const;
    void unsetEWebhookModule();

    void setEWebhookModule(const utility::string_t& value);

    /// <summary>
    /// This Ezsign Event. This property will be set only if the Module is \&quot;Ezsign\&quot;.
    /// </summary>
    utility::string_t getEWebhookEzsignevent() const;
    bool eWebhookEzsigneventIsSet() const;
    void unsetEWebhookEzsignevent();

    void setEWebhookEzsignevent(const utility::string_t& value);

    /// <summary>
    /// The customer code assigned to your account
    /// </summary>
    utility::string_t getPksCustomerCode() const;
    bool pksCustomerCodeIsSet() const;
    void unsetPksCustomerCode();

    void setPksCustomerCode(const utility::string_t& value);

    /// <summary>
    /// The url being called
    /// </summary>
    utility::string_t getSWebhookUrl() const;
    bool sWebhookUrlIsSet() const;
    void unsetSWebhookUrl();

    void setSWebhookUrl(const utility::string_t& value);

    /// <summary>
    /// The email that will receive the webhook in case all attempts fail.
    /// </summary>
    utility::string_t getSWebhookEmailfailed() const;
    bool sWebhookEmailfailedIsSet() const;
    void unsetSWebhookEmailfailed();

    void setSWebhookEmailfailed(const utility::string_t& value);

    /// <summary>
    /// This Management Event. This property will be set only if the Module is \&quot;Management\&quot;.
    /// </summary>
    utility::string_t getEWebhookManagementevent() const;
    bool eWebhookManagementeventIsSet() const;
    void unsetEWebhookManagementevent();

    void setEWebhookManagementevent(const utility::string_t& value);


protected:
    int32_t m_PkiWebhookID;
    bool m_PkiWebhookIDIsSet;
    utility::string_t m_EWebhookModule;
    bool m_EWebhookModuleIsSet;
    utility::string_t m_EWebhookEzsignevent;
    bool m_EWebhookEzsigneventIsSet;
    utility::string_t m_PksCustomerCode;
    bool m_PksCustomerCodeIsSet;
    utility::string_t m_SWebhookUrl;
    bool m_SWebhookUrlIsSet;
    utility::string_t m_SWebhookEmailfailed;
    bool m_SWebhookEmailfailedIsSet;
    utility::string_t m_EWebhookManagementevent;
    bool m_EWebhookManagementeventIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Webhook_Response_H_ */
