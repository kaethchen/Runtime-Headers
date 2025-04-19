@class HMDAccessoryPairingEvent, NSMutableDictionary, NSString, NSDate, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDAccessoryPairingLogEventStateManager : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessoryPairingRetryMapLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessoryPairingProgressStateTrackerLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _matterAccessoryPairingMetricLock;
}

@property (class, readonly, nonatomic) HMDAccessoryPairingLogEventStateManager *sharedManager;

@property (retain, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSDate *lastPairingEndTime;
@property (readonly, nonatomic) NSMutableDictionary *retryCountMap;
@property (readonly, nonatomic) NSMutableDictionary *pairingProgressStateTracker;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic) unsigned long long pairingUIState;
@property (nonatomic) unsigned long long recoveryType;
@property (nonatomic) unsigned long long previousRecoveryType;
@property (weak, nonatomic) HMDAccessoryPairingEvent *pairingEvent;
@property (readonly, nonatomic, getter=isConfigured) BOOL configured;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0;
- (void)_handleMatterAccessoryUpdatePairingMetricNotification:(id)a0 pairingEvent:(id)a1 logEventSubmitter:(id)a2;
- (void)_handlePairingStateProgressNotification:(id)a0;
- (void)_updateStateOnPairingProgress:(long long)a0;
- (void)clearPairingProgressStateTrackerForIdentifier:(id)a0;
- (void)clearRetryCountMap;
- (void)configureWithPairingEvent:(id)a0 workQueue:(id)a1 logEventSubmitter:(id)a2;
- (void)fillUnknownErrorIfMissingErrorForPairingEvent:(id)a0;
- (id)getLastProgressStateForAccessory:(id)a0;
- (id)getLongestProgressStateForAccessory:(id)a0;
- (double)getTimeDurationForLongestProgressStateForAccessory:(id)a0;
- (double)getTimeDurationForProgressStateForIdentifier:(id)a0 state:(id)a1;
- (void)handleMatterAccessoryUpdatePairingMetricNotification:(id)a0;
- (void)incrementRetryCount:(id)a0;
- (void)resetStatesForNewAddOperation;
- (unsigned long long)retryCountForIdentifier:(id)a0;
- (void)startProgressStateTrackerWithDate:(id)a0 identifier:(id)a1;
- (void)updateLastPairingProgressStateEventForIdentifier:(id)a0 withDate:(id)a1;
- (void)updatePairingProgressState:(id)a0;
- (void)updateStatesOnResult:(BOOL)a0;

@end
