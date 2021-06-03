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
 * UNUSED_ezsignsignature_editObject_v1_Request.h
 *
 * Request for the /1/object/ezsignsignature/editObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_UNUSED_ezsignsignature_editObject_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_UNUSED_ezsignsignature_editObject_v1_Request_H_


#include "../ModelBase.h"

#include "Ezsignsignature_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/ezsignsignature/editObject API Request
/// </summary>
class  UNUSED_ezsignsignature_editObject_v1_Request
    : public ModelBase
{
public:
    UNUSED_ezsignsignature_editObject_v1_Request();
    virtual ~UNUSED_ezsignsignature_editObject_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UNUSED_ezsignsignature_editObject_v1_Request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignsignature_Request> getObjEzsignsignature() const;
    bool objEzsignsignatureIsSet() const;
    void unsetObjEzsignsignature();

    void setObjEzsignsignature(const std::shared_ptr<Ezsignsignature_Request>& value);


protected:
    std::shared_ptr<Ezsignsignature_Request> m_ObjEzsignsignature;
    bool m_ObjEzsignsignatureIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_UNUSED_ezsignsignature_editObject_v1_Request_H_ */
