@class AFInstanceContext, SCDAAssistantPreferences;

@interface SCDAPreferences : NSObject {
    AFInstanceContext *_instanceContext;
    SCDAAssistantPreferences *_pref;
}

- (void).cxx_destruct;
- (unsigned char)deviceClass;
- (unsigned char)deviceGroup;
- (void)setDeviceClass:(unsigned char)a0;
- (void)setDeviceDelay:(double)a0;
- (double)deviceDelay;
- (double)deviceTrumpDelay;
- (void)setDeviceTrumpDelay:(double)a0;
- (BOOL)BLEActivityEnabled;
- (double)testDeviceDelay;
- (int)constantGoodnessScore;
- (BOOL)coordinationEnabled;
- (BOOL)coordinationEnabledForAccessoryLogging;
- (float)deviceAdjust;
- (double)deviceSlowDown;
- (void)enableCoordination:(BOOL)a0;
- (BOOL)ignoreAdjustedBoost;
- (BOOL)ignorePlatformBias;
- (id)initWithDeviceInstanceContext:(id)a0 preferences:(id)a1;
- (double)maxNoOperationDelay;
- (BOOL)myriadServerHasProvisioned;
- (void)setConstantGoodnessScore:(int)a0;
- (void)setDeviceAdjust:(float)a0;
- (void)setDeviceGroup:(unsigned char)a0 completion:(id /* block */)a1;
- (void)setDeviceSlowDown:(double)a0;
- (void)setIgnoreAdjustedBoost:(BOOL)a0;
- (void)setIgnorePlatformBias:(BOOL)a0;
- (void)setMaxNoOperationDelay:(double)a0;
- (void)setTestDeviceDelay:(double)a0;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)a0;
- (double)voiceTriggerEndtimeDelayThreshold;

@end
