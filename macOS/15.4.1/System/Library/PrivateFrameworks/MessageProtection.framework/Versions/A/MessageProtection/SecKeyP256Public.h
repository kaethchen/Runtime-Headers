@class NSData, NSString;

@interface SecKeyP256Public : NSObject <P256PublicKeyProtocol>

@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *publicKeyRef;
@property (retain) NSData *serializedKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithSecKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (BOOL)verifySignature:(id)a0 data:(id)a1;

@end
