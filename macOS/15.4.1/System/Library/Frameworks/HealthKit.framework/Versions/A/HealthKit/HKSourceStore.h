@class NSString, HKProxyProvider;

@interface HKSourceStore : NSObject <_HKXPCExportable, HKSourceStoreClient> {
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
- (id)initWithHealthStore:(id)a0;
- (id)sourceForAppleDeviceWithUUID:(id)a0 identifier:(id)a1 name:(id)a2 productType:(id)a3 error:(id *)a4;
- (void)deleteSourceWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllSourcesWithCompletion:(id /* block */)a0;
- (void)fetchHasSampleWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchOrderedSourcesForObjectType:(id)a0 completion:(id /* block */)a1;
- (id)qaSourceForBundleIdentifier:(id)a0 name:(id)a1 error:(id *)a2;
- (void)updateOrderedSources:(id)a0 forObjectType:(id)a1 completion:(id /* block */)a2;

@end
