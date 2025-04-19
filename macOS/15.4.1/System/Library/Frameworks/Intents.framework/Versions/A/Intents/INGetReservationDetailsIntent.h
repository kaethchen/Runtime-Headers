@class INSpeakableString, NSArray, NSString;

@interface INGetReservationDetailsIntent : INIntent <INGetReservationDetailsIntentExport>

@property (readonly, copy) INSpeakableString *reservationContainerReference;
@property (readonly, copy) NSArray *reservationItemReferences;
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
- (id)initWithReservationContainerReference:(id)a0 reservationItemReferences:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setReservationContainerReference:(id)a0;
- (void)setReservationItemReferences:(id)a0;

@end
