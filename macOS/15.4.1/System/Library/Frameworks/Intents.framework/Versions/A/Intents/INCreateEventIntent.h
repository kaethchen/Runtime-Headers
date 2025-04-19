@class NSString, NSArray, CLPlacemark, INDateComponentsRange;

@interface INCreateEventIntent : INIntent <INCreateEventIntentExport>

@property (readonly, copy) NSString *title;
@property (readonly, copy) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSArray *participants;
@property (readonly, copy) CLPlacemark *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setTitle:(id)a0;
- (void)setDomain:(id)a0;
- (void)setLocation:(id)a0;
- (void)setParticipants:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithTitle:(id)a0 dateTimeRange:(id)a1 participants:(id)a2 location:(id)a3;
- (id)parametersByName;
- (void)setDateTimeRange:(id)a0;
- (void)setParametersByName:(id)a0;

@end
