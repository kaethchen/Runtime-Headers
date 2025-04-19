@class NSString, HKProxyProvider;

@interface HKDeviceStore : NSObject <_HKXPCExportable, HKDeviceStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)deleteDevice:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0;
- (void)fetchAllDevicesWithCompletion:(id /* block */)a0;
- (void)fetchDevicesMatchingValues:(id)a0 forProperty:(id)a1 completion:(id /* block */)a2;
- (void)fetchGymkitAndBluetoothDevicesMatchingValues:(id)a0 forProperty:(id)a1 completion:(id /* block */)a2;

@end
