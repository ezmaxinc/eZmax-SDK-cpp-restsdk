/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Field_eUserType.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



Field_eUserType::Field_eUserType()
{
}

Field_eUserType::~Field_eUserType()
{
}

void Field_eUserType::validate()
{
    // TODO: implement validation
}

web::json::value Field_eUserType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eField_eUserType::Field_eUserType_AGENTBROKER) val = web::json::value::string(U("AgentBroker"));
    if (m_value == eField_eUserType::Field_eUserType_ASSISTANT) val = web::json::value::string(U("Assistant"));
    if (m_value == eField_eUserType::Field_eUserType_ATTENDANCE) val = web::json::value::string(U("Attendance"));
    if (m_value == eField_eUserType::Field_eUserType_CUSTOMER) val = web::json::value::string(U("Customer"));
    if (m_value == eField_eUserType::Field_eUserType_EMPLOYEE) val = web::json::value::string(U("Employee"));
    if (m_value == eField_eUserType::Field_eUserType_EZCOM) val = web::json::value::string(U("Ezcom"));
    if (m_value == eField_eUserType::Field_eUserType_EZSIGNSIGNER) val = web::json::value::string(U("EzsignSigner"));
    if (m_value == eField_eUserType::Field_eUserType_EZSIGNUSER) val = web::json::value::string(U("EzsignUser"));
    if (m_value == eField_eUserType::Field_eUserType_FRANCHISECUSTOMERSERVER) val = web::json::value::string(U("FranchiseCustomerServer"));
    if (m_value == eField_eUserType::Field_eUserType_NORMAL) val = web::json::value::string(U("Normal"));
    if (m_value == eField_eUserType::Field_eUserType_REWARDADMINISTRATION) val = web::json::value::string(U("RewardAdministration"));
    if (m_value == eField_eUserType::Field_eUserType_REWARDMEMBER) val = web::json::value::string(U("RewardMember"));
    if (m_value == eField_eUserType::Field_eUserType_REWARDREPRESENTATIVE) val = web::json::value::string(U("RewardRepresentative"));
    if (m_value == eField_eUserType::Field_eUserType_REWARDCUSTOMER) val = web::json::value::string(U("RewardCustomer"));
    if (m_value == eField_eUserType::Field_eUserType_REWARDDISTRIBUTORSERVER) val = web::json::value::string(U("RewardDistributorServer"));
    if (m_value == eField_eUserType::Field_eUserType_SUPPLIER) val = web::json::value::string(U("Supplier"));
    if (m_value == eField_eUserType::Field_eUserType_VETRXCUSTOMER) val = web::json::value::string(U("VetrxCustomer"));
    if (m_value == eField_eUserType::Field_eUserType_VETRXCUSTOMERGROUP) val = web::json::value::string(U("Vetrxcustomergroup"));
    if (m_value == eField_eUserType::Field_eUserType_VETRXCUSTOMERSERVER) val = web::json::value::string(U("VetrxCustomerServer"));
    if (m_value == eField_eUserType::Field_eUserType_VETRXMANUFACTURER) val = web::json::value::string(U("VetrxManufacturer"));
    if (m_value == eField_eUserType::Field_eUserType_VETRXVENDOR) val = web::json::value::string(U("VetrxVendor"));

    return val;
}

bool Field_eUserType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("AgentBroker")) m_value = eField_eUserType::Field_eUserType_AGENTBROKER;
    if (s == utility::conversions::to_string_t("Assistant")) m_value = eField_eUserType::Field_eUserType_ASSISTANT;
    if (s == utility::conversions::to_string_t("Attendance")) m_value = eField_eUserType::Field_eUserType_ATTENDANCE;
    if (s == utility::conversions::to_string_t("Customer")) m_value = eField_eUserType::Field_eUserType_CUSTOMER;
    if (s == utility::conversions::to_string_t("Employee")) m_value = eField_eUserType::Field_eUserType_EMPLOYEE;
    if (s == utility::conversions::to_string_t("Ezcom")) m_value = eField_eUserType::Field_eUserType_EZCOM;
    if (s == utility::conversions::to_string_t("EzsignSigner")) m_value = eField_eUserType::Field_eUserType_EZSIGNSIGNER;
    if (s == utility::conversions::to_string_t("EzsignUser")) m_value = eField_eUserType::Field_eUserType_EZSIGNUSER;
    if (s == utility::conversions::to_string_t("FranchiseCustomerServer")) m_value = eField_eUserType::Field_eUserType_FRANCHISECUSTOMERSERVER;
    if (s == utility::conversions::to_string_t("Normal")) m_value = eField_eUserType::Field_eUserType_NORMAL;
    if (s == utility::conversions::to_string_t("RewardAdministration")) m_value = eField_eUserType::Field_eUserType_REWARDADMINISTRATION;
    if (s == utility::conversions::to_string_t("RewardMember")) m_value = eField_eUserType::Field_eUserType_REWARDMEMBER;
    if (s == utility::conversions::to_string_t("RewardRepresentative")) m_value = eField_eUserType::Field_eUserType_REWARDREPRESENTATIVE;
    if (s == utility::conversions::to_string_t("RewardCustomer")) m_value = eField_eUserType::Field_eUserType_REWARDCUSTOMER;
    if (s == utility::conversions::to_string_t("RewardDistributorServer")) m_value = eField_eUserType::Field_eUserType_REWARDDISTRIBUTORSERVER;
    if (s == utility::conversions::to_string_t("Supplier")) m_value = eField_eUserType::Field_eUserType_SUPPLIER;
    if (s == utility::conversions::to_string_t("VetrxCustomer")) m_value = eField_eUserType::Field_eUserType_VETRXCUSTOMER;
    if (s == utility::conversions::to_string_t("Vetrxcustomergroup")) m_value = eField_eUserType::Field_eUserType_VETRXCUSTOMERGROUP;
    if (s == utility::conversions::to_string_t("VetrxCustomerServer")) m_value = eField_eUserType::Field_eUserType_VETRXCUSTOMERSERVER;
    if (s == utility::conversions::to_string_t("VetrxManufacturer")) m_value = eField_eUserType::Field_eUserType_VETRXMANUFACTURER;
    if (s == utility::conversions::to_string_t("VetrxVendor")) m_value = eField_eUserType::Field_eUserType_VETRXVENDOR;
    return true;
}

void Field_eUserType::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eField_eUserType::Field_eUserType_AGENTBROKER) s = utility::conversions::to_string_t("AgentBroker");
    if (m_value == eField_eUserType::Field_eUserType_ASSISTANT) s = utility::conversions::to_string_t("Assistant");
    if (m_value == eField_eUserType::Field_eUserType_ATTENDANCE) s = utility::conversions::to_string_t("Attendance");
    if (m_value == eField_eUserType::Field_eUserType_CUSTOMER) s = utility::conversions::to_string_t("Customer");
    if (m_value == eField_eUserType::Field_eUserType_EMPLOYEE) s = utility::conversions::to_string_t("Employee");
    if (m_value == eField_eUserType::Field_eUserType_EZCOM) s = utility::conversions::to_string_t("Ezcom");
    if (m_value == eField_eUserType::Field_eUserType_EZSIGNSIGNER) s = utility::conversions::to_string_t("EzsignSigner");
    if (m_value == eField_eUserType::Field_eUserType_EZSIGNUSER) s = utility::conversions::to_string_t("EzsignUser");
    if (m_value == eField_eUserType::Field_eUserType_FRANCHISECUSTOMERSERVER) s = utility::conversions::to_string_t("FranchiseCustomerServer");
    if (m_value == eField_eUserType::Field_eUserType_NORMAL) s = utility::conversions::to_string_t("Normal");
    if (m_value == eField_eUserType::Field_eUserType_REWARDADMINISTRATION) s = utility::conversions::to_string_t("RewardAdministration");
    if (m_value == eField_eUserType::Field_eUserType_REWARDMEMBER) s = utility::conversions::to_string_t("RewardMember");
    if (m_value == eField_eUserType::Field_eUserType_REWARDREPRESENTATIVE) s = utility::conversions::to_string_t("RewardRepresentative");
    if (m_value == eField_eUserType::Field_eUserType_REWARDCUSTOMER) s = utility::conversions::to_string_t("RewardCustomer");
    if (m_value == eField_eUserType::Field_eUserType_REWARDDISTRIBUTORSERVER) s = utility::conversions::to_string_t("RewardDistributorServer");
    if (m_value == eField_eUserType::Field_eUserType_SUPPLIER) s = utility::conversions::to_string_t("Supplier");
    if (m_value == eField_eUserType::Field_eUserType_VETRXCUSTOMER) s = utility::conversions::to_string_t("VetrxCustomer");
    if (m_value == eField_eUserType::Field_eUserType_VETRXCUSTOMERGROUP) s = utility::conversions::to_string_t("Vetrxcustomergroup");
    if (m_value == eField_eUserType::Field_eUserType_VETRXCUSTOMERSERVER) s = utility::conversions::to_string_t("VetrxCustomerServer");
    if (m_value == eField_eUserType::Field_eUserType_VETRXMANUFACTURER) s = utility::conversions::to_string_t("VetrxManufacturer");
    if (m_value == eField_eUserType::Field_eUserType_VETRXVENDOR) s = utility::conversions::to_string_t("VetrxVendor");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool Field_eUserType::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eField_eUserType v;

        
        if (s == utility::conversions::to_string_t("AgentBroker")) v = eField_eUserType::Field_eUserType_AGENTBROKER;
        if (s == utility::conversions::to_string_t("Assistant")) v = eField_eUserType::Field_eUserType_ASSISTANT;
        if (s == utility::conversions::to_string_t("Attendance")) v = eField_eUserType::Field_eUserType_ATTENDANCE;
        if (s == utility::conversions::to_string_t("Customer")) v = eField_eUserType::Field_eUserType_CUSTOMER;
        if (s == utility::conversions::to_string_t("Employee")) v = eField_eUserType::Field_eUserType_EMPLOYEE;
        if (s == utility::conversions::to_string_t("Ezcom")) v = eField_eUserType::Field_eUserType_EZCOM;
        if (s == utility::conversions::to_string_t("EzsignSigner")) v = eField_eUserType::Field_eUserType_EZSIGNSIGNER;
        if (s == utility::conversions::to_string_t("EzsignUser")) v = eField_eUserType::Field_eUserType_EZSIGNUSER;
        if (s == utility::conversions::to_string_t("FranchiseCustomerServer")) v = eField_eUserType::Field_eUserType_FRANCHISECUSTOMERSERVER;
        if (s == utility::conversions::to_string_t("Normal")) v = eField_eUserType::Field_eUserType_NORMAL;
        if (s == utility::conversions::to_string_t("RewardAdministration")) v = eField_eUserType::Field_eUserType_REWARDADMINISTRATION;
        if (s == utility::conversions::to_string_t("RewardMember")) v = eField_eUserType::Field_eUserType_REWARDMEMBER;
        if (s == utility::conversions::to_string_t("RewardRepresentative")) v = eField_eUserType::Field_eUserType_REWARDREPRESENTATIVE;
        if (s == utility::conversions::to_string_t("RewardCustomer")) v = eField_eUserType::Field_eUserType_REWARDCUSTOMER;
        if (s == utility::conversions::to_string_t("RewardDistributorServer")) v = eField_eUserType::Field_eUserType_REWARDDISTRIBUTORSERVER;
        if (s == utility::conversions::to_string_t("Supplier")) v = eField_eUserType::Field_eUserType_SUPPLIER;
        if (s == utility::conversions::to_string_t("VetrxCustomer")) v = eField_eUserType::Field_eUserType_VETRXCUSTOMER;
        if (s == utility::conversions::to_string_t("Vetrxcustomergroup")) v = eField_eUserType::Field_eUserType_VETRXCUSTOMERGROUP;
        if (s == utility::conversions::to_string_t("VetrxCustomerServer")) v = eField_eUserType::Field_eUserType_VETRXCUSTOMERSERVER;
        if (s == utility::conversions::to_string_t("VetrxManufacturer")) v = eField_eUserType::Field_eUserType_VETRXMANUFACTURER;
        if (s == utility::conversions::to_string_t("VetrxVendor")) v = eField_eUserType::Field_eUserType_VETRXVENDOR;

        setValue(v);
    }
    return ok;
}

Field_eUserType::eField_eUserType Field_eUserType::getValue() const
{
   return m_value;
}

void Field_eUserType::setValue(Field_eUserType::eField_eUserType const value)
{
   m_value = value;
}


}
}
}
}


