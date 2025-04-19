@class DHKey, NGMECDHPublicPreKey, _TtC17MessageProtection17TetraRegistration, _TtC17MessageProtection23Kyber1024ObjCPrivateKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMECDHPublicPreKey *publicPrekey;
@property (readonly, nonatomic) _TtC17MessageProtection17TetraRegistration *tetraRegistration;
@property (readonly, nonatomic) _TtC17MessageProtection23Kyber1024ObjCPrivateKey *tetraPrivateKey;

+ (id)fullPrekeyForTestingSignedBy:(id)a0;
+ (id)newCompactPrivateKey;

- (id)description;
- (void).cxx_destruct;
- (BOOL)delete;
- (id)keychainData;
- (id)initWithPBPrekey:(id)a0 verifySignedBy:(id)a1 error:(id *)a2;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (BOOL)isSEPKey;
- (id)pbDevicePrekey;

@end
