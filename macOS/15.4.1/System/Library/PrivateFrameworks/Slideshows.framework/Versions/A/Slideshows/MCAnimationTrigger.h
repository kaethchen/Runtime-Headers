@class NSString, NSMutableDictionary;

@interface MCAnimationTrigger : MCAction

@property (copy) NSString *animationKey;
@property (copy, nonatomic) NSMutableDictionary *animationAttributes;

+ (id)animationTriggerForTargetPlugObjectID:(id)a0 withAnimationKey:(id)a1;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
