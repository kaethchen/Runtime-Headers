@class NSString, DDSBackgroundActivityScheduler, NSDate;
@protocol DDSRemoteSyncStateDelegate;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long syncStatus;
@property (nonatomic) unsigned long long attemptCount;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler;
@property (weak, nonatomic) id<DDSRemoteSyncStateDelegate> delegate;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, copy) NSString *metadataSyncStatePreferenceKey;
@property (readonly, copy) NSString *scheduleUpdateIdentifier;
@property (readonly, copy) NSString *scheduleRetryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (void)loadState;
- (void)requestUpdate;
- (void)beganUpdateCycle;
- (void)completedUpdateCycleWithError:(id)a0;
- (id)initWithDelegate:(id)a0 assetType:(id)a1;
- (void)loadStateAndScheduleUpdate;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (void)requestCompleteRefresh;
- (void)requestRetry;
- (void)saveState;
- (void)scheduleRegularUpdate;
- (void)scheduleRetry;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (BOOL)shouldRequestCompleteRefresh;
- (double)timeBetweenSyncs;

@end
