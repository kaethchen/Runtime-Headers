@interface ReplicatorServices.MigrationServer : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ lock_clients;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ localDeviceIDProvider;
    void /* unknown type, empty encoding */ recordProvider;
    void /* unknown type, empty encoding */ deviceProvider;
    void /* unknown type, empty encoding */ clientDescriptorProvider;
    void /* unknown type, empty encoding */ eraseHandler;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;

@end
