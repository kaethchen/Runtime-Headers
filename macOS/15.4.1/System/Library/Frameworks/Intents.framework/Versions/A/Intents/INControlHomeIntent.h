@class NSArray, INHomeUserTask, NSString, INDateComponentsRange;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (readonly, copy) INHomeUserTask *userTask;
@property (readonly, copy) NSArray *filters;
@property (readonly, copy) INDateComponentsRange *time;
@property (readonly, copy) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setTime:(id)a0;
- (void)setDomain:(id)a0;
- (BOOL)_hasTitle;
- (id)initWithContents:(id)a0;
- (void)setContents:(id)a0;
- (void)setFilters:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (id)_categoryVerb;
- (id)_initWithIdentifier:(id)a0 backingStore:(id)a1 schema:(id)a2 error:(id *)a3;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)initWithUserTask:(id)a0 filters:(id)a1;
- (id)initWithUserTask:(id)a0 filters:(id)a1 time:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setUserTask:(id)a0;

@end
