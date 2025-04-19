@interface CoreCDPUI.QuotaStorageViewModel : NSObject {
    void /* unknown type, empty encoding */ appleAccount;
    void /* unknown type, empty encoding */ hook;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ urlRequest;
    void /* unknown type, empty encoding */ _navigationPath;
    void /* unknown type, empty encoding */ _isQuotaScreenPresented;
    void /* unknown type, empty encoding */ _isRPDSuccessScreenPresented;
    void /* unknown type, empty encoding */ _isDataRecoveryResetFailedAlertPresented;
    void /* unknown type, empty encoding */ _isQuotaScreenDisabled;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
}

@property (nonatomic) BOOL isQuotaScreenDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithAppleAccount:(id)a0 url:(id)a1 urlRequest:(id)a2 hook:(id)a3;
- (void)setIsNetworkErrorPresented:(BOOL)a0 resetConfirmationAlertCompletion:(id /* block */)a1;
- (void)setIsQuotaScreenPresented:(BOOL)a0;
- (void)setIsRPDSuccessScreenPresented:(BOOL)a0 resetConfirmationAlertCompletion:(id /* block */)a1;

@end
