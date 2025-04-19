@class NSMutableDictionary, NSNotificationCenter, HMDFeaturesDataSource, NSObject, HMDStatusChannel, HMFFuture, NSSet, HMDResidentStatusChannelManager, NSHashTable, NSString, HMDHome, HMDResidentStatus, HMFPromise, HMFTimer, HMDUnpublishedResidentStatus;
@protocol OS_dispatch_queue, HMDStatusChannelProvider, HMMLogEventSubmitting, HMDTimerProvider;

@interface HMDResidentStatusChannel : NSObject <HMFLogging, HMFTimerDelegate, HMDStatusChannelDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDResidentStatus *_currentPrimaryResident;
}

@property (readonly, nonatomic) HMDStatusChannel *channel;
@property (readonly, nonatomic) NSMutableDictionary *residentStatusMap;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HMDTimerProvider> timerProvider;
@property (readonly, nonatomic) id<HMDStatusChannelProvider> channelProvider;
@property (retain) HMFTimer *debounceTimer;
@property (retain) HMFTimer *inviteRetryTimer;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMFPromise *initialConnectedToStatusKitPromise;
@property (nonatomic) BOOL receivedInitialChannelState;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) BOOL started;
@property (readonly) HMDFeaturesDataSource *featuresDataSource;
@property (readonly, nonatomic) HMDUnpublishedResidentStatus *localResidentStatus;
@property (readonly, nonatomic) NSMutableDictionary *domainDataStatusMap;
@property (nonatomic) unsigned long long domainPublishCount;
@property (retain) HMFTimer *domainPublishRateLimitingTimer;
@property (nonatomic) BOOL domainDataCached;
@property (readonly, nonatomic) NSMutableDictionary *domainDataPairs;
@property (nonatomic) BOOL domainPublishAllowed;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) HMDResidentStatusChannelManager *manager;
@property (readonly, nonatomic) HMDResidentStatus *currentPrimaryResident;
@property (readonly, nonatomic) NSSet *presentResidentStatuses;
@property (readonly, nonatomic) HMFFuture *initialConnectedToStatusKitFuture;
@property (readonly, nonatomic) NSSet *domainDataStatuses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)start;
- (void)stop;
- (id)logIdentifier;
- (id)dumpState;
- (void)timerDidFire:(id)a0;
- (BOOL)shouldAllowDomainPublishRequest;
- (void)channel:(id)a0 didObserveRecordUpdate:(id)a1;
- (void)_handleHomeUserAddedNotification:(id)a0;
- (void)_handleHomeUserRemovedNotification:(id)a0;
- (void)_handlePrimaryResidentUpdateNotification:(id)a0;
- (void)_inviteSharedUsers;
- (void)_publishResidentStatus:(id)a0 reason:(long long)a1;
- (BOOL)_shouldDebounce:(long long)a0;
- (void)_startDebounceTimer;
- (id)_startTimerWithDuration:(double)a0;
- (void)_stopDebounceTimer;
- (void)_stopPublishingAsResident;
- (void)channel:(id)a0 didObserveConnectionChange:(BOOL)a1;
- (id)dataForDomain:(unsigned long long)a0;
- (id)domainDataPairsPayload;
- (void)domainPublishRateLimitingTimerFired;
- (id)initWithHome:(id)a0 queue:(id)a1;
- (id)initWithHome:(id)a0 queue:(id)a1 notificationCenter:(id)a2 timerProvider:(id)a3 channelProvider:(id)a4 logEventSubmitter:(id)a5 featuresDataSource:(id)a6;
- (id)payloadWithStatus:(id)a0;
- (void)publishDomain:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)publishResidentStatus:(id)a0 reason:(long long)a1;
- (void)stopPublishingAsResident;
- (void)stopPublishingDomain:(unsigned long long)a0;

@end
