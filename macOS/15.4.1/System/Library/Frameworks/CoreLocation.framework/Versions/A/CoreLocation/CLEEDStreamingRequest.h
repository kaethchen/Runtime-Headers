@class NSString;

@interface CLEEDStreamingRequest : CLEEDRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *baseURL;
@property (retain, nonatomic) NSString *relativePath;
@property (retain, nonatomic) NSString *streamingURL;
@property (readonly, retain, nonatomic) NSString *token;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(long long *)a1;
- (id)getRequestDict;
- (id)initWithDictionary:(id)a0 decryptedRequestData:(id)a1 baseURL:(id)a2 error:(long long *)a3;
- (id)initWithID:(id)a0 psapID:(id)a1 partnerID:(id)a2 geofenceID:(id)a3 requestDate:(id)a4 state:(long long)a5 baseURL:(id)a6 relativePath:(id)a7 token:(id)a8;

@end
