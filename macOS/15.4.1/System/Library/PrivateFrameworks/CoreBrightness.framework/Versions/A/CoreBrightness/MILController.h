@class CBMILInterface, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface MILController : NSObject {
    unsigned int _maximumDutyCycle;
    unsigned int _minimumDutyCycle;
    float _knownNits;
    unsigned int _knownDutyCycle;
    float _mappedBrightness;
    BOOL _running;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logHandle;
    CBMILInterface *_milInterface;
}

@property float calibrationScalar;
@property float systemDesiredScalar;
@property (readonly) BOOL isIndicatorEnabled;
@property (readonly) BOOL dutyCycleRangeFetched;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)setBrightness:(float)a0;
- (void)fetchDutyCycleThresholdIfNeeded;
- (float)getBrightness;
- (float)getMaximumAchievableBrightness;
- (float)getMinimumAchievableBrightness;
- (void)handleIndicatorStateChange:(BOOL)a0;
- (id)initWithQueue:(id)a0 andCurveVersion:(unsigned long long)a1;
- (BOOL)setCalibrationSacalar:(float)a0;

@end
