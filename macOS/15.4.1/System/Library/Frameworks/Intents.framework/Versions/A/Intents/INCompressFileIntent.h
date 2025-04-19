@class NSString;

@interface INCompressFileIntent : INIntent <INCompressFileIntent>

@property (readonly, copy) NSString *entityType;
@property (readonly, copy) NSString *entityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setEntityName:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setEntityType:(id)a0;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithEntityType:(id)a0 entityName:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
