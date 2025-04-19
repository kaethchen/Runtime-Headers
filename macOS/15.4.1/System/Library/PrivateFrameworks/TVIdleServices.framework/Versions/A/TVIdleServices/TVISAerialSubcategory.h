@class NSArray, NSString, NSSet;

@interface TVISAerialSubcategory : TVISSettingsOption <BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSString *representativeAssetIdentifier;
@property (readonly, nonatomic) NSSet *activeForUserIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithSubcategoryEntity:(id)a0 localizationBundle:(id)a1 preferredLocalizations:(id)a2 assets:(id)a3;

@end
