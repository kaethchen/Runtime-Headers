@class NSString;

@interface INReadAnnouncementIntent : INIntent <UNNotificationContentProviding, INReadAnnouncementIntentExport>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long readType;
@property (readonly, copy) NSString *startAnnouncementIdentifier;
@property (readonly) long long userNotificationType;
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
- (void)setStartAnnouncementIdentifier:(id)a0;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (void)_setMetadata:(id)a0;
- (id)_typedBackingStore;
- (id)initWithReadType:(long long)a0 startAnnouncementIdentifier:(id)a1 userNotificationType:(long long)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setReadType:(long long)a0;
- (void)setUserNotificationType:(long long)a0;

@end
