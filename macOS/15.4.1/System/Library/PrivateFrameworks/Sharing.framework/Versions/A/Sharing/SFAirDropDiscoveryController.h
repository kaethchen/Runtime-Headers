@interface SFAirDropDiscoveryController : NSObject {
    BOOL _isVisible;
    BOOL _isLegacyDevice;
    BOOL _isLegacyModeEnabled;
    BOOL _isLegacyModeSettable;
    struct __SFOperation { } *_controller;
    long long _discoverableMode;
}

@property (readonly, getter=isVisible) BOOL visible;
@property long long discoverableMode;
@property (readonly) BOOL isTimeLimitedEveryoneMode;
@property (readonly, getter=isLegacyDevice) BOOL legacyDevice;
@property (getter=isLegacyModeEnabled) BOOL legacyModeEnabled;
@property (readonly, getter=isLegacyModeSettable) BOOL legacyModeSettable;
@property (readonly) BOOL isNearbySharingSupported;
@property (getter=isNearbySharingEnabled) BOOL nearbySharingEnabled;
@property (getter=isCellularUsageEnabled) BOOL cellularUsageEnabled;
@property (weak) id delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isStoreDemoMode;
- (id)discoverableModeToString:(long long)a0;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;
- (long long)operationDiscoverableModeToInteger:(id)a0;
- (void)startNFCMonitoring;

@end
