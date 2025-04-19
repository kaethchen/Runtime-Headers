@class TrackerPolicy, NSString, NSDate;

@interface AppTracker : NSObject <ManagedEventInfoProtocol, ConfigurableObjectProtocol>

@property (retain) NSDate *timestamp;
@property int flowsForSelf;
@property int flowsForOthers;
@property int flowsPerPeriod;
@property int flowsPerPeriodAfterMadePrimary;
@property (retain) TrackerPolicy *specificPolicy;
@property unsigned int eversetClassFlags;
@property BOOL isADaemon;
@property BOOL sentFlowCountExceededPolicySymptom;
@property BOOL sentThunderingHerdFlowCountExceededPolicySymptom;
@property unsigned char functionalInterfaceType;
@property (readonly) NSString *userName;
@property int prevFlows;
@property int prevFlowsForOthers;
@property double prevFlowDurations;
@property unsigned long long prevFlowRxBytes;
@property unsigned long long prevFlowTxBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)dumpState;
+ (void)configureCompanionLinkPolicies:(id)a0;
+ (id)configureClass:(id)a0;
+ (void)configureCellPolicies:(id)a0;
+ (void)configureWifiPolicies:(id)a0;
+ (void)getWifiNetworkActivity:(id /* block */)a0;
+ (id)ifTrackerForFlow:(id)a0;
+ (void)noteFlow:(id)a0 withDelegatee:(id)a1 snapshot:(id)a2;
+ (void)noteFlow:(id)a0 withOwner:(id)a1 snapshot:(id)a2;
+ (void)noteFlowEnding:(id)a0 withSnapshot:(id)a1;
+ (void)noteForegroundState:(BOOL)a0 forApp:(id)a1 hasForegroundApps:(BOOL)a2;
+ (void)pruneCache:(id)a0;
+ (void)setAppTrackerVerbose:(unsigned int)a0;
+ (void)setTrackCellular:(BOOL)a0;
+ (void)setWifiAlwaysNoteList:(id)a0;
+ (void)setWifiDaemonCheckList:(id)a0;
+ (void)setWifiNeverNoteList:(id)a0;

- (void).cxx_destruct;
- (id)initWithUserName:(id)a0 interfaceType:(unsigned char)a1;
- (void)_generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (void)addFlow:(id)a0;
- (void)addImmediateFlow:(id)a0;
- (void)adjustFlowLinkages:(id)a0;
- (void)adjustImmediateFlowLinkages:(id)a0;
- (void)checkForFlowCountPolicyViolation;
- (int)configureInstance:(id)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void)removeFlow:(id)a0;
- (void)removeImmediateFlow:(id)a0;
- (void)resetFlowCountAfterMadePrimary;
- (void)resetFlowCountPolicyInfo;
- (void)sendFlowCount:(unsigned long long)a0 exceededPolicyThreshold:(unsigned long long)a1 isLikelyThunderingHerd:(BOOL)a2;

@end
