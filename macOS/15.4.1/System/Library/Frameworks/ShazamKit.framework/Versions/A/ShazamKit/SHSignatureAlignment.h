@class SHRange;

@interface SHSignatureAlignment : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) float alignmentConfidence;
@property (readonly) SHRange *queryTimeRange;
@property (readonly) SHRange *referenceTimeRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)serializedRepresentation;
- (id)initWithQueryRange:(id)a0 referenceRange:(id)a1 alignmentConfidence:(float)a2;

@end
