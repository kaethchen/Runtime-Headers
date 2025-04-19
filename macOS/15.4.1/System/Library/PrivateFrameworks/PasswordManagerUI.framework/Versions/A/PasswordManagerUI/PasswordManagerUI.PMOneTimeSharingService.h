@interface PasswordManagerUI.PMOneTimeSharingService : NSObject <NSSharingServiceDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharingService;
    void /* unknown type, empty encoding */ currentAccount;
    void /* unknown type, empty encoding */ currentWindow;
}

- (id)init;
- (void).cxx_destruct;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;

@end
