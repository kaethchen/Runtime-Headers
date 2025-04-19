@class NSString, NSImage;
@protocol RWIPairableDelegate;

@interface RWINetworkPairableMobileDeviceTarget : RWIMobileDeviceTargetBase <RWIPairable> {
    NSImage *_icon;
    NSImage *_symbolImage;
    long long _deviceClass;
}

@property (weak, nonatomic) id<RWIPairableDelegate> pairingDelegate;
@property (readonly, nonatomic) long long pairingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isReady;
- (void)pair;
- (id)icon;
- (long long)deviceClass;
- (id)symbolImage;
- (BOOL)supportsRemoteWebInspector;
- (void)_deviceQueue_pairWithPINRequestReason:(long long)a0;
- (void)_fetchDeviceInformation;
- (void)_transitionToPairingState:(long long)a0;
- (id)initWithMobileDeviceConnection:(id)a0 manager:(id)a1;
- (BOOL)supportsWebDriver;

@end
