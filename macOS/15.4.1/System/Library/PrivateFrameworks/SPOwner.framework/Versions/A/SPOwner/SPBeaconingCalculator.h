@interface SPBeaconingCalculator : NSObject

+ (id)calculateBeaconStateWithBeginData:(id)a0 nowDate:(id)a1 lastStateChangeDate:(id)a2 isBeaconing:(BOOL)a3 config:(id)a4;
+ (double)exponentialNoBeaconDuration:(double)a0 decayFactor:(double)a1 fastRollAdvertisementDuration:(double)a2 initialNoAdvertisementDuration:(double)a3 noBeaconDuration:(double)a4 timeSinceBegin:(double)a5;

@end
