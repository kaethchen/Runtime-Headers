@class NSMapTable, SKStatusPublishingDaemonConnection, NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SKStatusPublishingService : NSObject <SKStatusPublishingDaemonDelegateProtocol, SKStatusPublishingConnectionDelegateProtocol>

@property (retain, nonatomic) SKStatusPublishingDaemonConnection *daemonConnection;
@property (retain, nonatomic) NSMapTable *delegates;
@property (nonatomic) BOOL registeredForDelegateCallbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateWorkQueue;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) NSArray *invitedHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeAllInvitedHandlesWithCompletion:(id /* block */)a0;
- (void)removeInvitedHandles:(id)a0 completion:(id /* block */)a1;
- (void)inviteHandle:(id)a0 fromSenderHandle:(id)a1 withInvitationPayload:(id)a2 completion:(id /* block */)a3;
- (void)removeInvitedHandle:(id)a0 completion:(id /* block */)a1;
- (void)fetchHandleInvitability:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (id)initWithStatusTypeIdentifier:(id)a0;
- (void)isHandleInvited:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)inviteHandlesFromPrimaryAccountHandle:(id)a0 withInvitationPayload:(id)a1 completion:(id /* block */)a2;
- (void)publishStatusRequest:(id)a0 completion:(id /* block */)a1;
- (void)_delegatesPerformOnResponseQueueForGroup:(id)a0 block:(id /* block */)a1;
- (void)_fetchHandleInvitability:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)_inviteHandle:(id)a0 fromSenderHandle:(id)a1 withInvitationPayload:(id)a2 completion:(id /* block */)a3;
- (void)_inviteHandles:(id)a0 fromSenderHandle:(id)a1 withInvitationPayload:(id)a2 completion:(id /* block */)a3;
- (void)_isHandleInvitable:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isHandleInvited:(id)a0 fromSenderHandle:(id)a1;
- (void)_isHandleInvited:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)_registerForDelegateCallbacksIfNecessary;
- (void)_simulateCrashIfNecessaryForError:(id)a0;
- (void)fetchHandleInvitabilityFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (void)inviteHandle:(id)a0 withInvitationPayload:(id)a1 completion:(id /* block */)a2;
- (void)inviteHandleFromPrimaryAccountHandle:(id)a0 withInvitationPayload:(id)a1 completion:(id /* block */)a2;
- (void)inviteHandles:(id)a0 fromSenderHandle:(id)a1 withInvitationPayload:(id)a2 completion:(id /* block */)a3;
- (void)inviteHandles:(id)a0 withInvitationPayload:(id)a1 completion:(id /* block */)a2;
- (void)isHandleInvitable:(id)a0 completion:(id /* block */)a1;
- (void)isHandleInvitable:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)isHandleInvitableFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHandleInvited:(id)a0;
- (void)isHandleInvited:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHandleInvited:(id)a0 fromSenderHandle:(id)a1;
- (BOOL)isHandleInvitedFromPrimaryAccountHandle:(id)a0;
- (void)isHandleInvitedFromPrimaryAccountHandle:(id)a0 completion:(id /* block */)a1;
- (void)provisionPayloads:(id)a0 completion:(id /* block */)a1;
- (void)publishingDaemonConnectionDidDisconnect:(id)a0;

@end
