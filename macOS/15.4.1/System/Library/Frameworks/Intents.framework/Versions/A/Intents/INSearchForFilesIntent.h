@class NSString, NSArray;

@interface INSearchForFilesIntent : INIntent <INSearchForFilesIntent>

@property (readonly, copy) NSString *entityType;
@property (readonly, copy) NSString *entityName;
@property (readonly, copy) NSString *appId;
@property (readonly, copy) NSArray *properties;
@property (readonly, copy) NSString *scope;
@property (readonly, copy) NSString *scopeEntityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setEntityName:(id)a0;
- (void)setScope:(id)a0;
- (void)setProperties:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setAppId:(id)a0;
- (void)setEntityType:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithEntityType:(id)a0 entityName:(id)a1 appId:(id)a2 properties:(id)a3 scope:(id)a4 scopeEntityName:(id)a5;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setScopeEntityName:(id)a0;

@end
