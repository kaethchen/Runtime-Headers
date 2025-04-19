@class NSString;
@protocol LACDTOSensorTrustStateProvider, LACDTOFeatureStateProviding, LACDTODeviceSetupInfoProvider, LACKeyBag;

@interface LACDTOLocationPrewarmStrategy : NSObject <LACDTOLocationPrewarmStrategy> {
    id<LACDTOFeatureStateProviding> _featureStateProvider;
    id<LACDTOSensorTrustStateProvider> _trustStateProvider;
    id<LACDTODeviceSetupInfoProvider> _device;
    id<LACKeyBag> _keybag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)checkNeedsPrewarmWithCompletion:(id /* block */)a0;
- (id)initWithFeatureStateProvider:(id)a0 trustStateProvider:(id)a1 device:(id)a2 keybag:(id)a3;

@end
