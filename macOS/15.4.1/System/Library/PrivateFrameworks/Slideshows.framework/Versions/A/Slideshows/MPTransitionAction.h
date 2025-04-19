@class NSString, NSMutableDictionary, NSObject;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction

@property (copy, nonatomic) NSMutableDictionary *transitionAttributes;
@property (copy, nonatomic) NSString *transitionID;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) NSObject<MPActionableSupport> *transitionDestination;

+ (BOOL)supportsSecureCoding;
+ (id)transitionAction;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAction:(id)a0;
- (void)configureTarget;
- (id)transitionAttributeForKey:(id)a0;

@end
