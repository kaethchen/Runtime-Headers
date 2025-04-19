@class NSString, NSArray, NSURL, NSDate, NSObject;

@interface CHSMutableWidgetExtensionInfo : CHSWidgetExtensionInfo

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *containerBundleIdentifier;
@property (copy, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSURL *containerURL;
@property (copy, nonatomic) NSURL *systemDataContainerURL;
@property (copy, nonatomic) NSString *dataProtectionLevel;
@property (nonatomic) BOOL disablesImplicitDiscovery;
@property (nonatomic) BOOL isDevelopmentExtension;
@property (nonatomic) BOOL wantsLocation;
@property (copy, nonatomic) NSArray *availableLocalizations;
@property (nonatomic) BOOL allowsMixedLocalizations;
@property (copy, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSObject *entitlements;
@property (copy, nonatomic) NSArray *descriptors;
@property (copy, nonatomic) NSArray *widgetConfigurations;
@property (copy, nonatomic) NSArray *controlConfigurations;
@property (copy, nonatomic) NSArray *snapshotURLs;
@property (copy, nonatomic) NSArray *placeholderURLs;
@property (copy, nonatomic) NSArray *timelineURLs;
@property (copy, nonatomic) NSArray *liveControlURLs;
@property (copy, nonatomic) NSArray *livePlaceholderControlURLs;
@property (copy, nonatomic) NSArray *previewControlURLs;
@property (copy, nonatomic) NSArray *nominatedContainerBundleIdentifiers;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setBundleIdentifier:(id)a0;
- (void)setVersion:(id)a0;
- (void)setEntitlements:(id)a0;
- (void)setBundleURL:(id)a0;
- (void)setDescriptors:(id)a0;
- (void)setLastModifiedDate:(id)a0;
- (void)setContainerURL:(id)a0;
- (void)setSdkVersion:(id)a0;
- (void)setAllowsMixedLocalizations:(BOOL)a0;
- (void)setAvailableLocalizations:(id)a0;
- (void)setContainerBundleIdentifier:(id)a0;
- (void)setControlConfigurations:(id)a0;
- (void)setDataProtectionLevel:(id)a0;
- (void)setDisablesImplicitDiscovery:(BOOL)a0;
- (void)setEffectiveContainerBundleIdentifier:(id)a0;
- (void)setIsDevelopmentExtension:(BOOL)a0;
- (void)setLiveControlURLs:(id)a0;
- (void)setLivePlaceholderControlURLs:(id)a0;
- (void)setNominatedContainerBundleIdentifiers:(id)a0;
- (void)setPlaceholderURLs:(id)a0;
- (void)setPreviewControlURLs:(id)a0;
- (void)setSnapshotURLs:(id)a0;
- (void)setSystemDataContainerURL:(id)a0;
- (void)setTimelineURLs:(id)a0;
- (void)setWantsLocation:(BOOL)a0;
- (void)setWidgetConfigurations:(id)a0;

@end
