@class NSArray, INModifyRelationship, NSString;

@interface INSetRelationshipIntent : INIntent <INSetRelationshipIntentExport>

@property (readonly, copy) NSArray *contactIdentifiers;
@property (readonly, copy) INModifyRelationship *targetRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setContactIdentifiers:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithContactIdentifiers:(id)a0 targetRelationship:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setTargetRelationship:(id)a0;

@end
