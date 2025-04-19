@class NSNumber, NSString, NSData;

@interface PlatformSSOCore.POUserUnlockKeySwift : NSObject {
    void /* unknown type, empty encoding */ encryptedKeyData;
    void /* unknown type, empty encoding */ keyData;
}

@property (class, nonatomic, readonly) NSNumber *prebootEncryptionAlgorithm;

@property (nonatomic, copy) NSString *encryptedKeyData;
@property (nonatomic, copy) NSData *keyData;

+ (id)createUnlockKeyWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 error:(id *)a1;
+ (id)unlockKeyWithEncryptedKey:(id)a0 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
