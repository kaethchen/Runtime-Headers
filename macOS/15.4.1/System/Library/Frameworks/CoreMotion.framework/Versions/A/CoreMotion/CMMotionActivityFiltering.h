@interface CMMotionActivityFiltering : NSObject

@property double trueRunInBout;
@property double trueWalkInBout;

+ (BOOL)isActivity:(id)a0 sustainedForAttribute:(long long)a1;
+ (BOOL)isTimeFromActivity:(id)a0 toActivity:(id)a1 withinLimitForAttribute:(long long)a2;

- (id)init;
- (void)evaluateNextActivity:(id)a0 attribute:(long long)a1 result:(id)a2;

@end
