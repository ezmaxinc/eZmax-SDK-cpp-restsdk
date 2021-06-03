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
 * Ezsignfoldersignerassociation_createObject_v1_Response.h
 *
 * Response for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Response_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Response_H_


#include "../ModelBase.h"

#include "Common_Response_objDebug.h"
#include "Common_Response.h"
#include "Ezsignfoldersignerassociation_createObject_v1_Response_mPayload.h"
#include "Common_Response_objDebugPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Response for the /1/object/ezsignfoldersignerassociation/createObject API Request
/// </summary>
class  Ezsignfoldersignerassociation_createObject_v1_Response
    : public ModelBase
{
public:
    Ezsignfoldersignerassociation_createObject_v1_Response();
    virtual ~Ezsignfoldersignerassociation_createObject_v1_Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfoldersignerassociation_createObject_v1_Response members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignfoldersignerassociation_createObject_v1_Response_mPayload> getMPayload() const;
    bool mPayloadIsSet() const;
    void unsetMPayload();

    void setMPayload(const std::shared_ptr<Ezsignfoldersignerassociation_createObject_v1_Response_mPayload>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Response_objDebugPayload> getObjDebugPayload() const;
    bool objDebugPayloadIsSet() const;
    void unsetObjDebugPayload();

    void setObjDebugPayload(const std::shared_ptr<Common_Response_objDebugPayload>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Common_Response_objDebug> getObjDebug() const;
    bool objDebugIsSet() const;
    void unsetObjDebug();

    void setObjDebug(const std::shared_ptr<Common_Response_objDebug>& value);


protected:
    std::shared_ptr<Ezsignfoldersignerassociation_createObject_v1_Response_mPayload> m_MPayload;
    bool m_MPayloadIsSet;
    std::shared_ptr<Common_Response_objDebugPayload> m_ObjDebugPayload;
    bool m_ObjDebugPayloadIsSet;
    std::shared_ptr<Common_Response_objDebug> m_ObjDebug;
    bool m_ObjDebugIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Response_H_ */
