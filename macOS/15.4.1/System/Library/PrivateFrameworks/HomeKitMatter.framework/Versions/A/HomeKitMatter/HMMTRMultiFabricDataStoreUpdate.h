@class HMMTRFabricDataSnapshot;
@protocol HMMTRMultiFabricDataStoreUpdateCHIPStorageDelegate, HMMTRMultiFabricDataStoreUpdateKeychainDelegate, HMMTRMultiFabricDataStoreUpdateV2FabricDataStoreDelegate;

@interface HMMTRMultiFabricDataStoreUpdate : HMFObject

@property (readonly, nonatomic) HMMTRFabricDataSnapshot *fabricData;
@property (readonly, weak, nonatomic) id<HMMTRMultiFabricDataStoreUpdateCHIPStorageDelegate> chipStorageDelegate;
@property (readonly, weak, nonatomic) id<HMMTRMultiFabricDataStoreUpdateKeychainDelegate> keychainDelegate;
@property (readonly, weak, nonatomic) id<HMMTRMultiFabricDataStoreUpdateV2FabricDataStoreDelegate> v2FabricDataStoreDelegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)commit;
- (id)logIdentifier;
- (id)initWithFabricData:(id)a0 chipStorageDelegate:(id)a1 keychainDelegate:(id)a2 v2FabricDataStoreDelegate:(id)a3;
- (id)chipStorageContentFromFabricData:(id)a0;

@end
