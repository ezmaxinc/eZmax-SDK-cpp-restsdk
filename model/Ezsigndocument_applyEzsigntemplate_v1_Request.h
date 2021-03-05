/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.32
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_applyEzsigntemplate_v1_Request.h
 *
 * Request for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate API Request
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_applyEzsigntemplate_v1_Request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_applyEzsigntemplate_v1_Request_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Request for the /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate API Request
/// </summary>
class  Ezsigndocument_applyEzsigntemplate_v1_Request
    : public ModelBase
{
public:
    Ezsigndocument_applyEzsigntemplate_v1_Request();
    virtual ~Ezsigndocument_applyEzsigntemplate_v1_Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ezsigndocument_applyEzsigntemplate_v1_Request members

    /// <summary>
    /// The unique ID of the Ezsigndocument
    /// </summary>
    int32_t getFkiEzsigntemplateID() const;
    bool fkiEzsigntemplateIDIsSet() const;
    void unsetFkiEzsigntemplateID();

    void setFkiEzsigntemplateID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<utility::string_t>>& getASEzsigntemplatesigner();
    bool aSEzsigntemplatesignerIsSet() const;
    void unsetA_sEzsigntemplatesigner();

    void setASEzsigntemplatesigner(const std::vector<std::shared_ptr<utility::string_t>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<int32_t>& getAPkiEzsignfoldersignerassociationID();
    bool aPkiEzsignfoldersignerassociationIDIsSet() const;
    void unsetA_pkiEzsignfoldersignerassociationID();

    void setAPkiEzsignfoldersignerassociationID(std::vector<int32_t> value);


protected:
    int32_t m_FkiEzsigntemplateID;
    bool m_FkiEzsigntemplateIDIsSet;
    std::vector<std::shared_ptr<utility::string_t>> m_A_sEzsigntemplatesigner;
    bool m_A_sEzsigntemplatesignerIsSet;
    std::vector<int32_t> m_A_pkiEzsignfoldersignerassociationID;
    bool m_A_pkiEzsignfoldersignerassociationIDIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Ezsigndocument_applyEzsigntemplate_v1_Request_H_ */
