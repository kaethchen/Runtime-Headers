@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (void)_renewAppleAccountSilently:(BOOL)a0 completion:(id /* block */)a1;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void)silentlyRenewAppleAccountWithCompletionHandler:(id /* block */)a0;

@end
