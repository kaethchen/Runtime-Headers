@class NSObject;
@protocol OS_os_log;

@interface CILController : NSObject {
    unsigned long long _curveVersion;
    unsigned int _maximumDutyCycle;
    unsigned int _minimumDutyCycle;
    float _knownNits;
    unsigned int _knownDutyCycle;
    float _mappedBrightness;
    BOOL _running;
    NSObject<OS_os_log> *_logHandle;
    void *_apdsConnection;
}

@property float calibrationScalar;
@property float systemDesiredScalar;
@property (readonly) BOOL isIndicatorEnabled;
@property (readonly) BOOL dutyCycleRangeFetched;

- (void)dealloc;
- (void)start;
- (void)stop;
- (BOOL)setBrightness:(float)a0;
- (void)fetchDutyCycleRangeIfNeeded;
- (float)getBrightness;
- (float)getMaximumAchievableBrightness;
- (float)getMinimumAchievableBrightness;
- (void)handleIndicatorStateChange:(BOOL)a0;
- (id)initWithCurveVersion:(unsigned long long)a0;
- (BOOL)setCalibrationSacalar:(float)a0;

@end
