@class NSString, INPerson, NSNumber, INDateComponentsRange;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (readonly) long long callType;
@property (readonly, copy) INDateComponentsRange *dateCreated;
@property (readonly, copy) INPerson *recipient;
@property (readonly) unsigned long long callCapabilities;
@property (readonly) unsigned long long callTypes;
@property (readonly, copy) NSNumber *unseen;
@property long long preferredCallProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)domain;
- (void)setDomain:(id)a0;
- (id)verb;
- (id)_dictionaryRepresentation;
- (void)setRecipient:(id)a0;
- (void)setDateCreated:(id)a0;
- (void)setVerb:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithCallType:(long long)a0 dateCreated:(id)a1 recipient:(id)a2 callCapabilities:(unsigned long long)a3;
- (id)initWithDateCreated:(id)a0 recipient:(id)a1 callCapabilities:(unsigned long long)a2 callTypes:(unsigned long long)a3;
- (id)initWithDateCreated:(id)a0 recipient:(id)a1 callCapabilities:(unsigned long long)a2 callTypes:(unsigned long long)a3 unseen:(id)a4;
- (id)parametersByName;
- (void)setCallCapabilities:(unsigned long long)a0;
- (void)setCallTypes:(unsigned long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setUnseen:(id)a0;

@end
