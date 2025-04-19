@class NSXPCConnection, NSString, NSError, IAProvider, NSDictionary, IAAccountSetupInput, NSObject, IAAccountSetupResult;
@protocol OS_dispatch_queue, IAXPCProtocol, OS_dispatch_semaphore;

@interface IAAccountCreator : NSObject {
    IAAccountSetupResult *_result;
    NSObject<OS_dispatch_semaphore> *_accountSetupSema;
    NSXPCConnection *_connection;
    id<IAXPCProtocol> _agent;
    NSObject<OS_dispatch_queue> *_replyQueue;
    IAAccountSetupInput *_input;
}

@property (retain) NSDictionary *settings;
@property (retain) NSString *providerID;
@property (retain) NSString *pluginID;
@property (retain) NSString *token;
@property BOOL continueThroughError;
@property BOOL continueWithoutSSL;
@property (retain) IAProvider *provider;
@property (retain) NSString *appleID;
@property (retain) NSString *createdUID;
@property (retain) NSError *error;

+ (id)_createAddressBookAccountWithSettings:(id)a0 providerID:(id)a1 error:(id *)a2;
+ (id)_createICalAccountWithSettings:(id)a0 providerID:(id)a1 error:(id *)a2;
+ (id)_createIChatAccountWithSettings:(id)a0 providerID:(id)a1 error:(id *)a2;
+ (id)_createMailAccountWithSettings:(id)a0 providerID:(id)a1 error:(id *)a2;
+ (id)_createNotesAccountWithSettings:(id)a0 providerID:(id)a1 error:(id *)a2;
+ (id)_createRemindersAccountWithSettings:(id)a0 providerID:(id)a1 error:(id *)a2;
+ (id)_possibleAppleIDForSettings:(id)a0;
+ (id)accountCreatorWithSettings:(id)a0 pluginID:(id)a1 providerID:(id)a2;
+ (id)createAccountForApp:(id)a0 settings:(id)a1 providerID:(id)a2 error:(id *)a3;
+ (id)inputForSettings:(id)a0 pluginID:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setResult:(id)a0;
- (id)input;
- (BOOL)create;
- (BOOL)_createForExchange;
- (BOOL)_createForOSXServer;
- (void)_dataPluginSetupCertificateRefused:(id)a0;
- (void)_dataPluginSetupFailed:(id)a0;
- (void)_dataPluginSetupSucceeded:(id)a0;
- (id)_digForAccountType;
- (id)_exchangeAutodiscoverForSettings:(id)a0;
- (id)_serverAddressForService:(id)a0;
- (BOOL)_warnAboutMigrationSyncIfNecessary;
- (void)createAccountWithReply:(id /* block */)a0;
- (id)initWithSettings:(id)a0 plugin:(id)a1;
- (id)initWithSettings:(id)a0 pluginID:(id)a1;

@end
