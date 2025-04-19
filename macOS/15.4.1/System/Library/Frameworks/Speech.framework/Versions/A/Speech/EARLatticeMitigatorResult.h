@class NSString;

@interface EARLatticeMitigatorResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float calibrationScale;
@property (readonly, nonatomic) float calibrationOffset;
@property (readonly, nonatomic) BOOL processed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLatticeMitigatorResult:(id)a0;

@end
