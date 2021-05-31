/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.44
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.2.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Common_Response_objSQLQuery.h
 *
 * Definition of objSQLQuery Object
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objSQLQuery_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objSQLQuery_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// Definition of objSQLQuery Object
/// </summary>
class  Common_Response_objSQLQuery
    : public ModelBase
{
public:
    Common_Response_objSQLQuery();
    virtual ~Common_Response_objSQLQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Common_Response_objSQLQuery members

    /// <summary>
    /// The SQL Query
    /// </summary>
    utility::string_t getSQuery() const;
    bool sQueryIsSet() const;
    void unsetSQuery();

    void setSQuery(const utility::string_t& value);

    /// <summary>
    /// Execution time of the SQL Query in seconds
    /// </summary>
    float getFDuration() const;
    bool fDurationIsSet() const;
    void unsetFDuration();

    void setFDuration(float value);


protected:
    utility::string_t m_SQuery;
    bool m_SQueryIsSet;
    float m_FDuration;
    bool m_FDurationIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Common_Response_objSQLQuery_H_ */
