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
 * Franchisereferalincome_createObject_v1_Request.h
 *
 * Request for the /1/object/franchisereferalincome/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_createObject_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_createObject_v1_Request_H_


#include "../ModelBase.h"

#include "Franchisereferalincome_RequestCompound.h"
#include "Franchisereferalincome_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/franchisereferalincome/createObject API Request
/// </summary>
class  Franchisereferalincome_createObject_v1_Request
    : public ModelBase
{
public:
    Franchisereferalincome_createObject_v1_Request();
    virtual ~Franchisereferalincome_createObject_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Franchisereferalincome_createObject_v1_Request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Franchisereferalincome_Request> getObjFranchisereferalincome() const;
    bool objFranchisereferalincomeIsSet() const;
    void unsetObjFranchisereferalincome();

    void setObjFranchisereferalincome(const std::shared_ptr<Franchisereferalincome_Request>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Franchisereferalincome_RequestCompound> getObjFranchisereferalincomeCompound() const;
    bool objFranchisereferalincomeCompoundIsSet() const;
    void unsetObjFranchisereferalincomeCompound();

    void setObjFranchisereferalincomeCompound(const std::shared_ptr<Franchisereferalincome_RequestCompound>& value);


protected:
    std::shared_ptr<Franchisereferalincome_Request> m_ObjFranchisereferalincome;
    bool m_ObjFranchisereferalincomeIsSet;
    std::shared_ptr<Franchisereferalincome_RequestCompound> m_ObjFranchisereferalincomeCompound;
    bool m_ObjFranchisereferalincomeCompoundIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_createObject_v1_Request_H_ */
