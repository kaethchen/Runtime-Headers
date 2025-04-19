@interface HearingModeSettingsUIMacOS.HMAnalyticManager : NSObject {
    void /* unknown type, empty encoding */ headphoneDevice;
    void /* unknown type, empty encoding */ eventPayload;
}

- (id)init;
- (void).cxx_destruct;
- (void)addCustomEventWithEventName:(long long)a0 key:(long long)a1 value:(id)a2;
- (id)initWithHpDevice:(id)a0;
- (void)sendCustomEvent;
- (void)sendHASettingsEvent;
- (void)sendHPSettingsEvent;

@end
