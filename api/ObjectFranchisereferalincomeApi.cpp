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


#include "ObjectFranchisereferalincomeApi.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace com {
namespace ezmax {
namespace api {

using namespace org::openapitools::client::model;

ObjectFranchisereferalincomeApi::ObjectFranchisereferalincomeApi( std::shared_ptr<const ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

ObjectFranchisereferalincomeApi::~ObjectFranchisereferalincomeApi()
{
}

pplx::task<std::shared_ptr<Franchisereferalincome_createObject_v1_Response>> ObjectFranchisereferalincomeApi::franchisereferalincomeCreateObjectV1(std::vector<std::shared_ptr<Franchisereferalincome_createObject_v1_Request>> franchisereferalincomeCreateObjectV1Request) const
{


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/1/object/franchisereferalincome");
    
    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;
    localVarResponseHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );

    utility::string_t localVarResponseHttpContentType;

    // use JSON if possible
    if ( localVarResponseHttpContentTypes.size() == 0 )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("ObjectFranchisereferalincomeApi->franchisereferalincomeCreateObjectV1 does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;
    localVarConsumeHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );


    std::shared_ptr<IHttpBody> localVarHttpBody;
    utility::string_t localVarRequestHttpContentType;

    // use JSON if possible
    if ( localVarConsumeHttpContentTypes.size() == 0 || localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/json");
        web::json::value localVarJson;

        {
            std::vector<web::json::value> localVarJsonArray;
            for( auto& localVarItem : franchisereferalincomeCreateObjectV1Request )
            {
                localVarJsonArray.push_back( localVarItem.get() ? localVarItem->toJson() : web::json::value::null() );
                
            }
            localVarJson = web::json::value::array(localVarJsonArray);
        }
        
        localVarHttpBody = std::shared_ptr<IHttpBody>( new JsonBody( localVarJson ) );
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> localVarMultipart(new MultipartFormData);

        {
            std::vector<web::json::value> localVarJsonArray;
            for( auto& localVarItem : franchisereferalincomeCreateObjectV1Request )
            {
                localVarJsonArray.push_back(ModelBase::toJson(localVarItem));
            }
            localVarMultipart->add(ModelBase::toHttpContent(utility::conversions::to_string_t("franchisereferalincomeCreateObjectV1Request"), localVarJsonArray, utility::conversions::to_string_t("application/json")));
        }
        

        localVarHttpBody = localVarMultipart;
        localVarRequestHttpContentType += utility::conversions::to_string_t("; boundary=") + localVarMultipart->getBoundary();
    }
    else if (localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/x-www-form-urlencoded")) != localVarConsumeHttpContentTypes.end())
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/x-www-form-urlencoded");
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("ObjectFranchisereferalincomeApi->franchisereferalincomeCreateObjectV1 does not consume any supported media type"));
    }

    // authentication (Authorization) required
    {
        utility::string_t localVarApiKey = localVarApiConfiguration->getApiKey(utility::conversions::to_string_t("Authorization"));
        if ( localVarApiKey.size() > 0 )
        {
            localVarHeaderParams[utility::conversions::to_string_t("Authorization")] = localVarApiKey;
        }
    }

    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("POST"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
    .then([=](web::http::http_response localVarResponse)
    {
        if (m_ApiClient->getResponseHandler())
        {
            m_ApiClient->getResponseHandler()(localVarResponse.status_code(), localVarResponse.headers());
        }

        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (localVarResponse.status_code() >= 400)
        {
            throw ApiException(localVarResponse.status_code()
                , utility::conversions::to_string_t("error calling franchisereferalincomeCreateObjectV1: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling franchisereferalincomeCreateObjectV1: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        std::shared_ptr<Franchisereferalincome_createObject_v1_Response> localVarResult(new Franchisereferalincome_createObject_v1_Response());

        if(localVarResponseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value localVarJson = web::json::value::parse(localVarResponse);

            ModelBase::fromJson(localVarJson, localVarResult);
        }
        // else if(localVarResponseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling franchisereferalincomeCreateObjectV1: unsupported response type"));
        }

        return localVarResult;
    });
}

}
}
}

