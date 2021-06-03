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
 * Franchisereferalincome_RequestCompound.h
 *
 * A Franchisereferalincome Object and children to create a complete structure
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_RequestCompound_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_RequestCompound_H_


#include "../ModelBase.h"

#include "Address_Request.h"
#include <cpprest/details/basic_types.h>
#include "Contact_RequestCompound.h"
#include "Franchisereferalincome_Request.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// A Franchisereferalincome Object and children to create a complete structure
/// </summary>
class  Franchisereferalincome_RequestCompound
    : public ModelBase
{
public:
    Franchisereferalincome_RequestCompound();
    virtual ~Franchisereferalincome_RequestCompound();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Franchisereferalincome_RequestCompound members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Address_Request> getObjAddress() const;
    bool objAddressIsSet() const;
    void unsetObjAddress();

    void setObjAddress(const std::shared_ptr<Address_Request>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Contact_RequestCompound>>& getAObjContact();
    bool aObjContactIsSet() const;
    void unsetA_objContact();

    void setAObjContact(const std::vector<std::shared_ptr<Contact_RequestCompound>>& value);

    /// <summary>
    /// The unique ID of the Franchisebroker
    /// </summary>
    int32_t getFkiFranchisebrokerID() const;
    bool fkiFranchisebrokerIDIsSet() const;
    void unsetFkiFranchisebrokerID();

    void setFkiFranchisebrokerID(int32_t value);

    /// <summary>
    /// The unique ID of the Franchisereferalincomeprogram
    /// </summary>
    int32_t getFkiFranchisereferalincomeprogramID() const;
    bool fkiFranchisereferalincomeprogramIDIsSet() const;
    void unsetFkiFranchisereferalincomeprogramID();

    void setFkiFranchisereferalincomeprogramID(int32_t value);

    /// <summary>
    /// The unique ID of the Period
    /// </summary>
    int32_t getFkiPeriodID() const;
    bool fkiPeriodIDIsSet() const;
    void unsetFkiPeriodID();

    void setFkiPeriodID(int32_t value);

    /// <summary>
    /// The loan amount
    /// </summary>
    utility::string_t getDFranchisereferalincomeLoan() const;
    bool dFranchisereferalincomeLoanIsSet() const;
    void unsetDFranchisereferalincomeLoan();

    void setDFranchisereferalincomeLoan(const utility::string_t& value);

    /// <summary>
    /// The amount that will be given to the franchise
    /// </summary>
    utility::string_t getDFranchisereferalincomeFranchiseamount() const;
    bool dFranchisereferalincomeFranchiseamountIsSet() const;
    void unsetDFranchisereferalincomeFranchiseamount();

    void setDFranchisereferalincomeFranchiseamount(const utility::string_t& value);

    /// <summary>
    /// The amount that will be kept by the franchisor
    /// </summary>
    utility::string_t getDFranchisereferalincomeFranchisoramount() const;
    bool dFranchisereferalincomeFranchisoramountIsSet() const;
    void unsetDFranchisereferalincomeFranchisoramount();

    void setDFranchisereferalincomeFranchisoramount(const utility::string_t& value);

    /// <summary>
    /// The amount that will be given to the agent
    /// </summary>
    utility::string_t getDFranchisereferalincomeAgentamount() const;
    bool dFranchisereferalincomeAgentamountIsSet() const;
    void unsetDFranchisereferalincomeAgentamount();

    void setDFranchisereferalincomeAgentamount(const utility::string_t& value);

    /// <summary>
    /// The date the amounts were disbursed
    /// </summary>
    utility::string_t getDtFranchisereferalincomeDisbursed() const;
    bool dtFranchisereferalincomeDisbursedIsSet() const;
    void unsetDtFranchisereferalincomeDisbursed();

    void setDtFranchisereferalincomeDisbursed(const utility::string_t& value);

    /// <summary>
    /// A comment about the transaction
    /// </summary>
    utility::string_t getTFranchisereferalincomeComment() const;
    bool tFranchisereferalincomeCommentIsSet() const;
    void unsetTFranchisereferalincomeComment();

    void setTFranchisereferalincomeComment(const utility::string_t& value);

    /// <summary>
    /// The unique ID of the Franchisereoffice
    /// </summary>
    int32_t getFkiFranchiseofficeID() const;
    bool fkiFranchiseofficeIDIsSet() const;
    void unsetFkiFranchiseofficeID();

    void setFkiFranchiseofficeID(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSFranchisereferalincomeRemoteid() const;
    bool sFranchisereferalincomeRemoteidIsSet() const;
    void unsetSFranchisereferalincomeRemoteid();

    void setSFranchisereferalincomeRemoteid(const utility::string_t& value);


protected:
    std::shared_ptr<Address_Request> m_ObjAddress;
    bool m_ObjAddressIsSet;
    std::vector<std::shared_ptr<Contact_RequestCompound>> m_A_objContact;
    bool m_A_objContactIsSet;
    int32_t m_FkiFranchisebrokerID;
    bool m_FkiFranchisebrokerIDIsSet;
    int32_t m_FkiFranchisereferalincomeprogramID;
    bool m_FkiFranchisereferalincomeprogramIDIsSet;
    int32_t m_FkiPeriodID;
    bool m_FkiPeriodIDIsSet;
    utility::string_t m_DFranchisereferalincomeLoan;
    bool m_DFranchisereferalincomeLoanIsSet;
    utility::string_t m_DFranchisereferalincomeFranchiseamount;
    bool m_DFranchisereferalincomeFranchiseamountIsSet;
    utility::string_t m_DFranchisereferalincomeFranchisoramount;
    bool m_DFranchisereferalincomeFranchisoramountIsSet;
    utility::string_t m_DFranchisereferalincomeAgentamount;
    bool m_DFranchisereferalincomeAgentamountIsSet;
    utility::string_t m_DtFranchisereferalincomeDisbursed;
    bool m_DtFranchisereferalincomeDisbursedIsSet;
    utility::string_t m_TFranchisereferalincomeComment;
    bool m_TFranchisereferalincomeCommentIsSet;
    int32_t m_FkiFranchiseofficeID;
    bool m_FkiFranchiseofficeIDIsSet;
    utility::string_t m_SFranchisereferalincomeRemoteid;
    bool m_SFranchisereferalincomeRemoteidIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Franchisereferalincome_RequestCompound_H_ */
