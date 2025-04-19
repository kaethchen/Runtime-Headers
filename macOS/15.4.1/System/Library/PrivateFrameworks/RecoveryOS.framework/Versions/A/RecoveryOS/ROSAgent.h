@class NSLock, NSXPCConnection;

@interface ROSAgent : NSObject

@property (retain, nonatomic) NSLock *connectionLock;
@property (retain, nonatomic) NSXPCConnection *agentConnection;
@property (readonly, nonatomic) BOOL userAuthenticatedInRecovery;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (BOOL)bootstrapServiceWithDictionary:(id)a0 outError:(id *)a1;
- (BOOL)installMenuExtrasWithError:(id *)a0;
- (void)launchExecutableAtPath:(id)a0 withArguments:(id)a1 waitUntilExit:(BOOL)a2 synchronouslyWait:(BOOL)a3 withCompletion:(id /* block */)a4;
- (BOOL)launchLanguageChooser:(id *)a0;
- (BOOL)runAquaSpecificTasks:(id *)a0;
- (BOOL)setUserAuthenticatedInRecovery:(BOOL)a0 error:(id *)a1;
- (BOOL)shutdownRecoveryOSWithReason:(id)a0 rebootInstead:(BOOL)a1 dueToFatalError:(BOOL)a2 withError:(id *)a3;
- (BOOL)trmAutoApproveDevices:(id *)a0;
- (BOOL)trmEnableNotifications:(id *)a0;

@end
