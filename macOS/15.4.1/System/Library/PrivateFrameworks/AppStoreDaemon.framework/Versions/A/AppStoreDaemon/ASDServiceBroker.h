@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDServiceBroker : NSObject {
    NSXPCConnection *_connection;
    NSXPCConnection *_daemonConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_machServiceName;
    int _token;
}

+ (id)interface;
+ (id)defaultBroker;
+ (id)newBrokerForMachServiceName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)getAppMetricsServiceWithCompletionHandler:(id /* block */)a0;
- (void)getAppStoreServiceWithCompletionHandler:(id /* block */)a0;
- (void)getCrossfireServiceWithCompletionHandler:(id /* block */)a0;
- (void)getDiagnosticServiceWithCompletionHandler:(id /* block */)a0;
- (id)getDiagnosticServiceWithError:(id *)a0;
- (id)getFairPlayServiceWithError:(id *)a0;
- (void)getIAPHistoryServiceWithCompletionHandler:(id /* block */)a0;
- (id)getIAPHistoryServiceWithError:(id *)a0;
- (void)getInstallationServiceWithCompletionHandler:(id /* block */)a0;
- (id)getInstallationServiceWithError:(id *)a0;
- (void)getLibraryServiceWithCompletionHandler:(id /* block */)a0;
- (id)getLibraryServiceWithError:(id *)a0;
- (void)getMacDaemonManagedServiceWithCompletionHandler:(id /* block */)a0;
- (id)getMacDaemonManagedServiceWithError:(id *)a0;
- (void)getManagedAppServiceWithCompletionHandler:(id /* block */)a0;
- (id)getManagedAppServiceWithError:(id *)a0;
- (void)getOcelotServiceWithCompletionHandler:(id /* block */)a0;
- (void)getPurchaseHistoryServiceWithCompletionHandler:(id /* block */)a0;
- (id)getPurchaseHistoryServiceWithError:(id *)a0;
- (void)getPurchaseServiceWithCompletionHandler:(id /* block */)a0;
- (id)getPurchaseServiceWithError:(id *)a0;
- (void)getRepairServiceWithCompletionHandler:(id /* block */)a0;
- (id)getRepairServiceWithError:(id *)a0;
- (void)getRestoreServiceWithCompletionHandler:(id /* block */)a0;
- (id)getStoreKitExternalNotificationServiceWithError:(id *)a0;
- (void)getTestFlightFeedbackServiceWithCompletionHandler:(id /* block */)a0;
- (id)getTestFlightFeedbackServiceWithError:(id *)a0;
- (void)getUpdatesServiceWithCompletionHandler:(id /* block */)a0;
- (id)getUpdatesServiceWithError:(id *)a0;
- (void)setSupportedNotificationDelivery:(id)a0;

@end
