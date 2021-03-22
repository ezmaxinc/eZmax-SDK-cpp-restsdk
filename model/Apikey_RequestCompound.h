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
 * Apikey_RequestCompound.h
 *
 * An Apikey Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_RequestCompound_H_


#include "../ModelBase.h"

#include "Apikey_Request.h"
#include "Multilingual_ApikeyDescription.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Apikey Object and children to create a complete structure
/// </summary>
class  Apikey_RequestCompound
    : public ModelBase
{
public:
    Apikey_RequestCompound();
    virtual ~Apikey_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Apikey_RequestCompound members

    /// <summary>
    /// The unique ID of the User
    /// </summary>
    int32_t getFkiUserID() const;
    bool fkiUserIDIsSet() const;
    void unsetFkiUserID();

    void setFkiUserID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Multilingual_ApikeyDescription> getObjApikeyDescription() const;
    bool objApikeyDescriptionIsSet() const;
    void unsetObjApikeyDescription();

    void setObjApikeyDescription(const std::shared_ptr<Multilingual_ApikeyDescription>& value);


protected:
    int32_t m_FkiUserID;
    bool m_FkiUserIDIsSet;
    std::shared_ptr<Multilingual_ApikeyDescription> m_ObjApikeyDescription;
    bool m_ObjApikeyDescriptionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_RequestCompound_H_ */
