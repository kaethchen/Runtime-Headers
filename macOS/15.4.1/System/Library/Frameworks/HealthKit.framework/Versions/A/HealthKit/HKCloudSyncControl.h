@class NSString, HKTaskServerProxyProvider;

@interface HKCloudSyncControl : NSObject <_HKXPCExportable, HKCloudSyncControlClientInterface> {
    HKTaskServerProxyProvider *_proxyProvider;
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
- (id)initWithHealthStore:(id)a0;
- (void)disableCloudSyncWithCompletion:(id /* block */)a0;
- (void)accountConfigurationDidChangeWithCompletion:(id /* block */)a0;
- (id)defaultChangesSyncRequestForWatch;
- (void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)a0;
- (void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)enableCloudSyncWithCompletion:(id /* block */)a0;
- (void)fetchCloudDescriptionWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchCloudSyncProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchCloudSyncRequiredWithCompletion:(id /* block */)a0;
- (void)fetchCloudSyncStatusWithCompletion:(id /* block */)a0;
- (void)forceCloudResetWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)a0;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)forceCloudSyncWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (void)oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)a0;
- (void)requestDataRefreshWithCompletion:(id /* block */)a0;
- (void)syncWithRequest:(id)a0 reason:(id)a1 completion:(id /* block */)a2;

@end
