@class NSString, CLPlacemark;

@interface INSaveParkingLocationIntent : INIntent <INSaveParkingLocationIntentExport>

@property (readonly, copy) CLPlacemark *parkingLocation;
@property (readonly, copy) NSString *parkingNote;
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
- (void)setParkingNote:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithParkingLocation:(id)a0 parkingNote:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setParkingLocation:(id)a0;

@end
