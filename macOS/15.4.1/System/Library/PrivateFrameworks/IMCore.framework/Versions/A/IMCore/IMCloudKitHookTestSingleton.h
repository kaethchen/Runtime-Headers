@class IMCloudKitMockSyncState, NSArray, NSDictionary, NSDate;

@interface IMCloudKitHookTestSingleton : IMSingletonOverride

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (retain, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) BOOL eligibleForTruthZone;
@property (nonatomic) BOOL rampedIntoTruthZone;
@property (nonatomic) long long isChangingEnabledState;
@property (nonatomic) BOOL isStartingSync;
@property (nonatomic) BOOL isDisablingDevices;
@property (retain, nonatomic) NSArray *IMCloudKitSyncErrors;
@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) long long syncType;
@property (retain, nonatomic) NSDictionary *syncStats;
@property (retain, nonatomic) IMCloudKitMockSyncState *testState;

+ (id)logHandle;

- (id)init;
- (void).cxx_destruct;
- (id)logHandle;
- (void)fetchSyncStateStatistics;
- (void)initiatePeriodicSync;
- (void)startUserInitiatedSync;
- (BOOL)isInExitState;
- (void)sendSyncChangedEvent;
- (void)setControllerSyncState:(unsigned long long)a0;
- (void)setControllerSyncType:(long long)a0;
- (void)setIsInExitState:(BOOL)a0;
- (id)syncStateDictionary;

@end
