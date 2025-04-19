@class ACMonitoredAccountStore, NSString, NSError, NSMutableArray;

@interface AMSCB1PAppleAccountStore : NSObject <ACMonitoredAccountStoreDelegateProtocol, AMSCB1PAppleAccountStoreSource> {
    ACMonitoredAccountStore *_store;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_postInitCompletions;
    BOOL _initCompleted;
    NSError *_initError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ changedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (void)loadLocalAccountWithCompletion:(id /* block */)a0;
- (void)loadActiveiTunesAccountWithCompletion:(id /* block */)a0;
- (void)loadAlliTunesAccountsWithCompletion:(id /* block */)a0;
- (void)removeAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)saveAccount:(id)a0 withCompletion:(id /* block */)a1;

@end
