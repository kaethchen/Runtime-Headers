@class NSString;

@interface PHACachingCPAnalyticsPropertiesTask : NSObject <PHAPhotoLibraryTask>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long featureCode;
@property (readonly, nonatomic) BOOL featureAvailable;
@property (readonly, nonatomic) BOOL featureComplete;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ageRangeDescriptionFromBirthday:(id)a0;
+ (id)_fetchDemographicsSummaryWithLoggingConnection:(id)a0;
+ (id)_fetchLibrarySummaryForPhotoLibrary:(id)a0 loggingConnection:(id)a1 progressReporter:(id)a2;
+ (id)_genderDescriptionFromGivenName:(id)a0;
+ (BOOL)_hasAppleMusicSubscriptionWithLoggingConnection:(id)a0;
+ (id)_meContactWithLoggingConnection:(id)a0;

- (int)priority;
- (id)_buildPropertyCacheForPhotoLibrary:(id)a0 loggingConnection:(id)a1 progressReporter:(id)a2;
- (BOOL)currentPlatformIsSupported;
- (id)incrementalKey;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)runWithPhotoLibrary:(id)a0 analytics:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)shouldRunWithPhotoLibrary:(id)a0;
- (id)taskClassDependencies;
- (void)timeoutFatal:(BOOL)a0;

@end
