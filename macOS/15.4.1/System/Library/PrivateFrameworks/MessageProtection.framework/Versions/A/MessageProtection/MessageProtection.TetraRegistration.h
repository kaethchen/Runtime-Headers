@class NSData;

@interface MessageProtection.TetraRegistration : NSObject {
    void /* unknown type, empty encoding */ ecdhPublicKey;
    void /* unknown type, empty encoding */ signature;
}

@property (nonatomic, readonly) NSData *serializedECDHPublicKey;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ kyberPublicKey;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ tetraVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ signingPublicKey;
@property (nonatomic, readonly) NSData *registrationData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKyberPublicKey:(id)a0 ecdhPublicKey:(id)a1 timestamp:(double)a2 version:(unsigned int)a3 signedBy:(id)a4;
- (id)initWithTetraRegistrationData:(id)a0 ecdhPublicKey:(id)a1 version:(unsigned int)a2 timestamp:(double)a3 signedBy:(id)a4 isEncrypting:(BOOL)a5 error:(id *)a6;

@end
