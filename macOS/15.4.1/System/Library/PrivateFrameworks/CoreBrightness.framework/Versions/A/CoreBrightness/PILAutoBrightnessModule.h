@class NSString, PILABCurve, CILController, MILController, CBALSServiceClient, CBRampManager;

@interface PILAutoBrightnessModule : CBModule <CBContainerModuleProtocol> {
    BOOL _enabled;
    BOOL _firstBrightnessUpdate;
    BOOL _running;
    float _pilbrightness;
    float _minimumAchievableBrightness;
    float _maximumAchievableBrightness;
    BOOL _cilBrightnessRangeSet;
    BOOL _milBrightnessRangeSet;
    PILABCurve *_curve;
    CILController *_cilController;
    MILController *_milController;
    CBRampManager *_rampManager;
    CBALSServiceClient *_alsServiceClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (void)clockUpdateHandler:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (float)currentPILBrightness;
- (float)getMaximumAchievableBrightness;
- (float)getMinimumAchievableBrightness;
- (float)getPILBrightnessTarget;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)handlePILCameraStateChange:(BOOL)a0;
- (void)handlePILMicStateChange:(BOOL)a0;
- (id)initWithQueue:(id)a0 PILParams:(id)a1 calibration:(id)a2 andALSServiceClient:(id)a3;
- (void)initialiseControllersWithCalibration:(id)a0;
- (BOOL)isPILBrightnessRamping;
- (id)newStatusInfo;
- (BOOL)rampPILBrightness:(float)a0 withLength:(float)a1 properties:(id)a2;
- (BOOL)requestPILBrightnessTransitionStop;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)setManualBrightness:(float)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)updateBrightness;
- (BOOL)updateBrightness:(float)a0;
- (void)updateBrightnessForce:(BOOL)a0 periodOverride:(BOOL)a1 period:(float)a2 properties:(id)a3;
- (void)updateCILRangeIfNeeded;
- (void)updateMILRangeIfNeeded;

@end
