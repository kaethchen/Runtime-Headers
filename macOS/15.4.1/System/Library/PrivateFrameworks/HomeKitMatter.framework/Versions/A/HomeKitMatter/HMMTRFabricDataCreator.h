@protocol HMMTRMultiFabricDataStoreQueryCHIPStorageDelegate, HMMTRMultiFabricDataStoreQueryKeychainDelegate;

@interface HMMTRFabricDataCreator : HMFObject

@property (weak, nonatomic) id<HMMTRMultiFabricDataStoreQueryCHIPStorageDelegate> chipStorageDelegate;
@property (weak, nonatomic) id<HMMTRMultiFabricDataStoreQueryKeychainDelegate> keychainDelegate;

+ (id)logCategory;
+ (id)fabricDataForRootKeyPair:(id)a0 opKeyPair:(id)a1 fabricID:(id)a2 residentNodeID:(id)a3 overridingRCAC:(id)a4 ipk:(id)a5;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithCHIPStorageDelegate:(id)a0 keychainDelegate:(id)a1;
- (id)newFabricData;
- (id)generateIPK;

@end
