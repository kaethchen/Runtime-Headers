@class NSString, NSMutableArray, NSMutableDictionary;

@interface IADataPluginController : NSObject <IADataPluginDelegate> {
    NSMutableDictionary *_plugins;
    NSMutableDictionary *_workQueues;
}

@property (retain) NSMutableArray *dataPluginNotificationHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)plugin:(id)a0 performBlock:(id /* block */)a1;
+ (void)plugin:(id)a0 performBlock:(id /* block */)a1 withTimeOut:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_queueForPluginID:(id)a0;
- (void)plugin:(id)a0 accountSetupDidFail:(id)a1 withError:(id)a2;
- (void)plugin:(id)a0 accountSetupDidFinish:(id)a1 withResult:(id)a2;
- (void)plugin:(id)a0 accountSetupUpdate:(id)a1 withStatus:(long long)a2;
- (void)plugin:(id)a0 aosAccountMigrationFinished:(id)a1;
- (void)plugin:(id)a0 didChangeAccountUID:(id)a1;
- (void)plugin:(id)a0 didCreateAccountUID:(id)a1;
- (void)plugin:(id)a0 didDeleteAccountUID:(id)a1;
- (BOOL)plugin:(id)a0 handleCertificateError:(id)a1;
- (void)plugin:(id)a0 performBlock:(id /* block */)a1 withTimeOut:(long long)a2;

@end
