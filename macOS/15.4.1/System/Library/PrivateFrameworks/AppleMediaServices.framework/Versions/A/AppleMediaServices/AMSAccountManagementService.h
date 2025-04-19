@interface AMSAccountManagementService : NSObject

- (id)_accountManagementServiceAsyncWithConnection:(id)a0;
- (id)_accountManagementServiceSyncWithConnection:(id)a0 error:(id *)a1;
- (BOOL)_supportsDirectAccess;
- (id)performCreateLocalAccountWithIdentifier:(id)a0;
- (void)performCreateLocalAccountWithIdentifier:(id)a0 error:(id *)a1;
- (id)performCreateLocalAccountWithType:(id)a0;
- (void)performCreateLocalAccountWithType:(id)a0 error:(id *)a1;

@end
