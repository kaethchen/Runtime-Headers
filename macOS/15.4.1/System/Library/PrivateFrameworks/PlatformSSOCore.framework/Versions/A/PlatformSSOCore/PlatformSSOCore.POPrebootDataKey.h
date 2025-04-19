@class NSNumber, NSString, NSData;

@interface PlatformSSOCore.POPrebootDataKey : NSObject {
    void /* unknown type, empty encoding */ encryptedKeyData;
    void /* unknown type, empty encoding */ keyData;
}

@property (class, nonatomic, readonly) NSNumber *prebootEncryptionAlgorithm;

@property (nonatomic, copy) NSString *encryptedKeyData;
@property (nonatomic, copy) NSData *keyData;

+ (id)createKeyAndReturnError:(id *)a0;
+ (id)decryptWithData:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
+ (id)encryptWithData:(id)a0 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
+ (id)verifiedKeyWithPrebootData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
