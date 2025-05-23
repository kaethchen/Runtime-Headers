@class NSString, HMMediaDestination, NSUUID, HMDMediaDestinationMessageHandler;
@protocol HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate;

@interface HMDMediaDestinationsManager : HMFObject <HMDMediaDestinationsMessageHandlerDelegate, HMFLogging, HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationManager>

@property (weak) id<HMDMediaDestinationsManagerDataSource> dataSource;
@property (weak) id<HMDMediaDestinationsManagerDelegate> delegate;
@property (retain) HMMediaDestination *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *identifier;
@property (readonly) HMMediaDestination *committedDestination;
@property (readonly) HMDMediaDestinationMessageHandler *messageHandler;

+ (id)logCategory;
+ (id)deriveAudioGroupIdentifierFromDestinations:(id)a0;
+ (unsigned long long)deriveSupportedOptionsFromDestinations:(id)a0;

- (void).cxx_destruct;
- (id)privateDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (BOOL)addGroupDataForTargetDevice:(id)a0;
- (void)configureWithHome:(id)a0;
- (id)dataSourceAssociatedDestinationManagers;
- (id)dataSourceAssociatedDestinations;
- (id)dataSourceDestinationControllerWithIdentifier:(id)a0;
- (id)dataSourceTargetAccessory;
- (id)defaultDestination;
- (id)deriveAudioDestination;
- (id)initWithDestination:(id)a0 messageDispatcher:(id)a1 notificationCenter:(id)a2 dataSource:(id)a3 delegate:(id)a4;
- (id)initWithDestination:(id)a0 messageHandler:(id)a1 dataSource:(id)a2 delegate:(id)a3;
- (void)legacyRequestToUpdateAudioGroupIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)mediaDestinationMessageHandler:(id)a0 didReceiveUpdateAudioGroupIdentifierRequestMessage:(id)a1 audioGroupIdentifier:(id)a2;
- (void)mediaDestinationMessageHandler:(id)a0 didReceiveUpdateSupportedOptionsRequestMessage:(id)a1 supportOptions:(unsigned long long)a2;
- (void)mediaDestinationsMessageHandler:(id)a0 didReceiveDestinationUpdatedNotification:(id)a1 destination:(id)a2;
- (id)mediaGroupsAggregatorMessenger;
- (void)mergeDestination:(id)a0;
- (id)messageHandler:(id)a0 deviceForOutgoingMessage:(id)a1;
- (BOOL)messageHandler:(id)a0 isReadyForIncomingMessage:(id)a1;
- (id)messageHandler:(id)a0 shouldRelayIncomingMessage:(id)a1;
- (void)refreshDestination;
- (void)requestToUpdateAudioGroupIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)sendRequestsToUpdateAudioGroupIdentifier:(id)a0;
- (id)sendRequestsToUpdateSupportOptions:(unsigned long long)a0;
- (void)stageAudioGroupIdentifier:(id)a0;
- (BOOL)updateTargetDeviceAudioGroupIdentifier:(id)a0;

@end
