@class NSUUID, NSString, SMIDSMessenger, SMMadridMessenger;

@interface SMMessagingService : RTService <SMMessagingServiceMessengerDelegate, SMIDSMessengerProtocolPrivate, SMMadridMessengerProtocol, SMMadridMessengerProtocolPrivate>

@property (retain, nonatomic) SMIDSMessenger *idsMessenger;
@property (retain, nonatomic) SMMadridMessenger *madridMessenger;
@property (readonly, nonatomic) NSUUID *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isStandalone;
+ (BOOL)isCellularActivated;
+ (void)submitCAMetricForMessageType:(unsigned long long)a0 scheduledSend:(BOOL)a1 cancelationAttempt:(BOOL)a2 attemptNumber:(long long)a3 wasFinalAttempt:(BOOL)a4 timeToSendMessage:(double)a5 sendError:(id)a6 success:(BOOL)a7 numReceivers:(unsigned long long)a8;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)deletedMessage:(id)a0;
- (void)iMessageConversationDeletedFor:(id)a0;
- (void)_cancelSubscriptionOnNearbyDevicesChange;
- (void)_startSubscriptionOnNearbyDevicesChange;
- (void)cancelMadridMessageSendForMessageGUID:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)cancelSubscriptionOnNearbyDevicesChanged;
- (long long)convertRTPlatformToIDSDeviceType:(id)a0;
- (id)effectivePairedDevice;
- (void)findObjectForMyAccountFromDict:(id)a0 withHandler:(id /* block */)a1;
- (void)iMessageDeletedFor:(id)a0;
- (void)iMessageReceived:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)iMessageScheduledSendCancelFor:(id)a0 successful:(BOOL)a1 withError:(id)a2;
- (void)iMessageScheduledSendScheduledFor:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)iMessageScheduledSendTriggeredFor:(id)a0;
- (void)iMessageSendFor:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)receivedMessage:(id)a0 fromHandle:(id)a1 fromMe:(BOOL)a2;
- (void)receivedSessionStartMessageSendResultWithMessage:(id)a0 guid:(id)a1 successful:(BOOL)a2 withError:(id)a3;
- (void)scheduleMadridMessageSendForMessage:(id)a0 messageGUID:(id)a1 associatedGUID:(id)a2 sendDate:(id)a3 toConversation:(id)a4 summaryText:(id)a5 completion:(id /* block */)a6;
- (void)sendIDSMessage:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)sendIDSMessageToMyDevices:(id)a0 completion:(id /* block */)a1;
- (void)sendIDSMessageToMyNearbyDevices:(id)a0 completion:(id /* block */)a1;
- (void)sendIDSMessageToPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)sendMadridMessage:(id)a0 associatedGUID:(id)a1 toConversation:(id)a2 summaryText:(id)a3 completion:(id /* block */)a4;
- (void)startSubscriptionOnNearbyDevicesChanged;

@end
