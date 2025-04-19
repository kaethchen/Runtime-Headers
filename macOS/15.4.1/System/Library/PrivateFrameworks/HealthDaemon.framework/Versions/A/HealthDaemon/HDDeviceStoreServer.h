@class NSString;

@interface HDDeviceStoreServer : HDStandardTaskServer <HKDeviceStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_deleteDevice:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchAllDevicesWithCompletion:(id /* block */)a0;
- (void)remote_fetchDevicesMatchingValues:(id)a0 forProperty:(id)a1 completion:(id /* block */)a2;
- (void)remote_fetchGymkitAndBluetoothDevicesMatchingValues:(id)a0 forProperty:(id)a1 completion:(id /* block */)a2;

@end
