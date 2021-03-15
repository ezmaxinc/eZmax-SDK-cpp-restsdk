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
 * Common_Response_objDebug.h
 *
 * This is a generic debug object that is returned by all API requests
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objDebug_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objDebug_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>
#include "Common_Response_objSQLQuery.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// This is a generic debug object that is returned by all API requests
/// </summary>
class  Common_Response_objDebug
    : public ModelBase
{
public:
    Common_Response_objDebug();
    virtual ~Common_Response_objDebug();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Response_objDebug members

    /// <summary>
    /// The peak memory allocated during the API request execution. Formatted as a human readable string
    /// </summary>
    utility::string_t getSMemoryUsage() const;
    bool sMemoryUsageIsSet() const;
    void unsetSMemoryUsage();

    void setSMemoryUsage(const utility::string_t& value);

    /// <summary>
    /// The total server execution time of the API request execution. Formatted as a human readable string
    /// </summary>
    utility::string_t getSRunTime() const;
    bool sRunTimeIsSet() const;
    void unsetSRunTime();

    void setSRunTime(const utility::string_t& value);

    /// <summary>
    /// The number of SQL SELECT queries that were sent to the database server during the API request execution
    /// </summary>
    int32_t getISQLSelects() const;
    bool iSQLSelectsIsSet() const;
    void unsetISQLSelects();

    void setISQLSelects(int32_t value);

    /// <summary>
    /// The number of SQL INSERT/UPDATE/DELETE queries that were sent to the database server during the API request execution
    /// </summary>
    int32_t getISQLQueries() const;
    bool iSQLQueriesIsSet() const;
    void unsetISQLQueries();

    void setISQLQueries(int32_t value);

    /// <summary>
    /// An array of the SQL Queries that were executed during the API request execution
    /// </summary>
    std::vector<std::shared_ptr<Common_Response_objSQLQuery>>& getAObjSQLQuery();
    bool aObjSQLQueryIsSet() const;
    void unsetA_objSQLQuery();

    void setAObjSQLQuery(const std::vector<std::shared_ptr<Common_Response_objSQLQuery>>& value);


protected:
    utility::string_t m_SMemoryUsage;
    bool m_SMemoryUsageIsSet;
    utility::string_t m_SRunTime;
    bool m_SRunTimeIsSet;
    int32_t m_ISQLSelects;
    bool m_ISQLSelectsIsSet;
    int32_t m_ISQLQueries;
    bool m_ISQLQueriesIsSet;
    std::vector<std::shared_ptr<Common_Response_objSQLQuery>> m_A_objSQLQuery;
    bool m_A_objSQLQueryIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objDebug_H_ */
