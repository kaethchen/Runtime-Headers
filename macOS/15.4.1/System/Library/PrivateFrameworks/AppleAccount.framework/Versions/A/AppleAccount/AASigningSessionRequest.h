@class NSData;

@interface AASigningSessionRequest : AARequest {
    NSData *_sessionInfoRequestData;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 sessionInfoRequestData:(id)a1;

@end
