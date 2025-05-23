@class NSMutableDictionary, NSMapTable, IDSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface IDSXPCDaemonController : NSObject {
    BOOL _sync;
}

@property (retain, nonatomic) IDSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary;
@property (retain, nonatomic) NSMutableDictionary *syncCollaboratorDictionary;
@property (retain, nonatomic) NSMapTable *interruptionHandlerByTarget;

+ (id)weakSharedInstance;
+ (void)asyncWeakSharedInstance:(id /* block */)a0;
+ (id)onQueueWeakSharedInstance;
+ (void)performDaemonControllerTask:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_collaboratorWithIdentifier:(id)a0 interface:(id)a1 timeout:(double)a2 errorHandler:(id /* block */)a3 resolverBlock:(id /* block */)a4;
- (id)_daemonProxyWithErrorHandler:(id /* block */)a0;
- (id)_initWithQueue:(id)a0 isSync:(BOOL)a1;
- (id)_initWithQueue:(id)a0 isSync:(BOOL)a1 connectionCreationBlock:(id /* block */)a2;
- (id)_sync_collaboratorWithIdentifier:(id)a0 errorHandler:(id /* block */)a1 resolverBlock:(id /* block */)a2;
- (id)_timingOutDaemonProxyWithTimeout:(double)a0 errorHandler:(id /* block */)a1;
- (id)activityMonitorCollaboratorWithErrorHandler:(id /* block */)a0;
- (void)addInterruptionHandler:(id /* block */)a0 forTarget:(id)a1;
- (id)baaSignerCollaboratorForTopic:(id)a0 withErrorHandler:(id /* block */)a1;
- (id)eventReportingCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)featureTogglerCollaboratorForService:(id)a0 withErrorHandler:(id /* block */)a1;
- (id)firewallCollaboratorForService:(id)a0 withErrorHandler:(id /* block */)a1;
- (id)groupSessionKeyValueDeliveryProviderCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)initSyncControllerWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 connectionCreationBlock:(id /* block */)a1;
- (id)interalTestingCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)keyTransparencyCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)offGridMessengerCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)offGridStateManagerCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)opportunisticCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)pairingCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)pairingCollaboratorWithTimeout:(double)a0 errorHandler:(id /* block */)a1;
- (void)performTask:(id /* block */)a0;
- (id)pinnedIdentityCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)registrationCollaboratorWithErrorHandler:(id /* block */)a0;
- (void)removeInterruptionHandlerForTarget:(id)a0;
- (id)reunionSyncCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)serverMessagingCollaboratorWithErrorHandler:(id /* block */)a0;

@end
