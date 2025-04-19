@class NSString, NSArray;

@interface INShareFileIntent : INIntent <INShareFileIntent>

@property (readonly, copy) NSString *shareMode;
@property (readonly, copy) NSArray *entityNames;
@property (readonly, copy) NSArray *recipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setRecipients:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setShareMode:(id)a0;
- (void)setEntityNames:(id)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithShareMode:(id)a0 entityNames:(id)a1 recipients:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
