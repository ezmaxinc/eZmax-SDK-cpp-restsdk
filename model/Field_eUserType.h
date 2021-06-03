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
 * Field_eUserType.h
 *
 * The user type of the User.
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eUserType_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eUserType_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

class  Field_eUserType
    : public ModelBase
{
public:
    Field_eUserType();
    virtual ~Field_eUserType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    enum class eField_eUserType
    {
        Field_eUserType_AGENTBROKER,
        Field_eUserType_ASSISTANT,
        Field_eUserType_ATTENDANCE,
        Field_eUserType_CUSTOMER,
        Field_eUserType_EMPLOYEE,
        Field_eUserType_EZCOM,
        Field_eUserType_EZSIGNSIGNER,
        Field_eUserType_EZSIGNUSER,
        Field_eUserType_FRANCHISECUSTOMERSERVER,
        Field_eUserType_NORMAL,
        Field_eUserType_REWARDADMINISTRATION,
        Field_eUserType_REWARDMEMBER,
        Field_eUserType_REWARDREPRESENTATIVE,
        Field_eUserType_REWARDCUSTOMER,
        Field_eUserType_REWARDDISTRIBUTORSERVER,
        Field_eUserType_SUPPLIER,
        Field_eUserType_VETRXCUSTOMER,
        Field_eUserType_VETRXCUSTOMERGROUP,
        Field_eUserType_VETRXCUSTOMERSERVER,
        Field_eUserType_VETRXMANUFACTURER,
        Field_eUserType_VETRXVENDOR,
    };

    eField_eUserType getValue() const;
    void setValue(eField_eUserType const value);

    protected:
        eField_eUserType m_value;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Field_eUserType_H_ */
