@class NSString, NSDictionary;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *function;
@property (retain, nonatomic) NSDictionary *functionParameters;
@property (nonatomic) double functionTimeOffset;
@property (nonatomic) double functionTimeFactor;
@property (nonatomic) float innerEaseInControl;
@property (nonatomic) float innerEaseOutControl;

+ (id)keyframeWithFunction:(id)a0 atTime:(double)a1 offsetKind:(int)a2 forDuration:(double)a3;

- (id)description;
- (id)init;
- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0;

@end
