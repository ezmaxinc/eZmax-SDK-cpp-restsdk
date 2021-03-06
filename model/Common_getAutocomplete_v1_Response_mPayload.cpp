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



#include "Common_getAutocomplete_v1_Response_mPayload.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Common_getAutocomplete_v1_Response_mPayload::Common_getAutocomplete_v1_Response_mPayload()
{
    m_Group = utility::conversions::to_string_t("");
    m_GroupIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Option = utility::conversions::to_string_t("");
    m_OptionIsSet = false;
}

Common_getAutocomplete_v1_Response_mPayload::~Common_getAutocomplete_v1_Response_mPayload()
{
}

void Common_getAutocomplete_v1_Response_mPayload::validate()
{
    // TODO: implement validation
}

web::json::value Common_getAutocomplete_v1_Response_mPayload::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_GroupIsSet)
    {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(m_Group);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_OptionIsSet)
    {
        val[utility::conversions::to_string_t("option")] = ModelBase::toJson(m_Option);
    }

    return val;
}

bool Common_getAutocomplete_v1_Response_mPayload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_group;
            ok &= ModelBase::fromJson(fieldValue, refVal_group);
            setGroup(refVal_group);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("option")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_option;
            ok &= ModelBase::fromJson(fieldValue, refVal_option);
            setOption(refVal_option);
        }
    }
    return ok;
}

void Common_getAutocomplete_v1_Response_mPayload::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_GroupIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("group"), m_Group));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_OptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("option"), m_Option));
    }
}

bool Common_getAutocomplete_v1_Response_mPayload::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("group")))
    {
        utility::string_t refVal_group;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("group")), refVal_group );
        setGroup(refVal_group);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("option")))
    {
        utility::string_t refVal_option;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("option")), refVal_option );
        setOption(refVal_option);
    }
    return ok;
}

utility::string_t Common_getAutocomplete_v1_Response_mPayload::getGroup() const
{
    return m_Group;
}

void Common_getAutocomplete_v1_Response_mPayload::setGroup(const utility::string_t& value)
{
    m_Group = value;
    m_GroupIsSet = true;
}

bool Common_getAutocomplete_v1_Response_mPayload::groupIsSet() const
{
    return m_GroupIsSet;
}

void Common_getAutocomplete_v1_Response_mPayload::unsetGroup()
{
    m_GroupIsSet = false;
}
utility::string_t Common_getAutocomplete_v1_Response_mPayload::getId() const
{
    return m_Id;
}

void Common_getAutocomplete_v1_Response_mPayload::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Common_getAutocomplete_v1_Response_mPayload::idIsSet() const
{
    return m_IdIsSet;
}

void Common_getAutocomplete_v1_Response_mPayload::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Common_getAutocomplete_v1_Response_mPayload::getOption() const
{
    return m_Option;
}

void Common_getAutocomplete_v1_Response_mPayload::setOption(const utility::string_t& value)
{
    m_Option = value;
    m_OptionIsSet = true;
}

bool Common_getAutocomplete_v1_Response_mPayload::optionIsSet() const
{
    return m_OptionIsSet;
}

void Common_getAutocomplete_v1_Response_mPayload::unsetOption()
{
    m_OptionIsSet = false;
}
}
}
}
}


