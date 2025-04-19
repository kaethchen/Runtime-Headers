@class NSString, INCallRecordFilter, INCallRecord, NSArray, NSNumber, INStartCallRequestMetadata;

@interface INStartCallIntent : INIntent <UNNotificationContentProviding, INStartCallIntentExport>

@property long long recordTypeForRedialing;
@property (readonly) long long recordTypeForRedialing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) INCallRecordFilter *callRecordFilter;
@property (readonly, copy) INCallRecord *callRecordToCallBack;
@property (readonly) long long audioRoute;
@property (readonly) long long destinationType;
@property (readonly, copy) NSArray *contacts;
@property (readonly) long long callCapability;
@property long long preferredCallProvider;
@property (setter=setTTYType:) long long ttyType;
@property (copy) NSNumber *isGroupCall;
@property (copy) NSArray *callGroups;
@property (copy) NSString *notificationThreadIdentifier;
@property (copy) NSString *faceTimeLink;
@property (copy) INStartCallRequestMetadata *callRequestMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_ignoredParameters;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setDestinationType:(long long)a0;
- (void)setContacts:(id)a0;
- (void)setAudioRoute:(long long)a0;
- (void)setVerb:(id)a0;
- (long long)_intentCategory;
- (id)initWithCallRecordFilter:(id)a0 callRecordToCallBack:(id)a1 audioRoute:(long long)a2 destinationType:(long long)a3 preferredCallProvider:(long long)a4 contacts:(id)a5 ttyType:(long long)a6 callCapability:(long long)a7;
- (id)_categoryVerb;
- (id)_currentParameterCombination;
- (id)_emptyCopy;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_spotlightContentType;
- (id)_subtitleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)initWithAudioRoute:(long long)a0 destinationType:(long long)a1 contacts:(id)a2 callCapability:(long long)a3;
- (id)initWithAudioRoute:(long long)a0 destinationType:(long long)a1 contacts:(id)a2 recordTypeForRedialing:(long long)a3 callCapability:(long long)a4;
- (id)initWithAudioRoute:(long long)a0 destinationType:(long long)a1 preferredCallProvider:(long long)a2 contacts:(id)a3 recordTypeForRedialing:(long long)a4 ttyType:(long long)a5 callCapability:(long long)a6;
- (id)initWithCallRecordFilter:(id)a0 callRecordToCallBack:(id)a1 audioRoute:(long long)a2 destinationType:(long long)a3 contacts:(id)a4 callCapability:(long long)a5;
- (id)initWithDestinationType:(long long)a0 contacts:(id)a1 callCapability:(long long)a2;
- (id)parametersByName;
- (void)setCallCapability:(long long)a0;
- (void)setCallRecordFilter:(id)a0;
- (void)setCallRecordToCallBack:(id)a0;
- (void)setParametersByName:(id)a0;

@end
