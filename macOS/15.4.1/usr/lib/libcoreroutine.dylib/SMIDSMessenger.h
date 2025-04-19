@class NSObject, NSString, NSMutableArray, IDSService;
@protocol OS_dispatch_queue, SMMessagingServiceMessengerDelegate;

@interface SMIDSMessenger : NSObject <IDSServiceDelegate, SMIDSMessengerProtocolPrivate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSService *idsService;
@property (retain, nonatomic) IDSService *ownAccountIDSService;
@property (retain, nonatomic) NSMutableArray *idsMessagesWaitingForAck;
@property (weak, nonatomic) id<SMMessagingServiceMessengerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)convertRTPlatformToIDSDeviceType:(id)a0;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)myNearbyDevices;
- (void)_cancelSubscriptionOnNearbyDevicesChanged;
- (void)_startSubscriptionOnNearbyDevicesChanged;
- (void)cancelSubscriptionOnNearbyDevicesChanged;
- (id)effectivePairedDevice;
- (void)findObjectForMyAccountFromDict:(id)a0 withHandler:(id /* block */)a1;
- (id)myNearbyDestinationsFromDevices:(id)a0;
- (void)sendIDSMessage:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)sendIDSMessageToMyDevices:(id)a0 completion:(id /* block */)a1;
- (void)sendIDSMessageToMyNearbyDevices:(id)a0 completion:(id /* block */)a1;
- (void)sendIDSMessageToPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)sendMessage:(id)a0 toDestinations:(id)a1 completion:(id /* block */)a2;
- (void)sendMessage:(id)a0 toDestinations:(id)a1 retryCount:(long long)a2 completion:(id /* block */)a3;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)startSubscriptionOnNearbyDevicesChanged;

@end
