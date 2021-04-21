/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsignature_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsignsignature/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_createObject_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_createObject_v1_Request_H_


#include "../ModelBase.h"

#include "Ezsignsignature_Request.h"
#include "Ezsignsignature_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/ezsignsignature/createObject API Request
/// </summary>
class  Ezsignsignature_createObject_v1_Request
    : public ModelBase
{
public:
    Ezsignsignature_createObject_v1_Request();
    virtual ~Ezsignsignature_createObject_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignsignature_createObject_v1_Request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignsignature_Request> getObjEzsignsignature() const;
    bool objEzsignsignatureIsSet() const;
    void unsetObjEzsignsignature();

    void setObjEzsignsignature(const std::shared_ptr<Ezsignsignature_Request>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignsignature_RequestCompound> getObjEzsignsignatureCompound() const;
    bool objEzsignsignatureCompoundIsSet() const;
    void unsetObjEzsignsignatureCompound();

    void setObjEzsignsignatureCompound(const std::shared_ptr<Ezsignsignature_RequestCompound>& value);


protected:
    std::shared_ptr<Ezsignsignature_Request> m_ObjEzsignsignature;
    bool m_ObjEzsignsignatureIsSet;
    std::shared_ptr<Ezsignsignature_RequestCompound> m_ObjEzsignsignatureCompound;
    bool m_ObjEzsignsignatureCompoundIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsignature_createObject_v1_Request_H_ */
