@interface ReplicatorCore.StateCaptureServer : NSObject <ReplicatorServices.StateCaptureXPCServer, BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ requestProcessingQueue;
    void /* unknown type, empty encoding */ stateCaptureManager;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)stateFor:(id)a0 error:(id *)a1;
- (id)dataPathAndReturnError:(id *)a0;

@end
