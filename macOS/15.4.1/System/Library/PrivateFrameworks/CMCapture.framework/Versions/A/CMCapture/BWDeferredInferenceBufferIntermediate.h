@class NSString;

@interface BWDeferredInferenceBufferIntermediate : BWDeferredBufferIntermediate

@property (readonly, nonatomic) NSString *inferenceAttachedMediaKey;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_shortString;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 tag:(id)a1 metadataTag:(id)a2 inferenceAttachedMediaKey:(id)a3 portType:(id)a4 compressionProfile:(int)a5 URL:(id)a6;

@end
