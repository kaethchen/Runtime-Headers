@interface IDSFeatureToggleUpdateResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (nonatomic) unsigned long long error;

+ (id)resultWithError:(unsigned long long)a0;
+ (id)successfulResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(unsigned long long)a0;

@end
