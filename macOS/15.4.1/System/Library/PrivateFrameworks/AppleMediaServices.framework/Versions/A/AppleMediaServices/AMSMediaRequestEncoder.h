@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo, AMSURLRequestEncoder;
@protocol AMSBagProtocol, AMSMediaTokenServiceProtocol, AMSResponseDecoding;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSURLRequestEncoder *requestEncoder;
@property BOOL disableAccountMediaTypeComponent;
@property BOOL URLKnownToBeTrusted;
@property (retain) ACAccount *account;
@property BOOL alwaysIncludeAuthKitHeaders;
@property BOOL alwaysIncludeMMeClientInfoAndDeviceHeaders;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property BOOL disableResponseDecoding;
@property (retain) NSString *gsTokenIdentifier;
@property (nonatomic) BOOL excludeIdentifierHeadersForAccount;
@property (retain) NSString *logKey;
@property long long requestEncoding;
@property (retain) id<AMSResponseDecoding> responseDecoder;
@property (readonly) id<AMSMediaTokenServiceProtocol> tokenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)requestWithURL:(id)a0;
- (id)initWithTokenService:(id)a0 bag:(id)a1;
- (id)requestByEncodingRequest:(id)a0 parameters:(id)a1;
- (id)requestWithComponents:(id)a0;

@end
