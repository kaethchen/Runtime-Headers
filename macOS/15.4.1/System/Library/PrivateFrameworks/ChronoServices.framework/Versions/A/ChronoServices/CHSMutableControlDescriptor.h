@class NSString, NSArray, NSData, CHSExtensionIdentity, CHSIntentReference, CHSControlActionMetadata;

@interface CHSMutableControlDescriptor : CHSControlDescriptor <CHSMutableConfigurableDescriptor>

@property (nonatomic) unsigned long long controlVersion;
@property (copy, nonatomic) NSData *localeToken;
@property (copy, nonatomic) NSString *eventMachServiceName;
@property (copy, nonatomic) NSString *nativeContainerBundleIdentifier;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long platform;
@property (nonatomic) BOOL hiddenControl;
@property (nonatomic) BOOL disablesControlStateCaching;
@property (nonatomic) unsigned long long enablement;
@property (retain, nonatomic) NSArray *requiredFeatureFlags;
@property (nonatomic) long long visibility;
@property (copy, nonatomic) NSString *actionIntentType;
@property (copy, nonatomic) CHSExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long controlType;
@property (nonatomic) unsigned long long preferredControlSize;
@property (nonatomic) BOOL supportsPush;
@property (nonatomic) BOOL showsContextualMenu;
@property (copy, nonatomic) NSString *intentType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *widgetDescription;
@property (copy, nonatomic) CHSIntentReference *defaultIntentReference;
@property (nonatomic) BOOL hiddenBySensitiveUI;
@property (nonatomic) BOOL promptsForUserConfiguration;
@property (retain, nonatomic) CHSControlActionMetadata *actionMetadata;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDisplayName:(id)a0;
- (void)setKind:(id)a0;
- (void)setVisibility:(long long)a0;
- (void)setPlatform:(unsigned long long)a0;
- (void)setIntentType:(id)a0;
- (void)setSupportsPush:(BOOL)a0;
- (void)setDisablesControlStateCaching:(BOOL)a0;
- (void)setLocaleToken:(id)a0;
- (void)setPromptsForUserConfiguration:(BOOL)a0;
- (void)setActionMetadata:(id)a0;
- (void)setEnablement:(unsigned long long)a0;
- (void)setEventMachServiceName:(id)a0;
- (void)setExtensionIdentity:(id)a0;
- (void)setHiddenBySensitiveUI:(BOOL)a0;
- (void)setHiddenControl:(BOOL)a0;
- (void)setNativeContainerBundleIdentifier:(id)a0;
- (void)setPreferredControlSize:(unsigned long long)a0;
- (void)setRequiredFeatureFlags:(id)a0;
- (void)setSdkVersion:(id)a0;
- (void)setShowsContextualMenu:(BOOL)a0;
- (void)setWidgetDescription:(id)a0;
- (void)setControlType:(unsigned long long)a0;
- (void)setActionIntentType:(id)a0;
- (void)setControlVersion:(unsigned long long)a0;
- (void)setDefaultIntentReference:(id)a0;

@end
