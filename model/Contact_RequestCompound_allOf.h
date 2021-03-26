/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Contact_RequestCompound_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Contact_RequestCompound_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Contact_RequestCompound_allOf_H_


#include "../ModelBase.h"

#include "Contactinformations_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Contact_RequestCompound_allOf
    : public ModelBase
{
public:
    Contact_RequestCompound_allOf();
    virtual ~Contact_RequestCompound_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Contact_RequestCompound_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Contactinformations_RequestCompound> getObjContactinformations() const;
    bool objContactinformationsIsSet() const;
    void unsetObjContactinformations();

    void setObjContactinformations(const std::shared_ptr<Contactinformations_RequestCompound>& value);


protected:
    std::shared_ptr<Contactinformations_RequestCompound> m_ObjContactinformations;
    bool m_ObjContactinformationsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Contact_RequestCompound_allOf_H_ */
