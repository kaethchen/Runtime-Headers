@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)ckEdgeCachedOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)ckMultiFetchBaseURLForConfiguration:(id)a0;
+ (id)ckOrderFeedBaseURLForConfiguration:(id)a0;
+ (id)ckRecordFetchBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)liveActivityBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)puzzlesArchiveBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)smarterFetchBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)CAPIBaseURL;
- (id)fairPlayBaseURL;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)authTokenBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)ckEdgeCachedMultiFetchBaseURLForConfiguration;
- (id)ckEdgeCachedOrderFeedBaseURLForConfiguration;
- (id)ckMultiFetchBaseURLForConfiguration;
- (id)ckOrderFeedBaseURLForConfiguration;
- (id)ckRecordFetchBaseURLForConfiguration;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)initWithCoreConfiguration:(id)a0;
- (id)newsletterBaseURL;
- (id)notificationsBaseURL;
- (id)puzzlesArchiveBaseURLForConfiguration;
- (id)searchBaseURLForConfiguration;
- (id)smarterFetchBaseURLForConfiguration;
- (id)sportsDataVisualizationBaseURLForConfiguration;

@end
