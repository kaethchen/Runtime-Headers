@class PKPassAuxiliaryRegistrationRequirement, PKPassAuxiliaryCapabilityKeyCreationMetadata;

@interface PKAuxiliaryCapabilityKeyCreationMetadataResponseEntry : NSObject

@property (readonly, nonatomic) PKPassAuxiliaryRegistrationRequirement *capability;
@property (readonly, nonatomic) PKPassAuxiliaryCapabilityKeyCreationMetadata *metadata;

- (void).cxx_destruct;
- (id)initWithCapability:(id)a0 metadata:(id)a1;

@end
