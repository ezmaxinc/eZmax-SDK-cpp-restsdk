/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.40
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Apikey_createObject_v1_Request.h
 *
 * Request for the /1/object/apikey/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_createObject_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_createObject_v1_Request_H_


#include "../ModelBase.h"

#include "Apikey_RequestCompound.h"
#include "Apikey_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/apikey/createObject API Request
/// </summary>
class  Apikey_createObject_v1_Request
    : public ModelBase
{
public:
    Apikey_createObject_v1_Request();
    virtual ~Apikey_createObject_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Apikey_createObject_v1_Request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Apikey_Request> getObjApikey() const;
    bool objApikeyIsSet() const;
    void unsetObjApikey();

    void setObjApikey(const std::shared_ptr<Apikey_Request>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Apikey_RequestCompound> getObjApikeyCompound() const;
    bool objApikeyCompoundIsSet() const;
    void unsetObjApikeyCompound();

    void setObjApikeyCompound(const std::shared_ptr<Apikey_RequestCompound>& value);


protected:
    std::shared_ptr<Apikey_Request> m_ObjApikey;
    bool m_ObjApikeyIsSet;
    std::shared_ptr<Apikey_RequestCompound> m_ObjApikeyCompound;
    bool m_ObjApikeyCompoundIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Apikey_createObject_v1_Request_H_ */
