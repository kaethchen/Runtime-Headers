@class CDPAccount, ACAccountStore, CDPDAccount;
@protocol CDPWalrusSecurityProxy, CDPProtectedCloudStorageProxy;

@interface CDPInternalWalrusStateController : NSObject {
    id<CDPWalrusSecurityProxy> _securityProxy;
    id<CDPProtectedCloudStorageProxy> _pcsProxy;
    CDPAccount *_cdpAccount;
    CDPDAccount *_cdpDaemonAccount;
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (void)webAccessStatusWithCompletion:(id /* block */)a0;
- (unsigned long long)_pcsAccountInfoStatusUsingICDP:(id)a0;
- (unsigned long long)_walrusStatusWithContext:(id)a0 error:(id *)a1;
- (id)_combinedWalrusStatusForPrimaryAccountWithError:(id *)a0;
- (id)_combinedWalrusStatusWithContext:(id)a0 error:(id *)a1;
- (id)_combinedWalrusStatusWithOptions:(id)a0 context:(id)a1 error:(id *)a2;
- (id)_eligibleAccountWithContext:(id)a0 checkWithServer:(BOOL)a1 requireCKAccount:(BOOL)a2 error:(id *)a3;
- (id)_eligiblePrimaryAccountForFlow:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)_escrowedKeysStatusUsingICDP:(id)a0;
- (id)_fetchiCDPAccountInfoDictionaryWithContext:(id)a0 error:(id *)a1;
- (id)_optionsWithContext:(id)a0;
- (void)_setAccountTelemetryOptInConfig:(BOOL)a0 altDSID:(id)a1 authController:(id)a2 accountManager:(id)a3 completion:(id /* block */)a4;
- (BOOL)_shouldRetryForError:(id)a0;
- (unsigned long long)_statusForError:(id)a0;
- (void)_updateWalrusState:(BOOL)a0 context:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (void)_updateWalrusStateAndPerformPostEnablementActions:(BOOL)a0 context:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)_walrusStatusForPrimaryAccountWithError:(id *)a0;
- (unsigned long long)_walrusStatusWithOptions:(id)a0 withError:(id *)a1;
- (id)combinedWalrusStatusWithContext:(id)a0 error:(id *)a1;
- (id)initWithAccount:(id)a0 cdpdAccount:(id)a1 securityProxy:(id)a2 pcsProxy:(id)a3;
- (id)initWithAccount:(id)a0 cdpdAccount:(id)a1 securityProxy:(id)a2 pcsProxy:(id)a3 accountStore:(id)a4;
- (void)setWalrusStatusEnabled:(BOOL)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)setWebAccessStatusEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)walrusStatusWithContext:(id)a0 error:(id *)a1;

@end
