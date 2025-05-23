@class NSString, NSArray, NSURL, NSUUID, NSNumber;

@interface FPDProviderDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *topLevelBundleIdentifier;
@property (retain, nonatomic) NSURL *topLevelBundleURL;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *extensionPointVersion;
@property (nonatomic) BOOL readonly;
@property (nonatomic) BOOL enabledByDefault;
@property (nonatomic) BOOL supportsEnumeration;
@property (nonatomic) BOOL defaultDomainVisible;
@property (nonatomic) BOOL shouldHideExtensionName;
@property (nonatomic) BOOL canToggleDomainVisibility;
@property (nonatomic) BOOL isAvailableSystemWide;
@property (nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic) BOOL supportsUnzippedPackages;
@property (nonatomic) BOOL hasExplicitExtensionStorageURLs;
@property (nonatomic) BOOL supportsPickingFolders;
@property (nonatomic) BOOL wantsFlattenedPackages;
@property (nonatomic) BOOL allowsUserControlledEviction;
@property (nonatomic) BOOL allowsSystemDeleteAlerts;
@property (nonatomic) BOOL allowsContextualMenuDownloadEntry;
@property (nonatomic) BOOL appliesChangesAtomically;
@property (retain, nonatomic) NSNumber *downloadPipelineDepth;
@property (retain, nonatomic) NSNumber *uploadPipelineDepth;
@property (retain, nonatomic) NSNumber *metadataOnlyUploadPipelineDepth;
@property (nonatomic) BOOL owningApplicationIsManaged;
@property (nonatomic) BOOL disallowedByMDM;
@property (retain, nonatomic) NSString *purposeIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifierForPushes;
@property (retain, nonatomic) NSURL *extensionBundleURL;
@property (retain, nonatomic) NSArray *supportedFileTypes;
@property (retain, nonatomic) NSArray *supportedSearchFilters;
@property (retain, nonatomic) NSArray *extensionStorageURLs;
@property (retain, nonatomic) NSString *documentGroupName;
@property (retain, nonatomic) NSArray *requestedExtendedAttributes;
@property (retain, nonatomic) NSUUID *extensionUUID;
@property (retain, nonatomic) NSString *personaIdentifier;
@property (nonatomic) BOOL managedPersona;
@property (nonatomic) BOOL wantsBundleBitOnlyPackageDetection;
@property (nonatomic) BOOL allowsExternalVolumes;

+ (id)personaFromExtensionRecord:(id)a0 managedPersona:(BOOL *)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionRecord:(id)a0;
- (BOOL)isPersonaLegit;

@end
