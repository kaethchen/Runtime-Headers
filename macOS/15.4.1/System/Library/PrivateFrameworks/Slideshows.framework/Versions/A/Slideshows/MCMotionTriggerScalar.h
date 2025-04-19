@interface MCMotionTriggerScalar : MCMotionTrigger

@property (nonatomic) double value;

+ (id)motionTriggerForTargetPlugObjectID:(id)a0 withKey:(id)a1 duration:(double)a2 andValue:(double)a3;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (id)initWithImprint:(id)a0;

@end
