@class NSSet, NSArray, NSString;

@interface INMoveFileIntent : INIntent <INMoveFileIntent>

@property (copy) NSSet *entityTypeSet;
@property (readonly) unsigned long long entityTypes;
@property (readonly, copy) NSArray *entityNames;
@property (readonly, copy) NSString *sourceType;
@property (readonly, copy) NSString *sourceName;
@property (readonly, copy) NSString *destinationType;
@property (readonly, copy) NSString *destinationName;
@property (readonly, copy) NSArray *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (void)setProperties:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setDestinationName:(id)a0;
- (void)setDestinationType:(id)a0;
- (void)setEntityNames:(id)a0;
- (void)setSourceName:(id)a0;
- (void)setSourceType:(id)a0;
- (void)setVerb:(id)a0;
- (void)setEntityTypes:(unsigned long long)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithEntityTypeSet:(id)a0 entityNames:(id)a1 sourceType:(id)a2 sourceName:(id)a3 destinationType:(id)a4 destinationName:(id)a5 properties:(id)a6;
- (id)initWithEntityTypes:(unsigned long long)a0 entityNames:(id)a1 sourceType:(id)a2 sourceName:(id)a3 destinationType:(id)a4 destinationName:(id)a5 properties:(id)a6;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;

@end
