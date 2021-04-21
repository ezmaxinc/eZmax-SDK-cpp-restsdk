/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.42
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Franchisereferalincome_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Franchisereferalincome_RequestCompound::Franchisereferalincome_RequestCompound()
{
    m_ObjAddressIsSet = false;
    m_A_objContactIsSet = false;
    m_FkiFranchisebrokerID = 0;
    m_FkiFranchisebrokerIDIsSet = false;
    m_FkiFranchisereferalincomeprogramID = 0;
    m_FkiFranchisereferalincomeprogramIDIsSet = false;
    m_FkiPeriodID = 0;
    m_FkiPeriodIDIsSet = false;
    m_DFranchisereferalincomeLoan = utility::conversions::to_string_t("");
    m_DFranchisereferalincomeLoanIsSet = false;
    m_DFranchisereferalincomeFranchiseamount = utility::conversions::to_string_t("");
    m_DFranchisereferalincomeFranchiseamountIsSet = false;
    m_DFranchisereferalincomeFranchisoramount = utility::conversions::to_string_t("");
    m_DFranchisereferalincomeFranchisoramountIsSet = false;
    m_DFranchisereferalincomeAgentamount = utility::conversions::to_string_t("");
    m_DFranchisereferalincomeAgentamountIsSet = false;
    m_DtFranchisereferalincomeDisbursed = utility::conversions::to_string_t("");
    m_DtFranchisereferalincomeDisbursedIsSet = false;
    m_TFranchisereferalincomeComment = utility::conversions::to_string_t("");
    m_TFranchisereferalincomeCommentIsSet = false;
    m_FkiFranchiseofficeID = 0;
    m_FkiFranchiseofficeIDIsSet = false;
    m_SFranchisereferalincomeRemoteid = utility::conversions::to_string_t("");
    m_SFranchisereferalincomeRemoteidIsSet = false;
}

Franchisereferalincome_RequestCompound::~Franchisereferalincome_RequestCompound()
{
}

void Franchisereferalincome_RequestCompound::validate()
{
    // TODO: implement validation
}

web::json::value Franchisereferalincome_RequestCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ObjAddressIsSet)
    {
        val[utility::conversions::to_string_t("objAddress")] = ModelBase::toJson(m_ObjAddress);
    }
    if(m_A_objContactIsSet)
    {
        val[utility::conversions::to_string_t("a_objContact")] = ModelBase::toJson(m_A_objContact);
    }
    if(m_FkiFranchisebrokerIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiFranchisebrokerID")] = ModelBase::toJson(m_FkiFranchisebrokerID);
    }
    if(m_FkiFranchisereferalincomeprogramIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiFranchisereferalincomeprogramID")] = ModelBase::toJson(m_FkiFranchisereferalincomeprogramID);
    }
    if(m_FkiPeriodIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiPeriodID")] = ModelBase::toJson(m_FkiPeriodID);
    }
    if(m_DFranchisereferalincomeLoanIsSet)
    {
        val[utility::conversions::to_string_t("dFranchisereferalincomeLoan")] = ModelBase::toJson(m_DFranchisereferalincomeLoan);
    }
    if(m_DFranchisereferalincomeFranchiseamountIsSet)
    {
        val[utility::conversions::to_string_t("dFranchisereferalincomeFranchiseamount")] = ModelBase::toJson(m_DFranchisereferalincomeFranchiseamount);
    }
    if(m_DFranchisereferalincomeFranchisoramountIsSet)
    {
        val[utility::conversions::to_string_t("dFranchisereferalincomeFranchisoramount")] = ModelBase::toJson(m_DFranchisereferalincomeFranchisoramount);
    }
    if(m_DFranchisereferalincomeAgentamountIsSet)
    {
        val[utility::conversions::to_string_t("dFranchisereferalincomeAgentamount")] = ModelBase::toJson(m_DFranchisereferalincomeAgentamount);
    }
    if(m_DtFranchisereferalincomeDisbursedIsSet)
    {
        val[utility::conversions::to_string_t("dtFranchisereferalincomeDisbursed")] = ModelBase::toJson(m_DtFranchisereferalincomeDisbursed);
    }
    if(m_TFranchisereferalincomeCommentIsSet)
    {
        val[utility::conversions::to_string_t("tFranchisereferalincomeComment")] = ModelBase::toJson(m_TFranchisereferalincomeComment);
    }
    if(m_FkiFranchiseofficeIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiFranchiseofficeID")] = ModelBase::toJson(m_FkiFranchiseofficeID);
    }
    if(m_SFranchisereferalincomeRemoteidIsSet)
    {
        val[utility::conversions::to_string_t("sFranchisereferalincomeRemoteid")] = ModelBase::toJson(m_SFranchisereferalincomeRemoteid);
    }

    return val;
}

bool Franchisereferalincome_RequestCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("objAddress")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objAddress"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Address_Request> refVal_objAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_objAddress);
            setObjAddress(refVal_objAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_objContact")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_objContact"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Contact_RequestCompound>> refVal_a_objContact;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_objContact);
            setAObjContact(refVal_a_objContact);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiFranchisebrokerID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiFranchisebrokerID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiFranchisebrokerID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiFranchisebrokerID);
            setFkiFranchisebrokerID(refVal_fkiFranchisebrokerID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiFranchisereferalincomeprogramID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiFranchisereferalincomeprogramID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiFranchisereferalincomeprogramID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiFranchisereferalincomeprogramID);
            setFkiFranchisereferalincomeprogramID(refVal_fkiFranchisereferalincomeprogramID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiPeriodID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiPeriodID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiPeriodID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiPeriodID);
            setFkiPeriodID(refVal_fkiPeriodID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dFranchisereferalincomeLoan")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dFranchisereferalincomeLoan"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dFranchisereferalincomeLoan;
            ok &= ModelBase::fromJson(fieldValue, refVal_dFranchisereferalincomeLoan);
            setDFranchisereferalincomeLoan(refVal_dFranchisereferalincomeLoan);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dFranchisereferalincomeFranchiseamount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dFranchisereferalincomeFranchiseamount"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dFranchisereferalincomeFranchiseamount;
            ok &= ModelBase::fromJson(fieldValue, refVal_dFranchisereferalincomeFranchiseamount);
            setDFranchisereferalincomeFranchiseamount(refVal_dFranchisereferalincomeFranchiseamount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dFranchisereferalincomeFranchisoramount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dFranchisereferalincomeFranchisoramount"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dFranchisereferalincomeFranchisoramount;
            ok &= ModelBase::fromJson(fieldValue, refVal_dFranchisereferalincomeFranchisoramount);
            setDFranchisereferalincomeFranchisoramount(refVal_dFranchisereferalincomeFranchisoramount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dFranchisereferalincomeAgentamount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dFranchisereferalincomeAgentamount"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dFranchisereferalincomeAgentamount;
            ok &= ModelBase::fromJson(fieldValue, refVal_dFranchisereferalincomeAgentamount);
            setDFranchisereferalincomeAgentamount(refVal_dFranchisereferalincomeAgentamount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dtFranchisereferalincomeDisbursed")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dtFranchisereferalincomeDisbursed"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_dtFranchisereferalincomeDisbursed;
            ok &= ModelBase::fromJson(fieldValue, refVal_dtFranchisereferalincomeDisbursed);
            setDtFranchisereferalincomeDisbursed(refVal_dtFranchisereferalincomeDisbursed);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tFranchisereferalincomeComment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tFranchisereferalincomeComment"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_tFranchisereferalincomeComment;
            ok &= ModelBase::fromJson(fieldValue, refVal_tFranchisereferalincomeComment);
            setTFranchisereferalincomeComment(refVal_tFranchisereferalincomeComment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiFranchiseofficeID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiFranchiseofficeID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiFranchiseofficeID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiFranchiseofficeID);
            setFkiFranchiseofficeID(refVal_fkiFranchiseofficeID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sFranchisereferalincomeRemoteid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sFranchisereferalincomeRemoteid"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sFranchisereferalincomeRemoteid;
            ok &= ModelBase::fromJson(fieldValue, refVal_sFranchisereferalincomeRemoteid);
            setSFranchisereferalincomeRemoteid(refVal_sFranchisereferalincomeRemoteid);
        }
    }
    return ok;
}

void Franchisereferalincome_RequestCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ObjAddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("objAddress"), m_ObjAddress));
    }
    if(m_A_objContactIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_objContact"), m_A_objContact));
    }
    if(m_FkiFranchisebrokerIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiFranchisebrokerID"), m_FkiFranchisebrokerID));
    }
    if(m_FkiFranchisereferalincomeprogramIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiFranchisereferalincomeprogramID"), m_FkiFranchisereferalincomeprogramID));
    }
    if(m_FkiPeriodIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiPeriodID"), m_FkiPeriodID));
    }
    if(m_DFranchisereferalincomeLoanIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dFranchisereferalincomeLoan"), m_DFranchisereferalincomeLoan));
    }
    if(m_DFranchisereferalincomeFranchiseamountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dFranchisereferalincomeFranchiseamount"), m_DFranchisereferalincomeFranchiseamount));
    }
    if(m_DFranchisereferalincomeFranchisoramountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dFranchisereferalincomeFranchisoramount"), m_DFranchisereferalincomeFranchisoramount));
    }
    if(m_DFranchisereferalincomeAgentamountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dFranchisereferalincomeAgentamount"), m_DFranchisereferalincomeAgentamount));
    }
    if(m_DtFranchisereferalincomeDisbursedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dtFranchisereferalincomeDisbursed"), m_DtFranchisereferalincomeDisbursed));
    }
    if(m_TFranchisereferalincomeCommentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tFranchisereferalincomeComment"), m_TFranchisereferalincomeComment));
    }
    if(m_FkiFranchiseofficeIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiFranchiseofficeID"), m_FkiFranchiseofficeID));
    }
    if(m_SFranchisereferalincomeRemoteidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sFranchisereferalincomeRemoteid"), m_SFranchisereferalincomeRemoteid));
    }
}

bool Franchisereferalincome_RequestCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("objAddress")))
    {
        std::shared_ptr<Address_Request> refVal_objAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("objAddress")), refVal_objAddress );
        setObjAddress(refVal_objAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_objContact")))
    {
        std::vector<std::shared_ptr<Contact_RequestCompound>> refVal_a_objContact;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_objContact")), refVal_a_objContact );
        setAObjContact(refVal_a_objContact);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiFranchisebrokerID")))
    {
        int32_t refVal_fkiFranchisebrokerID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiFranchisebrokerID")), refVal_fkiFranchisebrokerID );
        setFkiFranchisebrokerID(refVal_fkiFranchisebrokerID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiFranchisereferalincomeprogramID")))
    {
        int32_t refVal_fkiFranchisereferalincomeprogramID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiFranchisereferalincomeprogramID")), refVal_fkiFranchisereferalincomeprogramID );
        setFkiFranchisereferalincomeprogramID(refVal_fkiFranchisereferalincomeprogramID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiPeriodID")))
    {
        int32_t refVal_fkiPeriodID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiPeriodID")), refVal_fkiPeriodID );
        setFkiPeriodID(refVal_fkiPeriodID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dFranchisereferalincomeLoan")))
    {
        utility::string_t refVal_dFranchisereferalincomeLoan;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dFranchisereferalincomeLoan")), refVal_dFranchisereferalincomeLoan );
        setDFranchisereferalincomeLoan(refVal_dFranchisereferalincomeLoan);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dFranchisereferalincomeFranchiseamount")))
    {
        utility::string_t refVal_dFranchisereferalincomeFranchiseamount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dFranchisereferalincomeFranchiseamount")), refVal_dFranchisereferalincomeFranchiseamount );
        setDFranchisereferalincomeFranchiseamount(refVal_dFranchisereferalincomeFranchiseamount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dFranchisereferalincomeFranchisoramount")))
    {
        utility::string_t refVal_dFranchisereferalincomeFranchisoramount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dFranchisereferalincomeFranchisoramount")), refVal_dFranchisereferalincomeFranchisoramount );
        setDFranchisereferalincomeFranchisoramount(refVal_dFranchisereferalincomeFranchisoramount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dFranchisereferalincomeAgentamount")))
    {
        utility::string_t refVal_dFranchisereferalincomeAgentamount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dFranchisereferalincomeAgentamount")), refVal_dFranchisereferalincomeAgentamount );
        setDFranchisereferalincomeAgentamount(refVal_dFranchisereferalincomeAgentamount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dtFranchisereferalincomeDisbursed")))
    {
        utility::string_t refVal_dtFranchisereferalincomeDisbursed;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("dtFranchisereferalincomeDisbursed")), refVal_dtFranchisereferalincomeDisbursed );
        setDtFranchisereferalincomeDisbursed(refVal_dtFranchisereferalincomeDisbursed);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tFranchisereferalincomeComment")))
    {
        utility::string_t refVal_tFranchisereferalincomeComment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tFranchisereferalincomeComment")), refVal_tFranchisereferalincomeComment );
        setTFranchisereferalincomeComment(refVal_tFranchisereferalincomeComment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiFranchiseofficeID")))
    {
        int32_t refVal_fkiFranchiseofficeID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiFranchiseofficeID")), refVal_fkiFranchiseofficeID );
        setFkiFranchiseofficeID(refVal_fkiFranchiseofficeID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sFranchisereferalincomeRemoteid")))
    {
        utility::string_t refVal_sFranchisereferalincomeRemoteid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sFranchisereferalincomeRemoteid")), refVal_sFranchisereferalincomeRemoteid );
        setSFranchisereferalincomeRemoteid(refVal_sFranchisereferalincomeRemoteid);
    }
    return ok;
}

std::shared_ptr<Address_Request> Franchisereferalincome_RequestCompound::getObjAddress() const
{
    return m_ObjAddress;
}

void Franchisereferalincome_RequestCompound::setObjAddress(const std::shared_ptr<Address_Request>& value)
{
    m_ObjAddress = value;
    m_ObjAddressIsSet = true;
}

bool Franchisereferalincome_RequestCompound::objAddressIsSet() const
{
    return m_ObjAddressIsSet;
}

void Franchisereferalincome_RequestCompound::unsetObjAddress()
{
    m_ObjAddressIsSet = false;
}
std::vector<std::shared_ptr<Contact_RequestCompound>>& Franchisereferalincome_RequestCompound::getAObjContact()
{
    return m_A_objContact;
}

void Franchisereferalincome_RequestCompound::setAObjContact(const std::vector<std::shared_ptr<Contact_RequestCompound>>& value)
{
    m_A_objContact = value;
    m_A_objContactIsSet = true;
}

bool Franchisereferalincome_RequestCompound::aObjContactIsSet() const
{
    return m_A_objContactIsSet;
}

void Franchisereferalincome_RequestCompound::unsetA_objContact()
{
    m_A_objContactIsSet = false;
}
int32_t Franchisereferalincome_RequestCompound::getFkiFranchisebrokerID() const
{
    return m_FkiFranchisebrokerID;
}

void Franchisereferalincome_RequestCompound::setFkiFranchisebrokerID(int32_t value)
{
    m_FkiFranchisebrokerID = value;
    m_FkiFranchisebrokerIDIsSet = true;
}

bool Franchisereferalincome_RequestCompound::fkiFranchisebrokerIDIsSet() const
{
    return m_FkiFranchisebrokerIDIsSet;
}

void Franchisereferalincome_RequestCompound::unsetFkiFranchisebrokerID()
{
    m_FkiFranchisebrokerIDIsSet = false;
}
int32_t Franchisereferalincome_RequestCompound::getFkiFranchisereferalincomeprogramID() const
{
    return m_FkiFranchisereferalincomeprogramID;
}

void Franchisereferalincome_RequestCompound::setFkiFranchisereferalincomeprogramID(int32_t value)
{
    m_FkiFranchisereferalincomeprogramID = value;
    m_FkiFranchisereferalincomeprogramIDIsSet = true;
}

bool Franchisereferalincome_RequestCompound::fkiFranchisereferalincomeprogramIDIsSet() const
{
    return m_FkiFranchisereferalincomeprogramIDIsSet;
}

void Franchisereferalincome_RequestCompound::unsetFkiFranchisereferalincomeprogramID()
{
    m_FkiFranchisereferalincomeprogramIDIsSet = false;
}
int32_t Franchisereferalincome_RequestCompound::getFkiPeriodID() const
{
    return m_FkiPeriodID;
}

void Franchisereferalincome_RequestCompound::setFkiPeriodID(int32_t value)
{
    m_FkiPeriodID = value;
    m_FkiPeriodIDIsSet = true;
}

bool Franchisereferalincome_RequestCompound::fkiPeriodIDIsSet() const
{
    return m_FkiPeriodIDIsSet;
}

void Franchisereferalincome_RequestCompound::unsetFkiPeriodID()
{
    m_FkiPeriodIDIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getDFranchisereferalincomeLoan() const
{
    return m_DFranchisereferalincomeLoan;
}

void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeLoan(const utility::string_t& value)
{
    m_DFranchisereferalincomeLoan = value;
    m_DFranchisereferalincomeLoanIsSet = true;
}

bool Franchisereferalincome_RequestCompound::dFranchisereferalincomeLoanIsSet() const
{
    return m_DFranchisereferalincomeLoanIsSet;
}

void Franchisereferalincome_RequestCompound::unsetDFranchisereferalincomeLoan()
{
    m_DFranchisereferalincomeLoanIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getDFranchisereferalincomeFranchiseamount() const
{
    return m_DFranchisereferalincomeFranchiseamount;
}

void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeFranchiseamount(const utility::string_t& value)
{
    m_DFranchisereferalincomeFranchiseamount = value;
    m_DFranchisereferalincomeFranchiseamountIsSet = true;
}

bool Franchisereferalincome_RequestCompound::dFranchisereferalincomeFranchiseamountIsSet() const
{
    return m_DFranchisereferalincomeFranchiseamountIsSet;
}

void Franchisereferalincome_RequestCompound::unsetDFranchisereferalincomeFranchiseamount()
{
    m_DFranchisereferalincomeFranchiseamountIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getDFranchisereferalincomeFranchisoramount() const
{
    return m_DFranchisereferalincomeFranchisoramount;
}

void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeFranchisoramount(const utility::string_t& value)
{
    m_DFranchisereferalincomeFranchisoramount = value;
    m_DFranchisereferalincomeFranchisoramountIsSet = true;
}

bool Franchisereferalincome_RequestCompound::dFranchisereferalincomeFranchisoramountIsSet() const
{
    return m_DFranchisereferalincomeFranchisoramountIsSet;
}

void Franchisereferalincome_RequestCompound::unsetDFranchisereferalincomeFranchisoramount()
{
    m_DFranchisereferalincomeFranchisoramountIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getDFranchisereferalincomeAgentamount() const
{
    return m_DFranchisereferalincomeAgentamount;
}

void Franchisereferalincome_RequestCompound::setDFranchisereferalincomeAgentamount(const utility::string_t& value)
{
    m_DFranchisereferalincomeAgentamount = value;
    m_DFranchisereferalincomeAgentamountIsSet = true;
}

bool Franchisereferalincome_RequestCompound::dFranchisereferalincomeAgentamountIsSet() const
{
    return m_DFranchisereferalincomeAgentamountIsSet;
}

void Franchisereferalincome_RequestCompound::unsetDFranchisereferalincomeAgentamount()
{
    m_DFranchisereferalincomeAgentamountIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getDtFranchisereferalincomeDisbursed() const
{
    return m_DtFranchisereferalincomeDisbursed;
}

void Franchisereferalincome_RequestCompound::setDtFranchisereferalincomeDisbursed(const utility::string_t& value)
{
    m_DtFranchisereferalincomeDisbursed = value;
    m_DtFranchisereferalincomeDisbursedIsSet = true;
}

bool Franchisereferalincome_RequestCompound::dtFranchisereferalincomeDisbursedIsSet() const
{
    return m_DtFranchisereferalincomeDisbursedIsSet;
}

void Franchisereferalincome_RequestCompound::unsetDtFranchisereferalincomeDisbursed()
{
    m_DtFranchisereferalincomeDisbursedIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getTFranchisereferalincomeComment() const
{
    return m_TFranchisereferalincomeComment;
}

void Franchisereferalincome_RequestCompound::setTFranchisereferalincomeComment(const utility::string_t& value)
{
    m_TFranchisereferalincomeComment = value;
    m_TFranchisereferalincomeCommentIsSet = true;
}

bool Franchisereferalincome_RequestCompound::tFranchisereferalincomeCommentIsSet() const
{
    return m_TFranchisereferalincomeCommentIsSet;
}

void Franchisereferalincome_RequestCompound::unsetTFranchisereferalincomeComment()
{
    m_TFranchisereferalincomeCommentIsSet = false;
}
int32_t Franchisereferalincome_RequestCompound::getFkiFranchiseofficeID() const
{
    return m_FkiFranchiseofficeID;
}

void Franchisereferalincome_RequestCompound::setFkiFranchiseofficeID(int32_t value)
{
    m_FkiFranchiseofficeID = value;
    m_FkiFranchiseofficeIDIsSet = true;
}

bool Franchisereferalincome_RequestCompound::fkiFranchiseofficeIDIsSet() const
{
    return m_FkiFranchiseofficeIDIsSet;
}

void Franchisereferalincome_RequestCompound::unsetFkiFranchiseofficeID()
{
    m_FkiFranchiseofficeIDIsSet = false;
}
utility::string_t Franchisereferalincome_RequestCompound::getSFranchisereferalincomeRemoteid() const
{
    return m_SFranchisereferalincomeRemoteid;
}

void Franchisereferalincome_RequestCompound::setSFranchisereferalincomeRemoteid(const utility::string_t& value)
{
    m_SFranchisereferalincomeRemoteid = value;
    m_SFranchisereferalincomeRemoteidIsSet = true;
}

bool Franchisereferalincome_RequestCompound::sFranchisereferalincomeRemoteidIsSet() const
{
    return m_SFranchisereferalincomeRemoteidIsSet;
}

void Franchisereferalincome_RequestCompound::unsetSFranchisereferalincomeRemoteid()
{
    m_SFranchisereferalincomeRemoteidIsSet = false;
}
}
}
}
}


