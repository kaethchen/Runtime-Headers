@class NSData;

@interface NetworkExtension.NEIKEv2CryptoKitKEM : NSObject {
    void /* unknown type, empty encoding */ internalSharedSecret;
    void /* unknown type, empty encoding */ keyExchangeData;
}

@property (nonatomic, readonly) NSData *keyExchangeData;
@property (nonatomic, readonly) NSData *sharedSecret;

- (id)init;
- (void).cxx_destruct;
- (BOOL)processPeerPayload:(id)a0 error:(id *)a1;

@end
