@class NSString, SFAirDropDiscoveryController;

@interface FI_TAirDropDiscoveryController : NSObject <SFAirDropDiscoveryControllerDelegate> {
    SFAirDropDiscoveryController *_discoveryController;
}

@property (readonly, nonatomic, getter=isLegacyMachine) BOOL legacyMachine;
@property (nonatomic) long long discoverableMode;
@property (nonatomic, getter=isLegacyModeEnabled) BOOL legacyModeEnabled;
@property (readonly, nonatomic, getter=isLegacyModeSettable) BOOL legacyModeSettable;
@property (readonly, nonatomic, getter=isLegacyModeSupported) BOOL legacyModeSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)updateState;
- (void)discoveryControllerLegacyModePropertiesDidChange:(id)a0;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (void)_setDiscoverableModeForUpdateState:(long long)a0;
- (void)_setLegacyMachineForUpdateState:(BOOL)a0;
- (void)_setLegacyModeEnabledForUpdateState:(BOOL)a0;
- (void)_setLegacyModeSettableForUpdateState:(BOOL)a0;

@end
