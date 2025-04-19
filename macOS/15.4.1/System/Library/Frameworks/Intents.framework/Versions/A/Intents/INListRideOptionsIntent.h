@class NSString, CLPlacemark;

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>

@property (readonly, copy) CLPlacemark *pickupLocation;
@property (readonly, copy) CLPlacemark *dropOffLocation;
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
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithPickupLocation:(id)a0 dropOffLocation:(id)a1;
- (id)parametersByName;
- (void)setDropOffLocation:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPickupLocation:(id)a0;

@end
