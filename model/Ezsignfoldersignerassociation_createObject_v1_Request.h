/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.37
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
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
