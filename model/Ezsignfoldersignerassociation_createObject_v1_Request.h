/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfoldersignerassociation_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Request_H_


#include "../ModelBase.h"

#include "Ezsignfoldersignerassociation_RequestCompound.h"
#include "Ezsignfoldersignerassociation_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/ezsignfoldersignerassociation/createObject API Request
/// </summary>
class  Ezsignfoldersignerassociation_createObject_v1_Request
    : public ModelBase
{
public:
    Ezsignfoldersignerassociation_createObject_v1_Request();
    virtual ~Ezsignfoldersignerassociation_createObject_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignfoldersignerassociation_createObject_v1_Request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignfoldersignerassociation_Request> getObjEzsignfoldersignerassociation() const;
    bool objEzsignfoldersignerassociationIsSet() const;
    void unsetObjEzsignfoldersignerassociation();

    void setObjEzsignfoldersignerassociation(const std::shared_ptr<Ezsignfoldersignerassociation_Request>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound> getObjEzsignfoldersignerassociationCompound() const;
    bool objEzsignfoldersignerassociationCompoundIsSet() const;
    void unsetObjEzsignfoldersignerassociationCompound();

    void setObjEzsignfoldersignerassociationCompound(const std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound>& value);


protected:
    std::shared_ptr<Ezsignfoldersignerassociation_Request> m_ObjEzsignfoldersignerassociation;
    bool m_ObjEzsignfoldersignerassociationIsSet;
    std::shared_ptr<Ezsignfoldersignerassociation_RequestCompound> m_ObjEzsignfoldersignerassociationCompound;
    bool m_ObjEzsignfoldersignerassociationCompoundIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignfoldersignerassociation_createObject_v1_Request_H_ */
