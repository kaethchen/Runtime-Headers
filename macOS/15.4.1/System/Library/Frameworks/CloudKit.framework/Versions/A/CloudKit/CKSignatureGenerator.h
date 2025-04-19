@interface CKSignatureGenerator : NSObject

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) BOOL valid;

+ (BOOL)isValidSignature:(id)a0;
+ (BOOL)isValidV2Signature:(id)a0;
+ (id)signatureForStreamingAsset;
+ (id)signatureWithFileDescriptor:(int)a0 boundaryKey:(id)a1 error:(id *)a2;
+ (id)signatureWithFileDescriptor:(int)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void)updateWithData:(id)a0;
- (char *)_newSignatureByFinishingGenerator;
- (id)dataByFinishingSignature;
- (id)initWithBoundaryKey:(id)a0;
- (id)initWithVerificationKey:(id)a0;
- (void)updateWithBytes:(const void *)a0 length:(unsigned long long)a1;

@end
