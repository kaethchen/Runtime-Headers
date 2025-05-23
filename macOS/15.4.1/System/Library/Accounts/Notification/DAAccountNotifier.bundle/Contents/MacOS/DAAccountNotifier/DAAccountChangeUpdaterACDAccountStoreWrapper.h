@class NSString, ACAccount, ACDAccountStore;

@interface DAAccountChangeUpdaterACDAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {
    ACAccount *_account;
    ACDAccountStore *_store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addAccount:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithAccount:(id)a0 store:(id)a1;
- (void)removeAccount:(id)a0 completion:(id /* block */)a1;
- (void)updateAccount:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
