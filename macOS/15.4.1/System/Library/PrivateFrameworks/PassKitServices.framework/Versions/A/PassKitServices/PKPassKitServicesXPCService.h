@class NSXPCConnection;

@interface PKPassKitServicesXPCService : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)_createConnection;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)imageDataForRecurringPaymentMemo:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)imageDataForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)snapshotDataForPassUniqueIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
