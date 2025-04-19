@interface _CLLocationPlayer : NSObject

@property (nonatomic, getter=isFusionEnabled) BOOL fusionEnabled;
@property (nonatomic, getter=isSimulationEnabled) BOOL simulationEnabled;

- (void)start;
- (void)stop;
- (void)_updateARSessionState:(unsigned long long)a0;
- (void)_updateVIOEstimation:(id)a0;
- (void)_updateVLLocalizationResult:(id)a0;
- (id)_getFusedLocationFrom:(id)a0 machAbsTime:(double)a1;

@end
