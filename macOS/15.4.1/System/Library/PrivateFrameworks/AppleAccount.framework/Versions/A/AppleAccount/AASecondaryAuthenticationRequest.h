@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {
    NSString *_primaryToken;
    NSString *_dsid;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)initWithDSID:(id)a0 primaryToken:(id)a1;

@end
