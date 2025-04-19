@class _TtC17MessageProtection22Kyber1024ObjCPublicKey, NSData, NSString;

@interface NGMTetraRegistrationSignatureFormatter : NSObject <SignatureFormatter>

@property (readonly, nonatomic) unsigned int tetraVersion;
@property (readonly, nonatomic) _TtC17MessageProtection22Kyber1024ObjCPublicKey *kyberPublicKey;
@property (readonly, nonatomic) NSData *ecdhPublicKey;
@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)signedData;
- (id)initWithKyberPublicKey:(id)a0 ecdhPublicKey:(id)a1 timestamp:(double)a2 tetraVersion:(unsigned int)a3;
- (id)initWithTetraRegistration:(id)a0;
- (BOOL)isStillValidToDecrypt;
- (BOOL)isStillValidToEncrypt;

@end
