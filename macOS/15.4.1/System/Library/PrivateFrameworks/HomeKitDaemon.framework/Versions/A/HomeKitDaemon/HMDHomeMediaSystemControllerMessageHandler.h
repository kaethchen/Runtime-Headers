@class HMFMessageDispatcher, NSString, HMDHome, NSUUID, NSObject;
@protocol HMDFeaturesDataSource, HMDHomeMediaSystemControllerMessageHandlerDelegate, OS_dispatch_queue;

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFLogging, HMFMessageReceiver>

@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly, weak) HMDHome *home;
@property (weak) id<HMDHomeMediaSystemControllerMessageHandlerDelegate> delegate;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)homeUUID;
- (id)logIdentifier;
- (id)messageDestination;
- (void)_legacyHandleUpdateMediaSystem:(id)a0;
- (void)_legacyHandleRemoveMediaSystem:(id)a0;
- (id)preferredAssociatedGroupIdentifierForMediaSystemBuilderPayload:(id)a0;
- (void)_legacyHandleAddMediaSystem:(id)a0;
- (void)_legacyHandleAddMediaSystemWithPreProcessedMessage:(id)a0;
- (void)_logAddMediaSystemMetricsUsingMessage:(id)a0 setupAccessoryUUID:(id)a1 setupRequestOption:(unsigned long long)a2;
- (void)_logRemoveMediaSystemMetricsUsingMessage:(id)a0;
- (void)_registerForMessages;
- (void)_routeMessage:(id)a0 localHandler:(id /* block */)a1;
- (void)_sendRemoteMessageToAddMediaSystemBypassPrimary:(id)a0;
- (void)_sendRemoteMessageWithXPCMessage:(id)a0 device:(id)a1 withRetries:(unsigned long long)a2 delay:(double)a3 lastError:(id)a4;
- (BOOL)_shouldAddMediaSystemBypassPrimary:(id)a0 outSetupAccessoryUUID:(id *)a1 outFallbackReason:(unsigned long long *)a2;
- (id)appleMediaAccessoryWithUUID:(id)a0;
- (void)handleAddMediaSystemBypassPrimary:(id)a0;
- (id)initWithQueue:(id)a0 home:(id)a1 messageDispatcher:(id)a2 delegate:(id)a3;
- (id)initWithQueue:(id)a0 home:(id)a1 messageDispatcher:(id)a2 delegate:(id)a3 featuresDataSource:(id)a4;
- (void)locallyAddMediaSystemUsingRequestMessage:(id)a0;
- (void)locallyRemoveMediaSystemUsingRemoveRequestMessage:(id)a0;
- (void)locallyUpdateMediaSystemUsingRequestMessage:(id)a0;
- (id)mediaGroupsAggregator;
- (id)mediaSystemNameFromRoomWithAccessoryUUIDs:(id)a0;
- (id)messageRouter;
- (id)preProcessMediaSystemMessage:(id)a0;
- (void)queueOnboardingForUnconfiguredParticipantWithAccessoryUUID:(id)a0 associatedGroupIdentifier:(id)a1;
- (void)routeAddMediaSystem:(id)a0;
- (void)routeRemoveMediaSystem:(id)a0;
- (void)routeUpdateMediaSystem:(id)a0;
- (id)stagingMediaSystemDataFromData:(id)a0 accessoryUUIDs:(id)a1;
- (id)unconfiguredParticipantOnboardingManager;
- (id /* block */)updateMediaSystemCompletionBlockWithMessage:(id)a0 data:(id)a1 accessoryUUIDs:(id)a2;
- (id)updateParticipantWithAccessoryUUID:(id)a0 associatedGroupIdentifier:(id)a1;
- (void)updateParticipantWithDestinationIdentifier:(id)a0 associatedGroupIdentifier:(id)a1;
- (void)updateParticipantWithDestinationIdentifiers:(id)a0 associatedGroupIdentifier:(id)a1;
- (id)updateParticipantWithDestinationManager:(id)a0 associatedGroupIdentifier:(id)a1;
- (id)validateConfiguredName:(id)a0;
- (id)validatePayload:(id)a0;

@end
