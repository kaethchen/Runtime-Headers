@class NSString, NSArray, CLPlacemark, NSNumber, INDateComponentsRange;

@interface INUpdateEventIntent : INIntent <INUpdateEventIntentExport>

@property (readonly, copy) NSString *targetEventIdentifier;
@property (readonly, copy) NSString *setTitle;
@property (readonly, copy) INDateComponentsRange *setDateTimeRange;
@property (readonly, copy) CLPlacemark *setLocation;
@property (readonly, copy) NSArray *addParticipants;
@property (readonly, copy) NSArray *removeParticipants;
@property (readonly, copy) NSNumber *updateAllOccurrences;
@property (readonly, copy) NSNumber *removeLocation;
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
- (void)setSetLocation:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTargetEventIdentifier:(id)a0 setTitle:(id)a1 setDateTimeRange:(id)a2 setLocation:(id)a3 addParticipants:(id)a4 removeParticipants:(id)a5 updateAllOccurrences:(id)a6 removeLocation:(id)a7;
- (id)parametersByName;
- (void)setAddParticipants:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRemoveLocation:(id)a0;
- (void)setRemoveParticipants:(id)a0;
- (void)setSetDateTimeRange:(id)a0;
- (void)setSetTitle:(id)a0;
- (void)setTargetEventIdentifier:(id)a0;
- (void)setUpdateAllOccurrences:(id)a0;

@end
