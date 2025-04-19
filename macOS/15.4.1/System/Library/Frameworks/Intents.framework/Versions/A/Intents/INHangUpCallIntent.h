@class NSString;

@interface INHangUpCallIntent : INIntent <INHangUpCallIntentExport>

@property (readonly, copy) NSString *callIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithCallIdentifier:(id)a0;
- (id)parametersByName;
- (void)setCallIdentifier:(id)a0;
- (void)setParametersByName:(id)a0;

@end
