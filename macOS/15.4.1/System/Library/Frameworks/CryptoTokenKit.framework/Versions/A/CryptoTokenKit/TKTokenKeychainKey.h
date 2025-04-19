@class NSString, NSData;

@interface TKTokenKeychainKey : TKTokenKeychainItem

@property (readonly) unsigned long long keyUsage;
@property (copy) NSString *keyType;
@property (copy) NSData *applicationTag;
@property long long keySizeInBits;
@property (copy) NSData *publicKeyData;
@property (copy) NSData *publicKeyHash;
@property BOOL canDecrypt;
@property BOOL canSign;
@property BOOL canPerformKeyExchange;
@property (getter=isSuitableForLogin) BOOL suitableForLogin;

+ (BOOL)canDecrypt:(unsigned char)a0;
+ (BOOL)canPerformKeyExchange:(unsigned char)a0;
+ (BOOL)canSign:(unsigned char)a0;

- (void).cxx_destruct;
- (id)keychainAttributes;
- (id)encodedObjectID;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0 objectID:(id)a1;
- (id)initWithItemInfo:(id)a0;
- (id)initWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 label:(id)a1 objectID:(id)a2 canSign:(BOOL)a3 canDecrypt:(BOOL)a4 canPerformKeyExchange:(BOOL)a5;
- (BOOL)satisfiesKeyUsage:(unsigned long long)a0;
- (BOOL)setupWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 label:(id)a1;

@end
