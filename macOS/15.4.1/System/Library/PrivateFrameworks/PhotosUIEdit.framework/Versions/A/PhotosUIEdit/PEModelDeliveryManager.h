@interface PEModelDeliveryManager : NSObject {
    void /* unknown type, empty encoding */ packageType;
    void /* unknown type, empty encoding */ packageHelper;
    void /* unknown type, empty encoding */ progressCallback;
    void /* unknown type, empty encoding */ updateHandler;
    void /* unknown type, empty encoding */ deliveryManagerState;
    void /* unknown type, empty encoding */ isNetworkAvailable;
    void /* unknown type, empty encoding */ networkMonitor;
}

- (id)init;
- (void).cxx_destruct;
- (id)packageURLs;
- (BOOL)ready;
- (id)initWithPackageType:(unsigned long long)a0;
- (BOOL)isModelAvailable;
- (void)preparePackageWithProgress:(id /* block */)a0 updateHandler:(id /* block */)a1;
- (void)stopNetworkMonitoring;

@end
