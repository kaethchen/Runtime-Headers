@class NSUUID, HMDModernMessagingXPCEventPublisher, HMDModernRemoteMessageTransport, NSString, HMDUserMessagePolicy, NSMutableDictionary, HMFMessageDispatcher, NSMutableArray, NSObject, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDModernMessagingHandler : HMFObject <HMFMessageReceiver>

@property (readonly, nonatomic) NSMutableDictionary *registrationsByMessageName;
@property struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } lock;
@property (readonly, nonatomic) NSMutableArray *pendingMessages;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSUUID *homeUUID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *localMessageDispatcher;
@property (retain, nonatomic) HMFMessageDispatcher *energyRemoteMessageDispatcher;
@property (retain, nonatomic) HMDUserMessagePolicy *ownerPolicy;
@property (retain, nonatomic) HMDUserMessagePolicy *adminPolicy;
@property (retain, nonatomic) HMDUserMessagePolicy *userPolicy;
@property (retain, nonatomic) HMDModernRemoteMessageTransport *modernTransportEnergyInstance;
@property (retain, nonatomic) HMFMessageDispatcher *remoteMessageDispatcher;
@property (retain, nonatomic) HMDModernRemoteMessageTransport *modernTransport;
@property (retain, nonatomic) HMDModernMessagingXPCEventPublisher *eventPublisher;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)registerForMessages;
- (void)_storePendingHMMMRemoteMessage:(id)a0;
- (id)_createEnergyRemoteMessageDispatcher;
- (void)_createModernTransportEnergyInstance;
- (void)_createModernTransportInstance;
- (id)_createRemoteMessageDispatcher;
- (void)_handleHMMMRemoteMessage:(id)a0;
- (void)_handleXPCConnectionDeactivatedNotification:(id)a0;
- (id)_policiesForHMMMRequestHandlerRestriction:(long long)a0;
- (void)_sendHMMMRemoteMessageToClient:(id)a0 clientMessageName:(id)a1 message:(id)a2;
- (void)_sendPendingHMMMRemoteMessagesForClientIdentifier:(id)a0;
- (void)configureWithHome:(id)a0;
- (void)configureWithHome:(id)a0 xpcEventPublisher:(id)a1;
- (void)handleRegisterHMMMMessage:(id)a0;
- (void)handleSendHMMMMessage:(id)a0;
- (void)handleUnregisterHMMMMessage:(id)a0;
- (void)registerHMMMMessageHandlerWithMessageName:(id)a0 userRestriction:(long long)a1 clientConnection:(id)a2 message:(id)a3;

@end
