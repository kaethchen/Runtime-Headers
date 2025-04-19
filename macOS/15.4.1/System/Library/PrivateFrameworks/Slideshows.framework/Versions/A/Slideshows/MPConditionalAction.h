@class NSString, MPAction;

@interface MPConditionalAction : MPAction <MPActionSupport>

@property (copy, nonatomic) NSString *predicate;
@property (readonly) MPAction *actionIfTrue;
@property (readonly) MPAction *actionIfFalse;

+ (BOOL)supportsSecureCoding;
+ (id)conditionalAction;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;
- (void)configureTarget;
- (void)configureActions;
- (void)setAction:(id)a0 forCondition:(BOOL)a1;

@end
