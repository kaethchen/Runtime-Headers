@class NSString, NSArray, NSURL, NSDate, CHSEntitlementCollection, NSDictionary;

@interface CHSWidgetExtensionInfo : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    NSDictionary *_controlTemplates;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *effectiveContainerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSURL *systemDataContainerURL;
@property (readonly, copy, nonatomic) NSString *dataProtectionLevel;
@property (readonly, nonatomic) BOOL disablesImplicitDiscovery;
@property (readonly, nonatomic) BOOL isDevelopmentExtension;
@property (readonly, nonatomic) BOOL wantsLocation;
@property (readonly, copy, nonatomic) NSArray *availableLocalizations;
@property (readonly, nonatomic) BOOL allowsMixedLocalizations;
@property (readonly, copy, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) CHSEntitlementCollection *entitlements;
@property (readonly, copy, nonatomic) NSArray *descriptors;
@property (readonly, copy, nonatomic) NSArray *widgetConfigurations;
@property (readonly, copy, nonatomic) NSArray *controlConfigurations;
@property (readonly, copy, nonatomic) NSArray *snapshotURLs;
@property (readonly, copy, nonatomic) NSArray *placeholderURLs;
@property (readonly, copy, nonatomic) NSArray *timelineURLs;
@property (readonly, copy, nonatomic) NSArray *liveControlURLs;
@property (readonly, copy, nonatomic) NSArray *livePlaceholderControlURLs;
@property (readonly, copy, nonatomic) NSArray *previewControlURLs;
@property (readonly, copy, nonatomic) NSArray *nominatedContainerBundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)_initWithInfo:(id)a0;

@end
