@class NSData, NSNumber, HMMTRMatterKeypair;

@interface HMMTRFabricDataSnapshot : HMFObject

@property (readonly, nonatomic) NSData *rootPublicKey;
@property (readonly, nonatomic) NSNumber *fabricID;
@property (readonly, nonatomic) NSData *ipk;
@property (readonly, nonatomic) NSNumber *residentNodeID;
@property (readonly, nonatomic) HMMTRMatterKeypair *rootKeyPair;
@property (readonly, nonatomic) NSData *rootCert;
@property (readonly, nonatomic) HMMTRMatterKeypair *residentOperationalKeyPair;
@property (readonly, nonatomic) NSData *residentOperationalCert;

- (void).cxx_destruct;
- (id)initWithRootPublicKey:(id)a0 fabricID:(id)a1 ipk:(id)a2 residentNodeID:(id)a3 rootKeyPair:(id)a4 rootCert:(id)a5 residentOperationalKeyPair:(id)a6 residentOperationalCert:(id)a7;

@end
