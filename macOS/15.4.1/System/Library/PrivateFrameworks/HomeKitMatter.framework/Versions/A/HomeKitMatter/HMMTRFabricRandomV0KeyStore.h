@class HMMTRMatterKeypair;

@interface HMMTRFabricRandomV0KeyStore : HMFObject <HMMTRMultiFabricDataStoreQueryKeychainDelegate, HMMTRMultiFabricDataStoreUpdateKeychainDelegate> {
    HMMTRMatterKeypair *_nodSigner;
}

@property (readonly, nonatomic) HMMTRMatterKeypair *nocSigner;
@property (readonly, nonatomic) HMMTRMatterKeypair *ownerSharedOperationalKeyPair;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)updateNocSigner:(id)a0 ownerSharedOperationalKeyPair:(id)a1;

@end
