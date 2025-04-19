@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {
    NSMutableDictionary *_additionalCookieHeaders;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (void)addCookieHeaders:(id)a0;
- (id)initWithURLString:(id)a0 username:(id)a1 password:(id)a2;

@end
