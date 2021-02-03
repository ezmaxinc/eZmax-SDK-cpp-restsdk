/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Contactinformations_Request.h
 *
 * A Contactinformations Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Contactinformations_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Contactinformations_Request_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Contactinformations Object
/// </summary>
class  Contactinformations_Request
    : public ModelBase
{
public:
    Contactinformations_Request();
    virtual ~Contactinformations_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Contactinformations_Request members

    /// <summary>
    /// The index in the a_objAddress array (zero based index) representing the Address object that should become the default one.  You can leave the value to 0 if the array is empty.
    /// </summary>
    int32_t getIAddressDefault() const;
    bool iAddressDefaultIsSet() const;
    void unsetIAddressDefault();

    void setIAddressDefault(int32_t value);

    /// <summary>
    /// The index in the a_objPhone array (zero based index) representing the Phone object that should become the default one.  You can leave the value to 0 if the array is empty.
    /// </summary>
    int32_t getIPhoneDefault() const;
    bool iPhoneDefaultIsSet() const;
    void unsetIPhoneDefault();

    void setIPhoneDefault(int32_t value);

    /// <summary>
    /// The index in the a_objEmail array (zero based index) representing the Email object that should become the default one.  You can leave the value to 0 if the array is empty.
    /// </summary>
    int32_t getIEmailDefault() const;
    bool iEmailDefaultIsSet() const;
    void unsetIEmailDefault();

    void setIEmailDefault(int32_t value);

    /// <summary>
    /// The index in the a_objWebsite array (zero based index) representing the Website object that should become the default one.  You can leave the value to 0 if the array is empty.
    /// </summary>
    int32_t getIWebsiteDefault() const;
    bool iWebsiteDefaultIsSet() const;
    void unsetIWebsiteDefault();

    void setIWebsiteDefault(int32_t value);


protected:
    int32_t m_IAddressDefault;
    bool m_IAddressDefaultIsSet;
    int32_t m_IPhoneDefault;
    bool m_IPhoneDefaultIsSet;
    int32_t m_IEmailDefault;
    bool m_IEmailDefaultIsSet;
    int32_t m_IWebsiteDefault;
    bool m_IWebsiteDefaultIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Contactinformations_Request_H_ */
