@class NSArray;

@interface PKAuxiliaryCapabilityKeyCreationMetadataRequest : PKAuxiliaryCapabilityWebServiceRequest

@property (readonly, nonatomic) NSArray *capabilityStates;

- (id)init;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (id)initWithCapabilityStates:(id)a0 pass:(id)a1;

@end
