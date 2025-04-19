@interface _PMPowerModes : NSObject <_PMPowerModesProtocol>

+ (id)sharedInstance;

- (long long)currentPowerMode;
- (id)currentPowerModeSession;
- (int)registerForUpdatesOfPowerMode:(long long)a0 withIdentifier:(id)a1 withCallback:(id /* block */)a2;
- (int)registerForUpdatesWithIdentifier:(id)a0 withCallback:(id /* block */)a1;
- (int)setStateTo:(long long)a0 forPowerMode:(long long)a1 fromSource:(id)a2 withExpirationEvent:(long long)a3 andParams:(long long)a4 withCallback:(id /* block */)a5;
- (BOOL)supportsPowerMode:(long long)a0;
- (BOOL)supportsPowerModeSelectionUI;

@end
