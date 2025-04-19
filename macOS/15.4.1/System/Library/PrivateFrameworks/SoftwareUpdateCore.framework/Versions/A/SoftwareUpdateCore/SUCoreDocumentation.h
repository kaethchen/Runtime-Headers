@class NSString, NSData, NSURL, NSNumber;

@interface SUCoreDocumentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *releaseNotesSummary;
@property (retain) NSData *releaseNotes;
@property (retain) NSData *licenseAgreement;
@property (retain) NSString *humanReadableUpdateName;
@property (retain) NSString *humanReadableUpdateTitle;
@property (retain) NSString *humanReadableUpdateVersion;
@property (retain) NSString *humanReadableMoreInfoLink;
@property BOOL notificationEnabled;
@property (retain) NSString *notificationTitleString;
@property (retain) NSString *notificationBodyString;
@property BOOL recommendedUpdateEnabled;
@property BOOL recommendedUpdateApplicable;
@property (retain) NSNumber *recommendedUpdateNotificationFrequencyDays;
@property (retain) NSString *recommendedUpdateMinOSVersion;
@property (retain) NSString *recommendedUpdateMaxOSVersion;
@property (retain) NSString *recommendedUpdateTitleString;
@property (retain) NSString *recommendedUpdateAlertBodyString;
@property (retain) NSString *mandatoryUpdateBodyString;
@property (retain) NSString *securityAdvisoryNotificationTitleString;
@property (retain) NSString *securityAdvisoryNotificationBodyString;
@property (retain) NSString *deviceCompatibilityNotificationTitleString;
@property (retain) NSString *deviceCompatibilityNotificationBodyString;
@property (retain) NSString *productVersion;
@property (retain) NSNumber *slaVersion;
@property (retain) NSURL *localBundleURL;
@property (retain) NSURL *serverAssetURL;
@property (retain) NSData *serverAssetMeasurement;
@property (retain) NSString *serverAssetAlgorithm;
@property long long serverAssetChunkSize;
@property (retain) NSString *language;
@property (retain) NSString *releaseNotesSummaryFileName;
@property (retain) NSString *releaseNotesFileName;
@property (retain) NSString *licenseAgreementFileName;
@property (retain) NSString *preferencesIconFileName;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)softwareUpdateIconImagePath;
- (id)_extendDocumentationProperties;
- (id)_extendDocumentationPropertiesWithSimulateEvent:(id)a0;
- (id)_resourceFromBundle:(struct __CFBundle { } *)a0 forKey:(id)a1;
- (id)extendDocumentationProperties;
- (id)initWithDocumentationAsset:(id)a0;
- (id)initWithLocalBundleURL:(id)a0 attributes:(id)a1;
- (BOOL)isRecommendedUpdateApplicable;

@end
