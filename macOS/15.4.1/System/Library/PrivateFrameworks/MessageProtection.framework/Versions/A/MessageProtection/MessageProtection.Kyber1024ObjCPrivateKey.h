@class NSData, _TtC17MessageProtection22Kyber1024ObjCPublicKey;

@interface MessageProtection.Kyber1024ObjCPrivateKey : NSObject {
    void /* unknown type, empty encoding */ privKey;
}

@property (nonatomic, readonly) NSData *protobufData;
@property (nonatomic, readonly) _TtC17MessageProtection22Kyber1024ObjCPublicKey *publicKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithApKeyBytes:(id)a0 error:(id *)a1;
- (id)initWithProtoBufData:(id)a0 error:(id *)a1;
- (id)initWithSepKeyBytes:(id)a0 error:(id *)a1;

@end
