@class NSString;

@interface SCNAnimationReference : CAAnimationGroup

@property (copy, nonatomic) NSString *referenceName;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isAReference;

@end
