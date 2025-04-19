@class NSUUID, NSString, NSArray;

@interface HMDCHIPHomeKeychainFabricData : HMFObject <HMMTRMultiFabricDataStoreQueryV2FabricDataStoreDelegate, HMMTRMultiFabricDataStoreUpdateV2FabricDataStoreDelegate>

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *iCloudIdentifier;
@property (copy, nonatomic) NSArray *fabricDataItems;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)fabricDataItems;
- (id)initWithHomeUUID:(id)a0 iCloudIdentifier:(id)a1;
- (id)rcacFromFabricData:(id)a0;
- (BOOL)storeFabricData:(id)a0;
- (BOOL)storeFabricData:(id)a0 dataVersion:(id)a1;
- (id)systemKeychainStore;
- (id)unarchiveKeyItemValue:(id)a0;

@end
