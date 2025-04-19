@class NSUUID, NSData, NSNumber, HMMTRMatterKeypair;

@interface HMDCHIPHomeKeychainFabricDataItem : NSObject <HMMTRMultiFabricDataStoreQueryV2FabricDataItem>

@property (readonly, nonatomic) HMMTRMatterKeypair *rootKeyPair;
@property (readonly, nonatomic) HMMTRMatterKeypair *residentOpKeyPair;
@property (readonly, nonatomic) NSNumber *fabricID;
@property (readonly, nonatomic) NSNumber *residentNodeID;
@property (readonly, nonatomic) NSNumber *rcac;
@property (readonly, nonatomic) NSData *ipk;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithKeyItemValueDictionary:(id)a0;

@end
