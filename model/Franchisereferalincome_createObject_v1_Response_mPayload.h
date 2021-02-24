/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Franchisereferalincome_createObject_v1_Response_mPayload.h
 *
 * Payload for the /1/object/franchisereferalincome/createObject API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_createObject_v1_Response_mPayload_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_createObject_v1_Response_mPayload_H_


#include "../ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Payload for the /1/object/franchisereferalincome/createObject API Request
/// </summary>
class  Franchisereferalincome_createObject_v1_Response_mPayload
    : public ModelBase
{
public:
    Franchisereferalincome_createObject_v1_Response_mPayload();
    virtual ~Franchisereferalincome_createObject_v1_Response_mPayload();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Franchisereferalincome_createObject_v1_Response_mPayload members

    /// <summary>
    /// An array of unique IDs representing the object that were requested to be created.  They are returned in the same order as the array containing the objects to be created that was sent in the request.
    /// </summary>
    std::vector<int32_t>& getAPkiFranchisereferalincomeID();
    bool aPkiFranchisereferalincomeIDIsSet() const;
    void unsetA_pkiFranchisereferalincomeID();

    void setAPkiFranchisereferalincomeID(std::vector<int32_t> value);


protected:
    std::vector<int32_t> m_A_pkiFranchisereferalincomeID;
    bool m_A_pkiFranchisereferalincomeIDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_createObject_v1_Response_mPayload_H_ */
