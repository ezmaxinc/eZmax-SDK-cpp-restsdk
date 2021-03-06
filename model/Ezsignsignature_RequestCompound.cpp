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



#include "Ezsignsignature_RequestCompound.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Ezsignsignature_RequestCompound::Ezsignsignature_RequestCompound()
{
    m_FkiEzsignfoldersignerassociationID = 0;
    m_FkiEzsignfoldersignerassociationIDIsSet = false;
    m_IEzsignpagePagenumber = 0;
    m_IEzsignpagePagenumberIsSet = false;
    m_IEzsignsignatureX = 0;
    m_IEzsignsignatureXIsSet = false;
    m_IEzsignsignatureY = 0;
    m_IEzsignsignatureYIsSet = false;
    m_IEzsignsignatureStep = 0;
    m_IEzsignsignatureStepIsSet = false;
    m_EEzsignsignatureTypeIsSet = false;
    m_FkiEzsigndocumentID = 0;
    m_FkiEzsigndocumentIDIsSet = false;
}

Ezsignsignature_RequestCompound::~Ezsignsignature_RequestCompound()
{
}

void Ezsignsignature_RequestCompound::validate()
{
    // TODO: implement validation
}

web::json::value Ezsignsignature_RequestCompound::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FkiEzsignfoldersignerassociationIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsignfoldersignerassociationID")] = ModelBase::toJson(m_FkiEzsignfoldersignerassociationID);
    }
    if(m_IEzsignpagePagenumberIsSet)
    {
        val[utility::conversions::to_string_t("iEzsignpagePagenumber")] = ModelBase::toJson(m_IEzsignpagePagenumber);
    }
    if(m_IEzsignsignatureXIsSet)
    {
        val[utility::conversions::to_string_t("iEzsignsignatureX")] = ModelBase::toJson(m_IEzsignsignatureX);
    }
    if(m_IEzsignsignatureYIsSet)
    {
        val[utility::conversions::to_string_t("iEzsignsignatureY")] = ModelBase::toJson(m_IEzsignsignatureY);
    }
    if(m_IEzsignsignatureStepIsSet)
    {
        val[utility::conversions::to_string_t("iEzsignsignatureStep")] = ModelBase::toJson(m_IEzsignsignatureStep);
    }
    if(m_EEzsignsignatureTypeIsSet)
    {
        val[utility::conversions::to_string_t("eEzsignsignatureType")] = ModelBase::toJson(m_EEzsignsignatureType);
    }
    if(m_FkiEzsigndocumentIDIsSet)
    {
        val[utility::conversions::to_string_t("fkiEzsigndocumentID")] = ModelBase::toJson(m_FkiEzsigndocumentID);
    }

    return val;
}

bool Ezsignsignature_RequestCompound::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fkiEzsignfoldersignerassociationID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsignfoldersignerassociationID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsignfoldersignerassociationID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsignfoldersignerassociationID);
            setFkiEzsignfoldersignerassociationID(refVal_fkiEzsignfoldersignerassociationID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsignpagePagenumber")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsignpagePagenumber"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsignpagePagenumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsignpagePagenumber);
            setIEzsignpagePagenumber(refVal_iEzsignpagePagenumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsignsignatureX")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsignsignatureX"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsignsignatureX;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsignsignatureX);
            setIEzsignsignatureX(refVal_iEzsignsignatureX);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsignsignatureY")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsignsignatureY"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsignsignatureY;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsignsignatureY);
            setIEzsignsignatureY(refVal_iEzsignsignatureY);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iEzsignsignatureStep")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iEzsignsignatureStep"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_iEzsignsignatureStep;
            ok &= ModelBase::fromJson(fieldValue, refVal_iEzsignsignatureStep);
            setIEzsignsignatureStep(refVal_iEzsignsignatureStep);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eEzsignsignatureType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eEzsignsignatureType"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Field_eEzsignsignatureType> refVal_eEzsignsignatureType;
            ok &= ModelBase::fromJson(fieldValue, refVal_eEzsignsignatureType);
            setEEzsignsignatureType(refVal_eEzsignsignatureType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fkiEzsigndocumentID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fkiEzsigndocumentID"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_fkiEzsigndocumentID;
            ok &= ModelBase::fromJson(fieldValue, refVal_fkiEzsigndocumentID);
            setFkiEzsigndocumentID(refVal_fkiEzsigndocumentID);
        }
    }
    return ok;
}

void Ezsignsignature_RequestCompound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FkiEzsignfoldersignerassociationIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsignfoldersignerassociationID"), m_FkiEzsignfoldersignerassociationID));
    }
    if(m_IEzsignpagePagenumberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsignpagePagenumber"), m_IEzsignpagePagenumber));
    }
    if(m_IEzsignsignatureXIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsignsignatureX"), m_IEzsignsignatureX));
    }
    if(m_IEzsignsignatureYIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsignsignatureY"), m_IEzsignsignatureY));
    }
    if(m_IEzsignsignatureStepIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iEzsignsignatureStep"), m_IEzsignsignatureStep));
    }
    if(m_EEzsignsignatureTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eEzsignsignatureType"), m_EEzsignsignatureType));
    }
    if(m_FkiEzsigndocumentIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fkiEzsigndocumentID"), m_FkiEzsigndocumentID));
    }
}

bool Ezsignsignature_RequestCompound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsignfoldersignerassociationID")))
    {
        int32_t refVal_fkiEzsignfoldersignerassociationID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsignfoldersignerassociationID")), refVal_fkiEzsignfoldersignerassociationID );
        setFkiEzsignfoldersignerassociationID(refVal_fkiEzsignfoldersignerassociationID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsignpagePagenumber")))
    {
        int32_t refVal_iEzsignpagePagenumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsignpagePagenumber")), refVal_iEzsignpagePagenumber );
        setIEzsignpagePagenumber(refVal_iEzsignpagePagenumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsignsignatureX")))
    {
        int32_t refVal_iEzsignsignatureX;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsignsignatureX")), refVal_iEzsignsignatureX );
        setIEzsignsignatureX(refVal_iEzsignsignatureX);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsignsignatureY")))
    {
        int32_t refVal_iEzsignsignatureY;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsignsignatureY")), refVal_iEzsignsignatureY );
        setIEzsignsignatureY(refVal_iEzsignsignatureY);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iEzsignsignatureStep")))
    {
        int32_t refVal_iEzsignsignatureStep;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iEzsignsignatureStep")), refVal_iEzsignsignatureStep );
        setIEzsignsignatureStep(refVal_iEzsignsignatureStep);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eEzsignsignatureType")))
    {
        std::shared_ptr<Field_eEzsignsignatureType> refVal_eEzsignsignatureType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eEzsignsignatureType")), refVal_eEzsignsignatureType );
        setEEzsignsignatureType(refVal_eEzsignsignatureType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fkiEzsigndocumentID")))
    {
        int32_t refVal_fkiEzsigndocumentID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fkiEzsigndocumentID")), refVal_fkiEzsigndocumentID );
        setFkiEzsigndocumentID(refVal_fkiEzsigndocumentID);
    }
    return ok;
}

int32_t Ezsignsignature_RequestCompound::getFkiEzsignfoldersignerassociationID() const
{
    return m_FkiEzsignfoldersignerassociationID;
}

void Ezsignsignature_RequestCompound::setFkiEzsignfoldersignerassociationID(int32_t value)
{
    m_FkiEzsignfoldersignerassociationID = value;
    m_FkiEzsignfoldersignerassociationIDIsSet = true;
}

bool Ezsignsignature_RequestCompound::fkiEzsignfoldersignerassociationIDIsSet() const
{
    return m_FkiEzsignfoldersignerassociationIDIsSet;
}

void Ezsignsignature_RequestCompound::unsetFkiEzsignfoldersignerassociationID()
{
    m_FkiEzsignfoldersignerassociationIDIsSet = false;
}
int32_t Ezsignsignature_RequestCompound::getIEzsignpagePagenumber() const
{
    return m_IEzsignpagePagenumber;
}

void Ezsignsignature_RequestCompound::setIEzsignpagePagenumber(int32_t value)
{
    m_IEzsignpagePagenumber = value;
    m_IEzsignpagePagenumberIsSet = true;
}

bool Ezsignsignature_RequestCompound::iEzsignpagePagenumberIsSet() const
{
    return m_IEzsignpagePagenumberIsSet;
}

void Ezsignsignature_RequestCompound::unsetIEzsignpagePagenumber()
{
    m_IEzsignpagePagenumberIsSet = false;
}
int32_t Ezsignsignature_RequestCompound::getIEzsignsignatureX() const
{
    return m_IEzsignsignatureX;
}

void Ezsignsignature_RequestCompound::setIEzsignsignatureX(int32_t value)
{
    m_IEzsignsignatureX = value;
    m_IEzsignsignatureXIsSet = true;
}

bool Ezsignsignature_RequestCompound::iEzsignsignatureXIsSet() const
{
    return m_IEzsignsignatureXIsSet;
}

void Ezsignsignature_RequestCompound::unsetIEzsignsignatureX()
{
    m_IEzsignsignatureXIsSet = false;
}
int32_t Ezsignsignature_RequestCompound::getIEzsignsignatureY() const
{
    return m_IEzsignsignatureY;
}

void Ezsignsignature_RequestCompound::setIEzsignsignatureY(int32_t value)
{
    m_IEzsignsignatureY = value;
    m_IEzsignsignatureYIsSet = true;
}

bool Ezsignsignature_RequestCompound::iEzsignsignatureYIsSet() const
{
    return m_IEzsignsignatureYIsSet;
}

void Ezsignsignature_RequestCompound::unsetIEzsignsignatureY()
{
    m_IEzsignsignatureYIsSet = false;
}
int32_t Ezsignsignature_RequestCompound::getIEzsignsignatureStep() const
{
    return m_IEzsignsignatureStep;
}

void Ezsignsignature_RequestCompound::setIEzsignsignatureStep(int32_t value)
{
    m_IEzsignsignatureStep = value;
    m_IEzsignsignatureStepIsSet = true;
}

bool Ezsignsignature_RequestCompound::iEzsignsignatureStepIsSet() const
{
    return m_IEzsignsignatureStepIsSet;
}

void Ezsignsignature_RequestCompound::unsetIEzsignsignatureStep()
{
    m_IEzsignsignatureStepIsSet = false;
}
std::shared_ptr<Field_eEzsignsignatureType> Ezsignsignature_RequestCompound::getEEzsignsignatureType() const
{
    return m_EEzsignsignatureType;
}

void Ezsignsignature_RequestCompound::setEEzsignsignatureType(const std::shared_ptr<Field_eEzsignsignatureType>& value)
{
    m_EEzsignsignatureType = value;
    m_EEzsignsignatureTypeIsSet = true;
}

bool Ezsignsignature_RequestCompound::eEzsignsignatureTypeIsSet() const
{
    return m_EEzsignsignatureTypeIsSet;
}

void Ezsignsignature_RequestCompound::unsetEEzsignsignatureType()
{
    m_EEzsignsignatureTypeIsSet = false;
}
int32_t Ezsignsignature_RequestCompound::getFkiEzsigndocumentID() const
{
    return m_FkiEzsigndocumentID;
}

void Ezsignsignature_RequestCompound::setFkiEzsigndocumentID(int32_t value)
{
    m_FkiEzsigndocumentID = value;
    m_FkiEzsigndocumentIDIsSet = true;
}

bool Ezsignsignature_RequestCompound::fkiEzsigndocumentIDIsSet() const
{
    return m_FkiEzsigndocumentIDIsSet;
}

void Ezsignsignature_RequestCompound::unsetFkiEzsigndocumentID()
{
    m_FkiEzsigndocumentIDIsSet = false;
}
}
}
}
}


