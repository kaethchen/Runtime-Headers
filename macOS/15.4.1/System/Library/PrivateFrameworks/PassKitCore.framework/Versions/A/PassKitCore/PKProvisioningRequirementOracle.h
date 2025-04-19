@class _PKProvisioningRequirementOracle;

@interface PKProvisioningRequirementOracle : NSObject {
    _PKProvisioningRequirementOracle *_underlying;
}

- (id)init;
- (void).cxx_destruct;
- (id)recoverableRequirements;
- (id)requirementsForAddSecureElementPassConfiguration:(id)a0;

@end
