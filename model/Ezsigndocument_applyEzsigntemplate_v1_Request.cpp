/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.40
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Ezsigndocument_applyEzsigntemplate_v1_Request.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsigndocument_applyEzsigntemplate_v1_Request::Ezsigndocument_applyEzsigntemplate_v1_Request()
{
    m_FkiEzsigntemplateID = 0;
    m_FkiEzsigntemplateIDIsSet = false;
    m_A_sEzsigntemplatesignerIsSet = false;
    m_A_pkiEzsignfoldersignerassociationIDIsSet = false;
}

Ezsigndocument_applyEzsigntemplate_v1_Request::~Ezsigndocument_applyEzsigntemplate_v1_Request()
{
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::validate()
{
    // TODO: implement validation
}

web::json::value Ezsigndocument_applyEzsigntemplate_v1_Request::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiEzsigntemplateIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsigntemplateID")] = ModelBase::toJson(m_FkiEzsigntemplateID);
    }
    if(m_A_sEzsigntemplatesignerIsSet)
    {
        val[utility::conversions::to_string_t("a_sEzsigntemplatesigner")] = ModelBase::toJson(m_A_sEzsigntemplatesigner);
    }
    if(m_A_pkiEzsignfoldersignerassociationIDIsSet)
    {
        val[utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")] = ModelBase::toJson(m_A_pkiEzsignfoldersignerassociationID);
    }

    return val;
}

bool Ezsigndocument_applyEzsigntemplate_v1_Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiEzsigntemplateID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsigntemplateID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsigntemplateID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsigntemplateID);
            setFkiEzsigntemplateID(refVal_fkiEzsigntemplateID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_sEzsigntemplatesigner")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_sEzsigntemplatesigner"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<utility::string_t>> refVal_a_sEzsigntemplatesigner;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_sEzsigntemplatesigner);
            setASEzsigntemplatesigner(refVal_a_sEzsigntemplatesigner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal_a_pkiEzsignfoldersignerassociationID;
            ok &= ModelBase::fromJson(fieldValue, refVal_a_pkiEzsignfoldersignerassociationID);
            setAPkiEzsignfoldersignerassociationID(refVal_a_pkiEzsignfoldersignerassociationID);
        }
    }
    return ok;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiEzsigntemplateIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsigntemplateID"), m_FkiEzsigntemplateID));
    }
    if(m_A_sEzsigntemplatesignerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_sEzsigntemplatesigner"), m_A_sEzsigntemplatesigner));
    }
    if(m_A_pkiEzsignfoldersignerassociationIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID"), m_A_pkiEzsignfoldersignerassociationID));
    }
}

bool Ezsigndocument_applyEzsigntemplate_v1_Request::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsigntemplateID")))
    {
        int32_t refVal_fkiEzsigntemplateID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsigntemplateID")), refVal_fkiEzsigntemplateID );
        setFkiEzsigntemplateID(refVal_fkiEzsigntemplateID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_sEzsigntemplatesigner")))
    {
        std::vector<std::shared_ptr<utility::string_t>> refVal_a_sEzsigntemplatesigner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_sEzsigntemplatesigner")), refVal_a_sEzsigntemplatesigner );
        setASEzsigntemplatesigner(refVal_a_sEzsigntemplatesigner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")))
    {
        std::vector<int32_t> refVal_a_pkiEzsignfoldersignerassociationID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("a_pkiEzsignfoldersignerassociationID")), refVal_a_pkiEzsignfoldersignerassociationID );
        setAPkiEzsignfoldersignerassociationID(refVal_a_pkiEzsignfoldersignerassociationID);
    }
    return ok;
}

int32_t Ezsigndocument_applyEzsigntemplate_v1_Request::getFkiEzsigntemplateID() const
{
    return m_FkiEzsigntemplateID;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::setFkiEzsigntemplateID(int32_t value)
{
    m_FkiEzsigntemplateID = value;
    m_FkiEzsigntemplateIDIsSet = true;
}

bool Ezsigndocument_applyEzsigntemplate_v1_Request::fkiEzsigntemplateIDIsSet() const
{
    return m_FkiEzsigntemplateIDIsSet;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::unsetFkiEzsigntemplateID()
{
    m_FkiEzsigntemplateIDIsSet = false;
}
std::vector<std::shared_ptr<utility::string_t>>& Ezsigndocument_applyEzsigntemplate_v1_Request::getASEzsigntemplatesigner()
{
    return m_A_sEzsigntemplatesigner;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::setASEzsigntemplatesigner(const std::vector<std::shared_ptr<utility::string_t>>& value)
{
    m_A_sEzsigntemplatesigner = value;
    m_A_sEzsigntemplatesignerIsSet = true;
}

bool Ezsigndocument_applyEzsigntemplate_v1_Request::aSEzsigntemplatesignerIsSet() const
{
    return m_A_sEzsigntemplatesignerIsSet;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::unsetA_sEzsigntemplatesigner()
{
    m_A_sEzsigntemplatesignerIsSet = false;
}
std::vector<int32_t>& Ezsigndocument_applyEzsigntemplate_v1_Request::getAPkiEzsignfoldersignerassociationID()
{
    return m_A_pkiEzsignfoldersignerassociationID;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::setAPkiEzsignfoldersignerassociationID(std::vector<int32_t> value)
{
    m_A_pkiEzsignfoldersignerassociationID = value;
    m_A_pkiEzsignfoldersignerassociationIDIsSet = true;
}

bool Ezsigndocument_applyEzsigntemplate_v1_Request::aPkiEzsignfoldersignerassociationIDIsSet() const
{
    return m_A_pkiEzsignfoldersignerassociationIDIsSet;
}

void Ezsigndocument_applyEzsigntemplate_v1_Request::unsetA_pkiEzsignfoldersignerassociationID()
{
    m_A_pkiEzsignfoldersignerassociationIDIsSet = false;
}
}
}
}
}


