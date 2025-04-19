@class NSUUID, HMFMessageDispatcher, NSString, NSNotificationCenter, NSObject, HMEPersistentConnectionClient;
@protocol OS_dispatch_queue;

@interface HMXPCEventRouterClient : NSObject <HMFMessageReceiver, HMEPersistentConnectionClientDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly, copy) NSString *changeRegistrationsMessageName;
@property (readonly, copy) NSString *updateMessageName;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMEPersistentConnectionClient *eventRouterClient;
@property (readonly) BOOL useBackgroundTaskAssertion;
@property BOOL isActive;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)logIdentifier;
- (void)handleActiveAssertionSendState:(id)a0;
- (void)_handleUpdateEventsMessage:(id)a0;
- (id)eventRouter;
- (void)finishedWritingToStore:(unsigned long long)a0;
- (id)forwardingTopicsForTopics:(id)a0;
- (void)handleDidBecomeActive:(id)a0;
- (void)handleWillResignActive:(id)a0;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 changeRegistrationsMessageName:(id)a3 updateMessageName:(id)a4 notificationCenter:(id)a5 useBackgroundTaskAssertion:(BOOL)a6 eventRouterClientFactory:(id /* block */)a7;
- (id)initWithMessageTargetUUID:(id)a0 queue:(id)a1 messageDispatcher:(id)a2 changeRegistrationsMessageName:(id)a3 updateMessageName:(id)a4 storeReadHandle:(id)a5 storeWriteHandle:(id)a6 useBackgroundTaskAssertion:(BOOL)a7;
- (BOOL)isActiveForSaving;
- (id)messageDestination;
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)a0 removedFilters:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)willWriteToStore;

@end
