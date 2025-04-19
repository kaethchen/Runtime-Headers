@class NSData, NSString;

@interface STSTapToProvisionResult : NSObject

@property (readonly, copy, nonatomic) NSData *provisionDataBlob;
@property (readonly, copy, nonatomic) NSData *casdCertificate;
@property (readonly, copy, nonatomic) NSString *platformId;
@property (readonly, copy, nonatomic) NSString *configId;
@property (readonly, copy, nonatomic) NSString *transactionId;
@property (readonly, copy, nonatomic) NSData *casdSignature;
@property (readonly, copy, nonatomic) NSData *authenticationTag;
@property (readonly, copy, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, copy, nonatomic) NSString *formatVersion;
@property (readonly, copy, nonatomic) NSData *keyIdentifier;

- (void).cxx_destruct;
- (id)initWithProvisionDataBlob:(id)a0 casdCertificate:(id)a1;

@end
