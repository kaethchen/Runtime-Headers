@interface QIntentTuple : QComponentInfoTuple

@property int data;
@property int object;
@property int intent;

+ (id)intentTupleWithIntent:(int)a0 data:(int)a1 object:(int)a2;

- (id)init;
- (id)initWithIntent:(int)a0 data:(int)a1 object:(int)a2;

@end
