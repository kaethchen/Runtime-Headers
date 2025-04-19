@class SCRCUserDefaults;
@protocol AXVAHUDInterface;

@interface SCRVisualsHUDWindow : NSObject

@property (retain, nonatomic, setter=_setHudAgent:) id<AXVAHUDInterface> _hudAgent;
@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;

- (void).cxx_destruct;
- (id)_createAgentFeature:(long long)a0;
- (id)_currentAgentFeature;
- (id)initWithHUDAgent:(id)a0 userDefaults:(id)a1;
- (void)showStatusEnabled:(BOOL)a0;
- (void)showStatusEnabled:(BOOL)a0 forFeature:(long long)a1;
- (void)showStatusString:(id)a0;

@end
