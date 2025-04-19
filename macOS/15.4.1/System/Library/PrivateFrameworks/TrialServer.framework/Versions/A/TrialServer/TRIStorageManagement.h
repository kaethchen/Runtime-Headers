@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>

- (BOOL)_clearContainerStorage;
- (BOOL)_clearStorage;
- (void)_eliminateAllMAAssets;
- (void)_notifyNamespaceUpdated;
- (BOOL)_readDeviceIdWithSchemaVersion:(unsigned int)a0 intoData:(id *)a1;
- (BOOL)_readSchemaVersion:(unsigned int *)a0 fileExists:(BOOL *)a1;
- (BOOL)_runNamespaceDatabaseBlock:(id /* block */)a0;
- (BOOL)_writeDeviceIdWithData:(id)a0 schemaVersion:(unsigned int)a1;
- (BOOL)_writeSchemaVersion:(unsigned int)a0;
- (BOOL)prepareTrialStorage;
- (BOOL)requestTrialStorageResetOnNextLaunch;

@end
