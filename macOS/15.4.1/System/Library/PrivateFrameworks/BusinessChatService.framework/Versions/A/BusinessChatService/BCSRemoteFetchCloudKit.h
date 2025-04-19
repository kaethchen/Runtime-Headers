@class NSString;
@protocol BCSQueryOperationFactoryProtocol, BCSCloudKitQueryProviding, BCSCoalesceHelperProtocol, BCSPIRServerEnvironmentProviding, BCSICloudServerEnvironmentProtocol, BCSCloudKitDatabaseProtocol, BCSQueryOperationProtocol, BCSMetricFactoryProtocol, BCSBloomFilterExtractorProtocol, BCSCloudKitContainerProtocol, BCSOperationGroupFactoryProtocol;

@interface BCSRemoteFetchCloudKit : NSObject <BSDescriptionProviding, BCSConfigRemoteFetching, BCSShardRemoteFetching, BCSMegashardRemoteFetching, BCSItemRemoteFetching, BCSShardItemInstantiating> {
    id<BCSQueryOperationProtocol> _queryOperation;
}

@property (readonly, retain, nonatomic) id<BCSCloudKitDatabaseProtocol> database;
@property (readonly, retain, nonatomic) id<BCSCloudKitQueryProviding> queryProvider;
@property (readonly, retain, nonatomic) id<BCSQueryOperationFactoryProtocol> queryOperationFactory;
@property (readonly, retain, nonatomic) id<BCSCloudKitContainerProtocol> databaseContainer;
@property (readonly, retain, nonatomic) id<BCSCoalesceHelperProtocol> coalesceHelper;
@property (readonly, retain, nonatomic) id<BCSBloomFilterExtractorProtocol> bloomFilterExtractor;
@property (readonly, retain, nonatomic) id<BCSOperationGroupFactoryProtocol> operationGroupFactory;
@property (readonly, retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (readonly, nonatomic) long long supportedType;
@property (readonly, retain, nonatomic) id<BCSICloudServerEnvironmentProtocol, BCSPIRServerEnvironmentProviding> environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_additionalHTTPHeadersForConfigAndShardFetchWithType:(long long)a0;
- (id)_additionalHTTPHeadersForConfigFetchWithType:(long long)a0;
- (id)_additionalHTTPHeadersForItemFetchWithType:(long long)a0;
- (id)_additionalHTTPHeadersForShardFetchWithShardType:(long long)a0;
- (void)_configureOperationForQuery:(id)a0 clientBundleID:(id)a1 systemTask:(id)a2 requestSpecificAdditionalHTTPHeaders:(id)a3 type:(long long)a4;
- (id)_itemsFromCloudKitResults:(id)a0 forType:(long long)a1;
- (id)_queryOperationForQuery:(id)a0 clientBundleID:(id)a1 systemTask:(id)a2 requestSpecificAdditionalHTTPHeaders:(id)a3 type:(long long)a4 multipleFetchCompletion:(id /* block */)a5;
- (id)_queryOperationForQuery:(id)a0 clientBundleID:(id)a1 systemTask:(id)a2 requestSpecificAdditionalHTTPHeaders:(id)a3 type:(long long)a4 singleFetchCompletion:(id /* block */)a5;
- (id)_queryOperationForQuery:(id)a0 configurationBlock:(id /* block */)a1 multipleFetchCompletion:(id /* block */)a2;
- (id)_queryOperationForQuery:(id)a0 configurationBlock:(id /* block */)a1 singleFetchCompletion:(id /* block */)a2;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchConfigItemWithType:(long long)a0 clientBundleID:(id)a1 systemTask:(id)a2 completion:(id /* block */)a3;
- (void)fetchItemsWithBucketStartIndex:(long long)a0 endIndex:(long long)a1 type:(long long)a2 forClientBundleID:(id)a3 completion:(id /* block */)a4;
- (void)fetchMegashardItemWithType:(long long)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchMegashardItemWithType:(long long)a0 clientBundleID:(id)a1 systemTask:(id)a2 completion:(id /* block */)a3;
- (void)fetchShardMatching:(id)a0 clientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithEnvironment:(id)a0 database:(id)a1 databaseContainer:(id)a2 queryOperationFactory:(id)a3 coalesceHelper:(id)a4 bloomFilterExtractor:(id)a5 operationGroupFactory:(id)a6 metricFactory:(id)a7;
- (id)initWithEnvironment:(id)a0 database:(id)a1 databaseContainer:(id)a2 queryProvider:(id)a3 queryOperationFactory:(id)a4 coalesceHelper:(id)a5 bloomFilterExtractor:(id)a6 operationGroupFactory:(id)a7 metricFactory:(id)a8;
- (id)shardItemFromURL:(id)a0 type:(long long)a1;

@end
