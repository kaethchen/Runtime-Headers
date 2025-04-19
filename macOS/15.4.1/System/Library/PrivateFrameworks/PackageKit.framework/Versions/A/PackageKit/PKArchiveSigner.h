@class NSString;

@interface PKArchiveSigner : NSObject {
    NSString *_algorithmType;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *_privateKeyRef;
    struct _CMSEncoder { } *_encoder;
    struct __CFDictionary { } *_tsaContext;
    int _signatureSize;
}

- (void)dealloc;
- (id)initWithSigningIdentity:(struct __SecIdentity { } *)a0 algorithm:(id)a1 usingTSAIfSupported:(BOOL)a2;
- (void)setSignatureSize:(int)a0;
- (id)signatureDataBySigningData:(id)a0;
- (int)signatureSize;

@end
