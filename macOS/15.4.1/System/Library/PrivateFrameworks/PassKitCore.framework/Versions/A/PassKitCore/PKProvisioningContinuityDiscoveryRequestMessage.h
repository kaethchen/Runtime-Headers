@class PKContinuityProximityAdvertisement;

@interface PKProvisioningContinuityDiscoveryRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) unsigned long long continuityType;
@property (readonly, nonatomic) PKContinuityProximityAdvertisement *advertisement;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithContinuityType:(unsigned long long)a0 advertisement:(id)a1;

@end
