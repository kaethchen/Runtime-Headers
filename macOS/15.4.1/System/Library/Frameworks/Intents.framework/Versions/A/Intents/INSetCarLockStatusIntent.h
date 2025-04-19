@class NSNumber, INSpeakableString, NSString;

@interface INSetCarLockStatusIntent : INIntent <INSetCarLockStatusIntentExport>

@property (readonly, copy) NSNumber *locked;
@property (readonly, copy) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setLocked:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setCarName:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithLocked:(id)a0 carName:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
