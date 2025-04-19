@class NSString, NSTimer, NSMutableDictionary, NSMapTable, NSMutableSet, NSMutableArray;

@interface MFAccountStatus : NSObject <MCActivityTarget> {
    NSMutableDictionary *_states;
    NSMutableDictionary *_stateDetails;
    NSMapTable *_clients;
    NSMutableSet *_allRegisteredAccounts;
    unsigned long long _allRegisteredTypes;
    NSMutableArray *_accountRefreshQueue;
}

@property (readonly, nonatomic) NSTimer *refreshTimer;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStatus;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (long long)accountStatus:(id)a0;
- (void)unregisterClient:(id)a0;
- (void)_networkChanged:(id)a0;
- (void)registerAccountTypes:(unsigned long long)a0 forClient:(id)a1;
- (void)_accountInfoChanged:(id)a0;
- (void)_accountStatusUpdatedWithInfo:(id)a0;
- (id)_accountsForTypes:(unsigned long long)a0;
- (id)_allRegisteredAccounts;
- (void)_refreshAccountStatus:(id)a0;
- (void)_refreshAccounts:(id)a0 clearingStatus:(BOOL)a1;
- (id)_registeredAccountsForClient:(id)a0 onlyWithUnknownStatus:(BOOL)a1;
- (void)_setStatus:(long long)a0 forAccount:(id)a1;
- (void)_setStatusDetails:(id)a0 forAccount:(id)a1;
- (void)_timedRefresh:(id)a0;
- (id)accountStatusDetails:(id)a0;
- (long long)knownAccountStatus:(id)a0;
- (void)refreshAndClearStatus:(BOOL)a0;
- (void)refreshStatusForClient:(id)a0 forceRefresh:(BOOL)a1;
- (void)registerAccountTypes:(unsigned long long)a0 accounts:(id)a1 forClient:(id)a2;
- (void)registerAccounts:(id)a0 forClient:(id)a1;
- (id)registeredAccountsForClient:(id)a0;

@end
