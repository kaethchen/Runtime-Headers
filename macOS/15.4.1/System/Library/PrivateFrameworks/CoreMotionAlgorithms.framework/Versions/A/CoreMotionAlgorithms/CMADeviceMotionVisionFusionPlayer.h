@interface CMADeviceMotionVisionFusionPlayer : NSObject

@property (nonatomic, getter=isFusionEnabled) BOOL fusionEnabled;

- (void)start;
- (void)stop;
- (void)updateLocation:(id)a0;
- (id)getFusedDeviceMotionFrom:(id)a0;
- (id)getFusedDeviceMotionFrom:(id)a0 andAttitudeReferenceFrame:(unsigned long long)a1;
- (void)updateARSessionState:(unsigned long long)a0;
- (void)updateVLLocalizationResult:(id)a0;

@end
