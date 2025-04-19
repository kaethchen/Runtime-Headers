@class NSArray, NSDictionary, PKOSVersionRequirementRange;

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature

@property (readonly, nonatomic) PKOSVersionRequirementRange *ownerSharingOSVersionRequirement;
@property (readonly, nonatomic) PKOSVersionRequirementRange *friendSharingOSVersionRequirement;
@property (readonly, copy, nonatomic) NSArray *supportedTerminals;
@property (readonly, copy, nonatomic) NSDictionary *brandIdentifierForBrandCode;

- (void).cxx_destruct;
- (id)supportedTerminalForIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0 region:(id)a1;
- (id)localizedNameForIssuerWithIdentifier:(id)a0;

@end
