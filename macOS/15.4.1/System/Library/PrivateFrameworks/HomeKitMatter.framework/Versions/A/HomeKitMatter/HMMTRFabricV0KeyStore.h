@class HMMTRMatterKeypair;

@interface HMMTRFabricV0KeyStore : HMFObject <HMMTRMultiFabricDataStoreQueryKeychainDelegate, HMMTRMultiFabricDataStoreUpdateKeychainDelegate>

@property (readonly, nonatomic) HMMTRMatterKeypair *nocSigner;
@property (readonly, nonatomic) HMMTRMatterKeypair *ownerSharedOperationalKeyPair;

+ (id)logCategory;

- (BOOL)forceUpdateNocSigner:(id)a0 ownerSharedOperationalKeyPair:(id)a1;
- (BOOL)updateNocSigner:(id)a0 ownerSharedOperationalKeyPair:(id)a1;

@end
