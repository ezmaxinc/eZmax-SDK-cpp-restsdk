/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.35
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Address_Request.h
 *
 * An Address Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Address_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Address_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Address Object
/// </summary>
class  Address_Request
    : public ModelBase
{
public:
    Address_Request();
    virtual ~Address_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Address_Request members

    /// <summary>
    /// The unique ID of the Addresstype.  Valid values:  |Value|Description| |-|-| |1|Office| |2|Home| |3|Real Estate Invoice| |4|Invoicing| |5|Shipping|
    /// </summary>
    int32_t getFkiAddresstypeID() const;
    bool fkiAddresstypeIDIsSet() const;
    void unsetFkiAddresstypeID();

    void setFkiAddresstypeID(int32_t value);

    /// <summary>
    /// The Civic number.
    /// </summary>
    utility::string_t getSAddressCivic() const;
    bool sAddressCivicIsSet() const;
    void unsetSAddressCivic();

    void setSAddressCivic(const utility::string_t& value);

    /// <summary>
    /// The Street Name
    /// </summary>
    utility::string_t getSAddressStreet() const;
    bool sAddressStreetIsSet() const;
    void unsetSAddressStreet();

    void setSAddressStreet(const utility::string_t& value);

    /// <summary>
    /// The Suite or appartment number
    /// </summary>
    utility::string_t getSAddressSuite() const;
    bool sAddressSuiteIsSet() const;
    void unsetSAddressSuite();

    void setSAddressSuite(const utility::string_t& value);

    /// <summary>
    /// The City name
    /// </summary>
    utility::string_t getSAddressCity() const;
    bool sAddressCityIsSet() const;
    void unsetSAddressCity();

    void setSAddressCity(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Province.  Here are some common values (Complete list must be retrieved from API):  |Value|Description| |-|-| |1|(Canada) Alberta |2|(Canada) British Columbia| |3|(Canada) Manitoba| |3|(Canada) Manitoba| |4|(Canada) New Brunswick| |5|(Canada) Newfoundland| |6|(Canada) Northwest Territories| |7|(Canada) Nova Scotia| |8|(Canada) Nunavut| |9|(Canada) Ontario| |10|(Canada) Prince Edward Island| |11|(Canada) Quebec| |12|(Canada) Saskatchewan| |13|(Canada) Yukon| |14|(United-States) Alabama| |15|(United-States) Alaska| |16|(United-States) Arizona| |17|(United-States) Arkansas| |18|(United-States) California| |19|(United-States) Colorado| |20|(United-States) Connecticut| |21|(United-States) Delaware| |22|(United-States) District of Columbia| |23|(United-States) Florida| |24|(United-States) Georgia| |25|(United-States) Hawaii| |26|(United-States) Idaho| |27|(United-States) Illinois| |28|(United-States) Indiana| |29|(United-States) Iowa| |30|(United-States) Kansas| |31|(United-States) Kentucky| |32|(United-States) Louisiane| |33|(United-States) Maine| |34|(United-States) Maryland| |35|(United-States) Massachusetts| |36|(United-States) Michigan| |37|(United-States) Minnesota| |38|(United-States) Mississippi| |39|(United-States) Missouri| |40|(United-States) Montana| |41|(United-States) Nebraska| |42|(United-States) Nevada| |43|(United-States) New Hampshire| |44|(United-States) New Jersey| |45|(United-States) New Mexico| |46|(United-States) New York| |47|(United-States) North Carolina| |48|(United-States) North Dakota| |49|(United-States) Ohio| |50|(United-States) Oklahoma| |51|(United-States) Oregon| |52|(United-States) Pennsylvania| |53|(United-States) Rhode Island| |54|(United-States) South Carolina| |55|(United-States) South Dakota| |56|(United-States) Tennessee| |57|(United-States) Texas| |58|(United-States) Utah| |60|(United-States) Vermont| |59|(United-States) Virginia| |61|(United-States) Washington| |62|(United-States) West Virginia| |63|(United-States) Wisconsin| |64|(United-States) Wyoming|
    /// </summary>
    int32_t getFkiProvinceID() const;
    bool fkiProvinceIDIsSet() const;
    void unsetFkiProvinceID();

    void setFkiProvinceID(int32_t value);

    /// <summary>
    /// The unique ID of the Country.  Here are some common values (Complete list must be retrieved from API):  |Value|Description| |-|-| |1|Canada| |2|United-States|
    /// </summary>
    int32_t getFkiCountryID() const;
    bool fkiCountryIDIsSet() const;
    void unsetFkiCountryID();

    void setFkiCountryID(int32_t value);

    /// <summary>
    /// The Postal/Zip Code  The value must be entered without spaces
    /// </summary>
    utility::string_t getSAddressZip() const;
    bool sAddressZipIsSet() const;
    void unsetSAddressZip();

    void setSAddressZip(const utility::string_t& value);


protected:
    int32_t m_FkiAddresstypeID;
    bool m_FkiAddresstypeIDIsSet;
    utility::string_t m_SAddressCivic;
    bool m_SAddressCivicIsSet;
    utility::string_t m_SAddressStreet;
    bool m_SAddressStreetIsSet;
    utility::string_t m_SAddressSuite;
    bool m_SAddressSuiteIsSet;
    utility::string_t m_SAddressCity;
    bool m_SAddressCityIsSet;
    int32_t m_FkiProvinceID;
    bool m_FkiProvinceIDIsSet;
    int32_t m_FkiCountryID;
    bool m_FkiCountryIDIsSet;
    utility::string_t m_SAddressZip;
    bool m_SAddressZipIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Address_Request_H_ */
