@class FindDeviceAndPlaySoundIntentResponse, FindDeviceAndPlaySoundIntent, NSArray;

@interface SiriFindMy.FindDeviceAndPlaySoundIntentHandler : INExtension <FindDeviceAndPlaySoundIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ appInstalledState;
    void /* unknown type, empty encoding */ deviceLockStateProvider;
    void /* unknown type, empty encoding */ findDeviceSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmFindDeviceAndPlaySound:(FindDeviceAndPlaySoundIntent *)a0 completion:(void (^)(FindDeviceAndPlaySoundIntentResponse *))a1;
- (void)handleFindDeviceAndPlaySound:(FindDeviceAndPlaySoundIntent *)a0 completion:(void (^)(FindDeviceAndPlaySoundIntentResponse *))a1;
- (id)handlerForIntent:(id)a0;
- (void)resolveDevicesForFindDeviceAndPlaySound:(FindDeviceAndPlaySoundIntent *)a0 withCompletion:(void (^)(NSArray *))a1;

@end
