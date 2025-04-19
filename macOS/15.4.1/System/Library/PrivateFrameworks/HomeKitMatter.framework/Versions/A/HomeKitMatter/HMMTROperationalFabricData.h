@class NSNumber, NSData, HMMTRMatterKeypair;

@interface HMMTROperationalFabricData : HMFObject

@property (readonly, nonatomic) NSNumber *fabricID;
@property (readonly, nonatomic) NSData *ipk;
@property (readonly, nonatomic) NSNumber *residentNodeID;
@property (readonly, nonatomic) HMMTRMatterKeypair *operationalKeyPair;
@property (readonly, nonatomic) NSData *rootCert;
@property (readonly, nonatomic) NSData *operationalCert;
@property (readonly, nonatomic) NSNumber *operationalNodeID;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithRootCert:(id)a0 ipk:(id)a1 residentNodeID:(id)a2 operationalCert:(id)a3 operationalKeyPair:(id)a4;

@end
