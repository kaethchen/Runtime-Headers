@class NSString, NSDictionary, NSArray, NSError, NSMutableDictionary;

@interface AMSMetricsLoggingEvent : AMSMetricsEvent <NSMutableCopying>

@property (copy) NSDictionary *breadcrumbs;
@property (readonly) NSString *category;
@property (copy) NSString *clientApp;
@property (copy) NSString *clientBuildType;
@property (copy) NSString *currentProcess;
@property (copy) NSString *engagementEventType;
@property (readonly) NSError *error;
@property long long errorCode;
@property (copy) NSString *errorDomain;
@property (copy) NSString *errorMessage;
@property (copy) NSString *errorTitle;
@property long long errorUserInfoCryptoCode;
@property BOOL errorUserInfoEngagementPresented;
@property long long errorUserInfoServerErrorCode;
@property long long errorUserInfoStatusCode;
@property (copy) NSArray *eventDestinations;
@property double eventEndTime;
@property BOOL eventInlineInterruption;
@property (copy) NSString *eventParamEventType;
@property (copy) NSString *eventParamItemId;
@property (copy) NSString *eventParamProductType;
@property (copy) NSString *eventParamSource;
@property (copy) NSString *eventParamSuccess;
@property (copy) NSString *eventPlacement;
@property (copy) NSString *eventServiceType;
@property double eventStartTime;
@property (copy, nonatomic) NSDictionary *jsVersions;
@property (copy) NSArray *jsVersionMap;
@property (readonly) NSString *lastBreadcrumb;
@property (readonly) double lastBreadcrumbDuration;
@property long long logLevel;
@property (copy) NSString *originatingURL;
@property (copy) NSString *originatingURLParamBagProfile;
@property (copy) NSString *originatingURLParamBagProfileVersion;
@property (copy) NSString *releaseVersion;
@property (readonly) NSString *subsystem;
@property (readonly) NSMutableDictionary *underlyingDictionaryForSentry;
@property long long underlyingErrorCode;
@property (copy) NSString *underlyingErrorDomain;
@property (copy) NSString *underlyingErrorMessage;
@property (copy) NSString *underlyingErrorTitle;
@property long long underlyingErrorUserInfoCryptoCode;
@property BOOL underlyingErrorUserInfoEngagementPresented;
@property long long underlyingErrorUserInfoServerErrorCode;
@property long long underlyingErrorUserInfoStatusCode;
@property (copy) NSString *url;
@property (copy) NSString *urlParamBagProfile;
@property (copy) NSString *urlParamBagProfileVersion;

+ (id)_propertyValueClassesForKnownProperties;
+ (id)shouldSampleErrorsWithBag:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setCategory:(id)a0;
- (void)setSubsystem:(id)a0;
- (id)cleanURL:(id)a0;
- (id)getBuildType;
- (id)initWithSubsystem:(id)a0 category:(id)a1 error:(id)a2;
- (void)prepareEvent;
- (id)stringForLogLevel:(long long)a0;
- (id)underlyingDictionaryOverride;

@end
