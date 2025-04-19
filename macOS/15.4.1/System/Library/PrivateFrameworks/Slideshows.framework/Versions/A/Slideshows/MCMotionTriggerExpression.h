@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger

@property (copy) NSString *expression;
@property (copy) NSDictionary *attributes;

+ (id)motionTriggerForTargetPlugObjectID:(id)a0 withKey:(id)a1 duration:(double)a2 andExpression:(id)a3;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
