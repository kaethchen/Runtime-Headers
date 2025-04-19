@protocol IADataPluginDelegate;

@interface IADataPlugin : IAPlugin

@property (retain) id<IADataPluginDelegate> delegate;

- (void).cxx_destruct;
- (id)accountUIDs;
- (id)accountUIDs:(id *)a0;
- (void)activateAccountUID:(id)a0;
- (void)aosAccountStartedMigration:(id)a0;
- (void)cancelAccountSetupForInput:(id)a0;
- (void)cancelSetupForAccount:(id)a0;
- (void)configureAccountUID:(id)a0;
- (id)createAccountForInput:(id)a0 discoveredResult:(id)a1 error:(id *)a2;
- (void)createAccountForInput:(id)a0 discoveredResult:(id)a1 reply:(id /* block */)a2;
- (void)deactivateAccountUID:(id)a0;
- (void)deleteAccountUID:(id)a0;
- (BOOL)deleteAccountUID:(id)a0 error:(id *)a1;
- (id)imageForAccountUID:(id)a0;
- (id)settingsForAccountUID:(id)a0;
- (void)startAccountSetupWithInput:(id)a0;
- (void)startAccountSetupWithInput:(id)a0 reply:(id /* block */)a1;

@end
