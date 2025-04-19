@class CDPInternalWalrusStateController;

@interface CDPWalrusDaemonService : NSObject {
    unsigned long long _entitlements;
}

@property (retain, nonatomic) CDPInternalWalrusStateController *walrusStateController;

- (void).cxx_destruct;
- (id)initWithEntitlements:(unsigned long long)a0;
- (oneway void)broadcastWalrusStateChange;
- (oneway void)combinedWalrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (oneway void)repairWalrusWithCompletion:(id /* block */)a0;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 authenticatedContext:(id)a1 completion:(id /* block */)a2;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (BOOL)_allowWalrusAccess;
- (BOOL)_allowWalrusPCSKeysAccess;
- (void)_checkWalrusBeforeFetchingPCSKeysForServices:(id)a0 pcsController:(id)a1 completion:(id /* block */)a2;
- (void)_pcsKeysForServices:(id)a0 pcsController:(id)a1 completion:(id /* block */)a2;
- (id)defaultWalrusStateController;
- (id)initWithEntitlements:(unsigned long long)a0 walrusController:(id)a1;

@end
