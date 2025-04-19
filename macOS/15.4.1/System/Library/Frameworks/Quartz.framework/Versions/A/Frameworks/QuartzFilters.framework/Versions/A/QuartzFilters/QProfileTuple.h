@interface QProfileTuple : QComponentInfoTuple

@property int data;
@property int object;
@property long long profile;

+ (id)profileTupleWithProfile:(long long)a0 data:(int)a1 object:(int)a2;

- (id)init;
- (id)initWithProfile:(long long)a0 data:(int)a1 object:(int)a2;

@end
