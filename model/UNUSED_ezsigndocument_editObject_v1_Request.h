/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * UNUSED_ezsigndocument_editObject_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/editObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_UNUSED_ezsigndocument_editObject_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_UNUSED_ezsigndocument_editObject_v1_Request_H_


#include "../ModelBase.h"

#include "Ezsigndocument_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/ezsigndocument/editObject API Request
/// </summary>
class  UNUSED_ezsigndocument_editObject_v1_Request
    : public ModelBase
{
public:
    UNUSED_ezsigndocument_editObject_v1_Request();
    virtual ~UNUSED_ezsigndocument_editObject_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UNUSED_ezsigndocument_editObject_v1_Request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsigndocument_Request> getObjEzsigndocument() const;
    bool objEzsigndocumentIsSet() const;
    void unsetObjEzsigndocument();

    void setObjEzsigndocument(const std::shared_ptr<Ezsigndocument_Request>& value);


protected:
    std::shared_ptr<Ezsigndocument_Request> m_ObjEzsigndocument;
    bool m_ObjEzsigndocumentIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_UNUSED_ezsigndocument_editObject_v1_Request_H_ */
