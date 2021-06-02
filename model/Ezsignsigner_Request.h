/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.45
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsigner_Request.h
 *
 * An Ezsignsigner Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsigner_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsigner_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// An Ezsignsigner Object
/// </summary>
class  Ezsignsigner_Request
    : public ModelBase
{
public:
    Ezsignsigner_Request();
    virtual ~Ezsignsigner_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsignsigner_Request members

    /// <summary>
    /// The unique ID of the Taxassignment.  Valid values:  |Value|Description| |-|-| |1|No tax| |2|GST| |3|HST (ON)| |4|HST (NB)| |5|HST (NS)| |6|HST (NL)| |7|HST (PE)| |8|GST + QST (QC)| |9|GST + QST (QC) Non-Recoverable| |10|GST + PST (BC)| |11|GST + PST (SK)| |12|GST + RST (MB)| |13|GST + PST (BC) Non-Recoverable| |14|GST + PST (SK) Non-Recoverable| |15|GST + RST (MB) Non-Recoverable|
    /// </summary>
    int32_t getFkiTaxassignmentID() const;
    bool fkiTaxassignmentIDIsSet() const;
    void unsetFkiTaxassignmentID();

    void setFkiTaxassignmentID(int32_t value);

    /// <summary>
    /// The unique ID of the Secretquestion.  Valid values:  |Value|Description| |-|-| |1|The name of the hospital in which you were born| |2|The name of your grade school| |3|The last name of your favorite teacher| |4|Your favorite sports team| |5|Your favorite TV show| |6|Your favorite movie| |7|The name of the street on which you grew up| |8|The name of your first employer| |9|Your first car| |10|Your favorite food| |11|The name of your first pet| |12|Favorite musician/band| |13|What instrument you play| |14|Your father&#39;s middle name| |15|Your mother&#39;s maiden name| |16|Name of your eldest child| |17|Your spouse&#39;s middle name| |18|Favorite restaurant| |19|Childhood nickname| |20|Favorite vacation destination| |21|Your boat&#39;s name| |22|Date of Birth (YYYY-MM-DD)|
    /// </summary>
    int32_t getFkiSecretquestionID() const;
    bool fkiSecretquestionIDIsSet() const;
    void unsetFkiSecretquestionID();

    void setFkiSecretquestionID(int32_t value);

    /// <summary>
    /// The method the Ezsignsigner will authenticate to the signing platform.  1. **Password** means the Ezsignsigner will receive a secure link by email. 2. **PasswordPhone** means the Ezsignsigner will receive a secure link by email and will need to authenticate using SMS or Phone call. **Additional fee applies**. 3. **PasswordQuestion** means the Ezsignsigner will receive a secure link by email and will need to authenticate using a predefined question and answer. 4. **InPersonPhone** means the Ezsignsigner will only be able to sign \&quot;In-Person\&quot; and will need to authenticate using SMS or Phone call. No email will be sent for invitation to sign. **Additional fee applies**. 5. **InPerson** means the Ezsignsigner will only be able to sign \&quot;In-Person\&quot; and there won&#39;t be any authentication. No email will be sent for invitation to sign. Make sure you evaluate the risk of signature denial and at minimum, we recommend you use a handwritten signature type.
    /// </summary>
    utility::string_t getEEzsignsignerLogintype() const;
    bool eEzsignsignerLogintypeIsSet() const;
    void unsetEEzsignsignerLogintype();

    void setEEzsignsignerLogintype(const utility::string_t& value);

    /// <summary>
    /// The predefined answer to the secret question the Ezsignsigner will need to provide to successfully authenticate.
    /// </summary>
    utility::string_t getSEzsignsignerSecretanswer() const;
    bool sEzsignsignerSecretanswerIsSet() const;
    void unsetSEzsignsignerSecretanswer();

    void setSEzsignsignerSecretanswer(const utility::string_t& value);


protected:
    int32_t m_FkiTaxassignmentID;
    bool m_FkiTaxassignmentIDIsSet;
    int32_t m_FkiSecretquestionID;
    bool m_FkiSecretquestionIDIsSet;
    utility::string_t m_EEzsignsignerLogintype;
    bool m_EEzsignsignerLogintypeIsSet;
    utility::string_t m_SEzsignsignerSecretanswer;
    bool m_SEzsignsignerSecretanswerIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsignsigner_Request_H_ */
