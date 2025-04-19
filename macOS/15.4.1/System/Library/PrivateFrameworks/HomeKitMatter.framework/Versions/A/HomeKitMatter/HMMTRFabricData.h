@class HMMTRFabric, NSData, NSNumber;

@interface HMMTRFabricData : HMFObject

@property (weak, nonatomic) HMMTRFabric *fabric;
@property (retain, nonatomic) NSData *rootCert;
@property (retain, nonatomic) NSNumber *residentNodeID;
@property (retain, nonatomic) NSData *ipk;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithFabric:(id)a0;

@end
