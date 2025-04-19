@class HMFTimer, NSString, HMDNotificationRegistryCoreDataAdapter, NSMutableSet, NSHashTable, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDNotificationRegistry : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_delegates;
    HMDNotificationRegistryCoreDataAdapter *_coreDataAdapter;
    HMFTimer *_pendingRequestsRetryTimer;
    NSMutableSet *_pendingRequests;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) NSMutableSet *chipRemoteSubscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (void)addDelegate:(id)a0;
- (id)logIdentifier;
- (void)timerDidFire:(id)a0;
- (void)auditNotificationDestinations:(id)a0 home:(id)a1;
- (id)characteristicsByDestinationForCharacteristics:(id)a0 applyChangeThresholding:(BOOL)a1;
- (void)clearAllRegistrations;
- (void)configureWithHome:(id)a0;
- (void)configureWithHome:(id)a0 coreDataAdapter:(id)a1;
- (id)destinationsRegisteredForNotificationsForActionSetResponses:(id)a0;
- (id)destinationsRegisteredForNotificationsForCharacteristics:(id)a0 applyChangeThresholding:(BOOL)a1;
- (id)destinationsRegisteredForNotificationsForProperties:(id)a0;
- (void)disableAllRegistrations;
- (id)filterActionSetResponses:(id)a0 deviceIdsDestination:(id)a1;
- (id)filterProperties:(id)a0 deviceIdsDestination:(id)a1;
- (BOOL)hasRegistrationsForActionSetUUID:(id)a0;
- (id)initWithPendingRequestsRetryTimer:(id)a0;
- (id)propertiesRegisteredForMediaProfileUniqueIdentifier:(id)a0;
- (BOOL)removeRegistrationsForActionSetUUID:(id)a0;
- (void)removeRegistrationsForCharacteristics:(id)a0;
- (BOOL)removeRegistrationsForMediaProfile:(id)a0;
- (void)reprocessEnabledCharacteristicRegistrations;
- (BOOL)setNotificationsEnabled:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 characteristicsPayload:(id)a3 characteristicChangeThresholdsPayload:(id)a4 mediaPropertiesPayload:(id)a5 actionSetsPayload:(id)a6 matterNotificationPayload:(id)a7;
- (void)storeCHIPRemoteSubscriberWithRemoteSourceID:(id)a0;

@end
