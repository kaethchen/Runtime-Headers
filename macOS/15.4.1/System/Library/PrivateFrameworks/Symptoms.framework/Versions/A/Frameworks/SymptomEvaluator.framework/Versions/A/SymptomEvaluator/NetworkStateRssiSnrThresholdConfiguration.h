@interface NetworkStateRssiSnrThresholdConfiguration : NSObject

@property (nonatomic) int lowerSNRThreshold;
@property (nonatomic) int upperSNRThreshold;
@property (nonatomic) int lowerRSSIThreshold;
@property (nonatomic) int upperRSSIThreshold;

- (id)initWithLowerSNRThreshold:(int)a0 upperSNRThreshold:(int)a1 lowerRSSIThreshold:(int)a2 upperRSSIThreshold:(int)a3;

@end
