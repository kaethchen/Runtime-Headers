@class NSString, CLPlacemark, NSNumber, INSupportedTrafficIncidentType;

@interface INReportIncidentIntent : INIntent <INReportIncidentIntentExport>

@property (copy) NSString *incidentType;
@property (readonly, copy) INSupportedTrafficIncidentType *incidentType;
@property (readonly, copy) NSNumber *startTime;
@property (readonly, copy) NSNumber *isClear;
@property (readonly, copy) CLPlacemark *userLocation;
@property (readonly, copy) NSString *additionalDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setStartTime:(id)a0;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setAdditionalDetails:(id)a0;
- (void)setUserLocation:(id)a0;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithIncidentType:(id)a0 startTime:(id)a1 additionalDetails:(id)a2 isClear:(id)a3;
- (id)initWithIncidentType:(id)a0 startTime:(id)a1 isClear:(id)a2 userLocation:(id)a3 additionalDetails:(id)a4;
- (id)parametersByName;
- (void)setIsClear:(id)a0;
- (void)setParametersByName:(id)a0;

@end
