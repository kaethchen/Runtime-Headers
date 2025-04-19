@class NSDate;

@interface PLQuickEnergySnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuEnergy;
@property double networkEnergy;

- (id)description;
- (void).cxx_destruct;
- (double)computeEnergyDiff:(id)a0;
- (double)getTotalEnergy;
- (id)initWithEnergies:(double)a0 andNetworkEnergy:(double)a1;

@end
