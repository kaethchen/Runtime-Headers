@interface LNActionSideEffect : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long effect;
@property (readonly, nonatomic) long long changeEffect;

+ (id)noneSideEffect;
+ (id)sideEffectWithChangeEffect:(long long)a0;
+ (id)unknownSideEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSideEffect:(long long)a0 changeEffect:(long long)a1;

@end
