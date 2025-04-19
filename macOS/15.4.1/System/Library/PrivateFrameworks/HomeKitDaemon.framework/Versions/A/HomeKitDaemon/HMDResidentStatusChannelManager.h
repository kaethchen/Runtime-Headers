@class NSString, HMFTimer, HMDProcessMonitor, NSMutableSet, HMDResidentStatusChannel, NSObject, NSNotificationCenter, HMDIDSServerBag;
@protocol OS_dispatch_queue, HMDTimerProvider;

@interface HMDResidentStatusChannelManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, nonatomic) HMDResidentStatusChannel *residentStatusChannel;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<HMDTimerProvider> timerProvider;
@property (retain) HMFTimer *unsubscribeFromChannelDebounceTimer;
@property (readonly, nonatomic) NSMutableSet *clientIdentifiers;
@property (readonly, weak) HMDIDSServerBag *idsServerBag;
@property (readonly, nonatomic) HMDProcessMonitor *processMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)_configureWithExistingProcesses:(id)a0;
- (void)_evaluateChannelConnectionStateWithCurrentClientIdentifierCount:(unsigned long long)a0 previousClientIdentifierCount:(unsigned long long)a1;
- (void)_handleForegroundStateChangedForBundleIdentifier:(id)a0 applicationState:(unsigned long long)a1;
- (BOOL)_residentStatusChannelNeededForBundleIdentifier:(id)a0 applicationState:(unsigned long long)a1;
- (BOOL)_shouldAllowChannelManagement;
- (BOOL)_shouldChannelBeRunning;
- (void)_startUnsubscribeFromChannelDebounceTimer;
- (void)_stopUnsubscribeFromChannelDebounceTimer;
- (void)addClientWithIdentifier:(id)a0;
- (void)handleProcessAdded:(id)a0;
- (void)handleProcessInfoStateChanged:(id)a0;
- (void)handleProcessRemoved:(id)a0;
- (id)initWithResidentStatusChannel:(id)a0 notificationCenter:(id)a1 queue:(id)a2 timerProvider:(id)a3 idsServerBag:(id)a4 processMonitor:(id)a5;
- (id)initWithResidentStatusChannel:(id)a0 queue:(id)a1 idsServerBag:(id)a2;
- (void)removeClientWithIdentifier:(id)a0;

@end
