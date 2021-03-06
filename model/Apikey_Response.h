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
 * Apikey_Response.h
 *
 * An Apikey Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_Response_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Common_Audit.h"
#include "Multilingual_ApikeyDescription.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Apikey Object
/// </summary>
class  Apikey_Response
    : public ModelBase
{
public:
    Apikey_Response();
    virtual ~Apikey_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Apikey_Response members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Multilingual_ApikeyDescription> getObjApikeyDescription() const;
    bool objApikeyDescriptionIsSet() const;
    void unsetObjApikeyDescription();

    void setObjApikeyDescription(const std::shared_ptr<Multilingual_ApikeyDescription>& value);

    /// <summary>
    /// The secret token for the API key.  This will be returned only on creation.
    /// </summary>
    utility::string_t getSComputedToken() const;
    bool sComputedTokenIsSet() const;
    void unsetSComputedToken();

    void setSComputedToken(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Apikey
    /// </summary>
    int32_t getPkiApikeyID() const;
    bool pkiApikeyIDIsSet() const;
    void unsetPkiApikeyID();

    void setPkiApikeyID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Audit> getObjAudit() const;
    bool objAuditIsSet() const;
    void unsetObjAudit();

    void setObjAudit(const std::shared_ptr<Common_Audit>& value);


protected:
    std::shared_ptr<Multilingual_ApikeyDescription> m_ObjApikeyDescription;
    bool m_ObjApikeyDescriptionIsSet;
    utility::string_t m_SComputedToken;
    bool m_SComputedTokenIsSet;
    int32_t m_PkiApikeyID;
    bool m_PkiApikeyIDIsSet;
    std::shared_ptr<Common_Audit> m_ObjAudit;
    bool m_ObjAuditIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_Response_H_ */
