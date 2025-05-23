@class NSString, NSNumber;

@interface INSaveProfileInCarIntent : INIntent <INSaveProfileInCarIntentExport>

@property (readonly, copy) NSString *profileLabel;
@property (readonly, copy) NSNumber *profileNumber;
@property (readonly, copy) NSString *profileName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setProfileName:(id)a0;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithProfileNumber:(id)a0 profileLabel:(id)a1;
- (id)initWithProfileNumber:(id)a0 profileName:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setProfileNumber:(id)a0;

@end
