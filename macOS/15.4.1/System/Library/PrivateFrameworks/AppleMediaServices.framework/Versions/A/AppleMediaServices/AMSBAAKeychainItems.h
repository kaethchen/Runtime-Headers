@class NSData;

@interface AMSBAAKeychainItems : NSObject {
    id _BIKKey;
}

@property (readonly, nonatomic) NSData *BAACert;
@property (readonly, nonatomic) struct __SecKey { } *BIKKeyRef;
@property (readonly, nonatomic) NSData *IntermediateRootCert;

- (void).cxx_destruct;
- (id)initWithBAACert:(id)a0 BIKKey:(struct __SecKey { } *)a1 intermediateRootCert:(id)a2;

@end
