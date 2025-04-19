@class _CDContextualKeyPath, RPPeopleDiscovery, NSObject;
@protocol OS_os_log;

@interface _DKUserNearbyMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL sensorTrackingEnabled;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) _CDContextualKeyPath *userNearbyKeyPath;
@property (nonatomic) long long previousLevel;
@property (retain, nonatomic) RPPeopleDiscovery *discovery;
@property (nonatomic) int shouldMonitorToken;
@property (nonatomic) int loginNotifyToken;
@property (nonatomic) unsigned long long activeConsoleUser;
@property (nonatomic) unsigned int discoveryFlags;

+ (id)entitlements;
+ (id)eventStream;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (void)_queue_enableDiscovery;
- (void)_queue_handlePersonChanged:(id)a0 proximityHint:(int)a1;
- (void)_queue_updateLoginWithUid:(unsigned long long)a0;
- (void)_queue_updateMonitoringWithState:(unsigned long long)a0;
- (void)initializeDiscovery;
- (long long)proximityLevelFromRPPerson:(id)a0;
- (void)queue_invalidateDiscovery;
- (void)queue_recoveryAttempt;
- (void)setUserProximityLevel:(long long)a0;
- (long long)userProximityForRapportProx:(int)a0;

@end
