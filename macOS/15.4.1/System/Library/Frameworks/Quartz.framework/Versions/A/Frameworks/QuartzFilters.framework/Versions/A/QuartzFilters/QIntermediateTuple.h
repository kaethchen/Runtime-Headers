@interface QIntermediateTuple : QComponentInfoTuple

@property int type;
@property int data;
@property int object;
@property int brightnessLights;
@property int brightnessMidTones;
@property int brightnessDarks;
@property int tint;
@property int hue;
@property int sat;
@property int bwLevel;
@property int profile;

+ (id)intermediateTupleOfType:(int)a0 data:(int)a1 object:(int)a2;

- (id)init;
- (id)initWithType:(int)a0 data:(int)a1 object:(int)a2;

@end
