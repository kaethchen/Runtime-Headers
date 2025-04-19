@class NSString, HKTaskServerProxyProvider;

@interface HKRaceRouteClusterStore : NSObject <_HKXPCExportable, HKRaceRouteClusterStoreClient> {
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
- (void)fetchRaceRouteClustersForActivityType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
