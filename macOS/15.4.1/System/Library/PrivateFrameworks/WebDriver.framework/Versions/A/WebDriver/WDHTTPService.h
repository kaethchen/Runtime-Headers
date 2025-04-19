@class NSString, NSXPCConnection, NSArray, WDRemoteSessionManager, WDHTTPDriverInterface, NSObject;
@protocol OS_os_transaction;

@interface WDHTTPService : NSObject <RWIManagerDelegate, RWIDriverInterfaceDelegate, WDSessionProvider, WDServiceHost, NSXPCListenerDelegate, WDXPCService> {
    WDRemoteSessionManager *_sessionManager;
    NSObject<OS_os_transaction> *_clientTransaction;
    unsigned long long _notificationHandlerID;
}

@property (readonly, nonatomic) WDHTTPDriverInterface *driver;
@property (readonly, nonatomic) NSXPCConnection *clientConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *sessions;

+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_handleRWINotification:(id)a0;
- (void)_registerForRWINotifications;
- (void)_unregisterForRWINotifications;
- (void)driverInterface:(id)a0 stateChanged:(long long)a1;
- (BOOL)requestDriver:(id)a0 shouldBeActive:(BOOL)a1;
- (BOOL)_allowIncomingClientConnection:(id)a0;
- (void)_addDriverClient:(id)a0;
- (id /* block */)_defaultErrorHandler;
- (void)_removeDriverClient:(id)a0;
- (void)_terminateCleanly;
- (void)configureServerWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)destroySession:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAttributesOfLocalFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContentsOfLocalFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)launchApplication:(id)a0 withArguments:(id)a1 environment:(id)a2 forHost:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestSessionWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)startServerWithCompletionHandler:(id /* block */)a0;
- (void)stopServerWithCompletionHandler:(id /* block */)a0;
- (void)terminateApplicationWithProcessIdentifier:(int)a0 forHost:(id)a1 completionHandler:(id /* block */)a2;

@end
