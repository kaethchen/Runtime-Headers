@interface SCRMovementInfo : NSObject

@property (nonatomic) long long direction;
@property (nonatomic) double distance;
@property (nonatomic) long long adjustmentType;
@property (nonatomic) unsigned long long counter;

- (id)initWithDirection:(long long)a0 distance:(double)a1 adjustmentType:(long long)a2;

@end
