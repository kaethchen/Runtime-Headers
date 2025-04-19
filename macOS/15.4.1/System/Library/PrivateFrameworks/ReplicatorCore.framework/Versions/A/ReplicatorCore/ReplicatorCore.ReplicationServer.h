@interface ReplicatorCore.ReplicationServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_clients;
    void /* unknown type, empty encoding */ lock_devices;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ replicator;
    void /* unknown type, empty encoding */ syncService;
    void /* unknown type, empty encoding */ lock_dataSources;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ recordDataStore;
    void /* unknown type, empty encoding */ clientDescriptorStore;
    void /* unknown type, empty encoding */ clientSettingsStore;
    void /* unknown type, empty encoding */ allowedClientVerifier;
    void /* unknown type, empty encoding */ notificationPoster;
    void /* unknown type, empty encoding */ predefinedClientDescriptorIDs;
    void /* unknown type, empty encoding */ lock_incomingMessages;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;

@end
