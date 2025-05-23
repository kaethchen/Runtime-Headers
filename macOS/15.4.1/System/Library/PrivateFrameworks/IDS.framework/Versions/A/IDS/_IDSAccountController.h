@class NSSet, NSString, NSMapTable, NSMutableSet, NSMutableDictionary;

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSString *_serviceToken;
    NSString *_service;
    NSMutableSet *_cachedAccounts;
    NSMutableSet *_enabledAccounts;
    NSMutableDictionary *_pendingAccountsToRemove;
    NSMutableDictionary *_transactionIDToHandlersMap;
    BOOL _accountsLoaded;
    BOOL _isLocalAccountVisible;
}

@property (readonly, nonatomic) NSSet *accounts;
@property (readonly, nonatomic) NSSet *internalAccounts;
@property (readonly, nonatomic) NSSet *enabledAccounts;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)_connect;
- (void)_removeAccount:(id)a0;
- (void)accountRemoved:(id)a0;
- (void)accountUpdated:(id)a0;
- (void)disableAccount:(id)a0;
- (void)_callDelegatesRespondingToSelector:(SEL)a0 withPreCallbacksBlock:(id /* block */)a1 callbackBlock:(id /* block */)a2 postCallbacksBlock:(id /* block */)a3;
- (void)_callDelegatesRespondingToSelector:(SEL)a0 withPreCallbacksBlock:(id /* block */)a1 callbackBlock:(id /* block */)a2 postCallbacksBlock:(id /* block */)a3 group:(id)a4;
- (void)_callDelegatesWithBlock:(id /* block */)a0;
- (void)_callDelegatesWithBlock:(id /* block */)a0 group:(id)a1;
- (void)_loadCachedAccounts;
- (void)_loadCachedAccountsWithDictionaries:(id)a0;
- (void)_removeAndDeregisterAccount:(id)a0;
- (void)_setupAccountWithLoginID:(id)a0 accountConfig:(id)a1 authToken:(id)a2 password:(id)a3 completionHandler:(id /* block */)a4;
- (void)_updateDelegatesWithOldAccounts:(id)a0 newAccounts:(id)a1;
- (void)_updateLocalAccountVisibility;
- (void)accountAdded:(id)a0;
- (void)accountDisabled:(id)a0 onService:(id)a1;
- (void)accountEnabled:(id)a0 onService:(id)a1;
- (id)accountWithLoginID:(id)a0 service:(id)a1;
- (id)accountWithUniqueID:(id)a0;
- (void)accountsChanged:(id)a0 forTopic:(id)a1;
- (void)addAccount:(id)a0;
- (void)daemonDisconnected;
- (void)enableAccount:(id)a0;
- (id)initWithService:(id)a0 delegateContext:(id)a1;
- (void)setupAccountWithLoginID:(id)a0 aliases:(id)a1 password:(id)a2 completionHandler:(id /* block */)a3;
- (void)setupAccountWithLoginID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupAccountWithSetupParameters:(id)a0 aliases:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupCompleteForAccount:(id)a0 transactionID:(id)a1 setupError:(id)a2;

@end
