@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>

@property (retain, nonatomic) NSXPCConnection *sharedConnection;
@property (readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (readonly) NSMutableArray *interruptionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleInterruption;
- (void)addInterruptionHandler:(id /* block */)a0;
- (id)_connectionProxyWithAccessBlock:(id /* block */)a0;
- (void)_connectionSyncProxyWithAccessBlock:(id /* block */)a0;
- (void)_errorForwardingProxyForServiceProxy:(id)a0 proxyReplyError:(id)a1 interface:(id)a2 proxyPromise:(id)a3;
- (void)_handleInvalidation;
- (void)_initializeConnection;
- (id)_serviceInterfaceForSelector:(SEL)a0;
- (id)accountCachedServerDataService;
- (id)accountManagementServiceProxy;
- (id)accountManagementServiceProxySyncWithError:(id *)a0;
- (id)accountSignOutServiceProxy;
- (void)attemptResumeIfRequired;
- (id)callService:(id)a0 then:(id /* block */)a1;
- (id)cookieServiceProxy;
- (id)cookieServiceProxySyncWithError:(id *)a0;
- (id)deviceMessengerProxyWithDelegate:(id)a0;
- (id)dismissQRDialogServiceProxy;
- (id)fraudReportServiceProxy;
- (id)keychainServiceProxy;
- (id)paymentConfirmationProxy;
- (id)paymentValidationServiceProxy;
- (id)purchaseServiceProxy;
- (id)pushNotificationService;
- (id)securityServiceProxyWithDelegate:(id)a0;

@end
