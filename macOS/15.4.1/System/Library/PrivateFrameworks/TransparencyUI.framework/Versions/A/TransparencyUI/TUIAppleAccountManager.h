@class ACAccountStore;

@interface TUIAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (id)initWithAccountStore:(id)a0;
- (void)silentRenewAppleAccountWithCompletionHandler:(id /* block */)a0;

@end
