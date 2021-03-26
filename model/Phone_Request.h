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
 * Phone_Request.h
 *
 * A Phone Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Phone_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Phone_Request_H_


#include "../ModelBase.h"

#include "Field_ePhoneType.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Phone Object
/// </summary>
class  Phone_Request
    : public ModelBase
{
public:
    Phone_Request();
    virtual ~Phone_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Phone_Request members

    /// <summary>
    /// The unique ID of the Phonetype.  Valid values:  |Value|Description| |-|-| |1|Office| |2|Home| |3|Mobile| |4|Fax| |5|Pager| |6|Toll Free|
    /// </summary>
    int32_t getFkiPhonetypeID() const;
    bool fkiPhonetypeIDIsSet() const;
    void unsetFkiPhonetypeID();

    void setFkiPhonetypeID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Field_ePhoneType> getEPhoneType() const;
    bool ePhoneTypeIsSet() const;
    void unsetEPhoneType();

    void setEPhoneType(const std::shared_ptr<Field_ePhoneType>& value);

    /// <summary>
    /// The region of the phone number. (For a North America Number only)  The region is the \&quot;514\&quot; section in this sample phone number: (514) 990-1516 x123
    /// </summary>
    utility::string_t getSPhoneRegion() const;
    bool sPhoneRegionIsSet() const;
    void unsetSPhoneRegion();

    void setSPhoneRegion(const utility::string_t& value);

    /// <summary>
    /// The exchange of the phone number. (For a North America Number only)  The exchange is the \&quot;990\&quot; section in this sample phone number: (514) 990-1516 x123
    /// </summary>
    utility::string_t getSPhoneExchange() const;
    bool sPhoneExchangeIsSet() const;
    void unsetSPhoneExchange();

    void setSPhoneExchange(const utility::string_t& value);

    /// <summary>
    /// The number of the phone number. (For a North America Number only)  The number is the \&quot;1516\&quot; section in this sample phone number: (514) 990-1516 x123
    /// </summary>
    utility::string_t getSPhoneNumber() const;
    bool sPhoneNumberIsSet() const;
    void unsetSPhoneNumber();

    void setSPhoneNumber(const utility::string_t& value);

    /// <summary>
    /// The international phone number. (For phone numbers outside of North)  Do not specify the \&quot;011\&quot; part of the phone number used to dial an international phone number from North America.  For example for this sample phone number \&quot;+442071838750\&quot;, you would send \&quot;442071838750\&quot; without the \&quot;+\&quot; sign.
    /// </summary>
    utility::string_t getSPhoneInternational() const;
    bool sPhoneInternationalIsSet() const;
    void unsetSPhoneInternational();

    void setSPhoneInternational(const utility::string_t& value);

    /// <summary>
    /// The extension of the phone number.  The extension is the \&quot;123\&quot; section in this sample phone number: (514) 990-1516 x123.  It can also be used with international phone numbers
    /// </summary>
    utility::string_t getSPhoneExtension() const;
    bool sPhoneExtensionIsSet() const;
    void unsetSPhoneExtension();

    void setSPhoneExtension(const utility::string_t& value);


protected:
    int32_t m_FkiPhonetypeID;
    bool m_FkiPhonetypeIDIsSet;
    std::shared_ptr<Field_ePhoneType> m_EPhoneType;
    bool m_EPhoneTypeIsSet;
    utility::string_t m_SPhoneRegion;
    bool m_SPhoneRegionIsSet;
    utility::string_t m_SPhoneExchange;
    bool m_SPhoneExchangeIsSet;
    utility::string_t m_SPhoneNumber;
    bool m_SPhoneNumberIsSet;
    utility::string_t m_SPhoneInternational;
    bool m_SPhoneInternationalIsSet;
    utility::string_t m_SPhoneExtension;
    bool m_SPhoneExtensionIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Phone_Request_H_ */
