@class NSURLRequest;

@interface AATermsReportUserActionRequest : AARequest {
    NSURLRequest *_urlRequest;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 urlRequest:(id)a1 parameters:(id)a2;

@end
