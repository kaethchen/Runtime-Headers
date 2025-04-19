@class PKContinuityProximityVerification;

@interface PKProvisioningContinuityDiscoveryResponseMessage : PKSharingGenericMessage

@property (readonly, nonatomic) PKContinuityProximityVerification *proximityVerification;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithProximityVerification:(id)a0;

@end
