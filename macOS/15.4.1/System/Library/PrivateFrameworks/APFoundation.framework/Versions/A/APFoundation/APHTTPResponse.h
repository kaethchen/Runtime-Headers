@class NSHTTPURLResponse, NSDictionary, NSData, NSError;

@interface APHTTPResponse : NSObject

@property (nonatomic) long long responseStatusCode;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) NSHTTPURLResponse *URLResponse;
@property (retain, nonatomic) NSDictionary *responseHeaders;
@property (retain, nonatomic) NSData *responseBody;

+ (id)createWithResponseData:(id)a0 URLResponse:(id)a1 error:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)valid;
- (id)_initWithResponseData:(id)a0 URLResponse:(id)a1 error:(id)a2;
- (id)valueForResponseHeaderField:(id)a0;

@end
