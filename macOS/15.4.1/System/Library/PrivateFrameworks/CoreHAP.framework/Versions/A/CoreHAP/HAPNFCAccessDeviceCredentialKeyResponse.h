@class NSData, HAPNFCAccessResponseStatusWrapper, NSString;

@interface HAPNFCAccessDeviceCredentialKeyResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) NSData *issuerKeyIdentifier;
@property (retain, nonatomic) HAPNFCAccessResponseStatusWrapper *statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 issuerKeyIdentifier:(id)a1 statusCode:(id)a2;

@end
