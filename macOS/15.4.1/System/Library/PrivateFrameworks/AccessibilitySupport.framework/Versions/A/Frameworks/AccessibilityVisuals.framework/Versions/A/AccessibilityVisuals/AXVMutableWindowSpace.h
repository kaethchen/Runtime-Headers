@class NSString, AXFApplicationManager;

@interface AXVMutableWindowSpace : AXVWindowSpace <AXFUserSessionObserverDelegate, AXFApplicationManagerDelegate>

@property (retain, nonatomic) AXFApplicationManager *_applicationManager;
@property (nonatomic) unsigned long long _levelBeforeAutoRaise;
@property (nonatomic) BOOL _observingApplications;
@property (nonatomic) BOOL _levelTemporarilyRaised;
@property (nonatomic) BOOL _lockScreenActive;
@property (nonatomic) BOOL _securityAgentActive;
@property (nonatomic) BOOL _setupAssistantActive;
@property (nonatomic) unsigned long long level;
@property (nonatomic) BOOL automaticallyRiseToVoiceOverLevelInLockScreen;
@property (nonatomic) BOOL automaticallyRiseToVoiceOverLevelWhenEncounteringSecurityAgent;
@property (nonatomic) BOOL automaticallyRiseToSetupAssistantLevelDuringSetupAssistant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spaceWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)setLevel:(unsigned long long)a0;
- (void)applicationManager:(id)a0 didUpdateRunningApplications:(id)a1;
- (void)userSessionObserverFastUserSwitchBegan:(id)a0;
- (void)userSessionObserverFastUserSwitchEnded:(id)a0;
- (void)userSessionObserverScreenLocked:(id)a0;
- (void)userSessionObserverScreenUnlocked:(id)a0;
- (void)userSessionObserverSessionDidMoveOffConsole:(id)a0;
- (void)_raiseLevelTo:(unsigned long long)a0;
- (void)_restoreOriginalLevelIfNeeded;
- (BOOL)_shouldObserveApplications;
- (BOOL)_shouldRestoreOriginalLevel;
- (BOOL)_shouldStartObservingApplications;
- (BOOL)_shouldStopObservingApplications;
- (BOOL)_shouldTemporarilyRaiseLevelToSetupAssistantLevel;
- (BOOL)_shouldTemporarilyRaiseLevelToVoiceOverLevel;
- (void)_startOrStopObservingApplicationsIfNeeded;
- (void)_temporarilyRaiseLevelIfNeeded;

@end
