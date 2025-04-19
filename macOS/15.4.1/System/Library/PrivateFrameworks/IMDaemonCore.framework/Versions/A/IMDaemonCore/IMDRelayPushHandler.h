@class IDSAccount, NSCache, NSString, NSMutableArray, IDSService;

@interface IMDRelayPushHandler : NSObject <IDSServiceDelegatePrivate>

@property (retain, nonatomic) IDSService *relayService;
@property (retain, nonatomic) IDSService *smsWatchService;
@property (retain, nonatomic) IDSAccount *account;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (nonatomic) BOOL registeredForPush;
@property (nonatomic) BOOL isListening;
@property (retain, nonatomic) NSCache *guidToListenersCache;
@property (nonatomic) BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)commandToHandlerBlock;
+ (id)localCommandToHandlerBlock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (void)_acceptIncomingPushes;
- (void)_cacheListeners:(id)a0 forGUID:(id)a1;
- (id)_cachedListenersForGUID:(id)a0;
- (void)_calculateHandlersForLocalMessage:(id)a0 userInfo:(id)a1 completionBlock:(id /* block */)a2;
- (void)_calculateHandlersForMatchType:(unsigned long long)a0 routingBehaviors:(unsigned long long)a1 message:(id)a2 messageGUID:(id)a3 fromIdentifier:(id)a4 completionBlock:(id /* block */)a5;
- (void)_calculateHandlersForMessage:(id)a0 messageGUID:(id)a1 fromIdentifier:(id)a2 command:(id)a3 completionBlock:(id /* block */)a4;
- (id)_guidsForMessage:(id)a0 messageGUID:(id)a1 routingBehaviors:(unsigned long long)a2;
- (void)_handleMessageProcessedWithGUID:(id)a0;
- (id)_handlerForServiceName:(id)a0;
- (id)_handlersForExplicitServiceWithMessage:(id)a0;
- (void)_ignoreIncomingPushes;
- (unsigned long long)_listenerMatchTypeForCommand:(long long)a0 message:(id)a1;
- (unsigned long long)_listenerMatchTypeForLocalMessageType:(id)a0 message:(id)a1;
- (id)_messageDictionaryForLocalMessage:(id)a0 type:(id)a1;
- (id)_messageReplayObjectWithService:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3;
- (id)_messageReplayObjectWithService:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3;
- (BOOL)_messageRequestsServiceForSendingBypass:(id)a0;
- (unsigned long long)_routingBehaviorsForCommand:(long long)a0;
- (unsigned long long)_routingBehaviorsForLocalMessageType:(id)a0;
- (void)_service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4 isBeingReplayed:(BOOL)a5;
- (void)_service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4 isBeingReplayed:(BOOL)a5;
- (id)_serviceNameForMessage:(id)a0;
- (id)_serviceNameOrCompatibilityServiceNameFromDictionary:(id)a0;
- (void)_updateListenerIfNeeded;
- (id)copyHandlersForEnumerating;
- (id)initWithIDSAccount:(id)a0;
- (void)replayMessage:(id)a0;

@end
