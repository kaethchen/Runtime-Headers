@class NSUUID, HKHealthStore, NSString, HKTaskServerProxyProvider;

@interface HKSharedSummaryTransactionBuilder : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, copy, nonatomic) NSUUID *transactionUUID;
@property (readonly, weak, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)commitWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;
- (void)addMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addSummaries:(id)a0 completion:(id /* block */)a1;
- (void)addedSummariesWithPackage:(id)a0 names:(id)a1 resultsHandler:(id /* block */)a2;
- (void)commitAsUrgent:(BOOL)a0 completion:(id /* block */)a1;
- (void)discardWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 transactionUUID:(id)a1;
- (id)initWithHealthStore:(id)a0 transactionUUID:(id)a1 allowCommitted:(BOOL)a2;
- (id)isCommittedWithError:(id *)a0;
- (void)removeAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)removeSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)removeSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)reuseAllSummariesWithPackage:(id)a0 completion:(id /* block */)a1;
- (void)reuseSummaries:(id)a0 completion:(id /* block */)a1;
- (void)reuseSummariesWithPackage:(id)a0 names:(id)a1 completion:(id /* block */)a2;
- (void)reuseSummariesWithUUIDs:(id)a0 completion:(id /* block */)a1;

@end
