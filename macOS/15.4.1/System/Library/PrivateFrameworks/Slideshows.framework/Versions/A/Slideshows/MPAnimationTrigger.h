@class NSString, NSMutableDictionary;

@interface MPAnimationTrigger : MPAction

@property (copy, nonatomic) NSString *animationKey;
@property (copy, nonatomic) NSMutableDictionary *animationAttributes;

+ (BOOL)supportsSecureCoding;
+ (id)animationTrigger;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;
- (id)animationAttributeForKey:(id)a0;

@end
