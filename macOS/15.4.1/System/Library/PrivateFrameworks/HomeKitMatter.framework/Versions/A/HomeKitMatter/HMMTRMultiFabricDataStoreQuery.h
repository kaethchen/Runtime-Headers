@protocol HMMTRMultiFabricDataStoreQueryCHIPStorageDelegate, HMMTRMultiFabricDataStoreQueryV2FabricDataStoreDelegate, HMMTRMultiFabricDataStoreQueryKeychainDelegate;

@interface HMMTRMultiFabricDataStoreQuery : HMFObject

@property (weak, nonatomic) id<HMMTRMultiFabricDataStoreQueryCHIPStorageDelegate> chipStorageDelegate;
@property (weak, nonatomic) id<HMMTRMultiFabricDataStoreQueryKeychainDelegate> keychainDelegate;
@property (weak, nonatomic) id<HMMTRMultiFabricDataStoreQueryV2FabricDataStoreDelegate> v2FabricDataStoreDelegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithCHIPStorageDelegate:(id)a0 keychainDelegate:(id)a1 v2FabricDataStoreDelegate:(id)a2;
- (id)locallyStoredFabricDataWithDataPresentInV2FabricDataStore:(BOOL *)a0 error:(id *)a1;
- (id)fabricDataFromV2FabricDataItem:(id)a0;

@end
