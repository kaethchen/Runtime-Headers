@class ICURLPerformanceMetrics, ICURLAggregatedPerformanceMetrics, NSURLResponse, NSData, NSURL, NSURLRequest, NSDate;

@interface ICURLResponse : NSObject {
    long long _parsedBodyResponseType;
    id _parsedBodyResponse;
}

@property (readonly, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) NSURLResponse *urlResponse;
@property (readonly, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) NSURL *bodyDataURL;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) ICURLPerformanceMetrics *performanceMetrics;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *aggregatedPerformanceMetrics;

- (void).cxx_destruct;
- (id)parsedBody;
- (id)parsedBodyDictionary;
- (id)parsedBodyArray;
- (void)_prepareParsedBodyResponse;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyData:(id)a2 performanceMetrics:(id)a3;
- (id)initWithURLResponse:(id)a0 urlRequest:(id)a1 bodyDataURL:(id)a2 performanceMetrics:(id)a3;
- (id)parsedBodyText;

@end
