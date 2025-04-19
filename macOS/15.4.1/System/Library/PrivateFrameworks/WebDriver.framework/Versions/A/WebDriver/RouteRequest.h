@class NSDictionary, HTTPMessage;

@interface RouteRequest : NSObject {
    HTTPMessage *message;
}

@property (readonly, nonatomic) NSDictionary *headers;
@property (readonly, nonatomic) NSDictionary *params;

- (id)description;
- (void).cxx_destruct;
- (id)url;
- (id)method;
- (id)body;
- (id)header:(id)a0;
- (id)initWithHTTPMessage:(id)a0 parameters:(id)a1;
- (id)param:(id)a0;
- (id)webDriver_decodedPayload;
- (id)webDriver_decodedRequestString;
- (long long)webDriver_httpMethod;
- (id)webDriver_requestedPath;

@end
