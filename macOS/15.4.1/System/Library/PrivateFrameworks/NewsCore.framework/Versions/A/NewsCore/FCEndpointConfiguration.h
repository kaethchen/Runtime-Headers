@class NSString;

@interface FCEndpointConfiguration : NSObject

@property (readonly, nonatomic) NSString *clientAPIBaseURLString;
@property (readonly, nonatomic) NSString *notificationsBaseURLString;
@property (readonly, nonatomic) NSString *staticAssetBaseURLString;
@property (readonly, nonatomic) NSString *remoteDataSourceBaseURLString;
@property (readonly, nonatomic) NSString *newsletterAPIBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsBaseURLString;
@property (readonly, nonatomic) NSString *fairPlayBaseURLString;
@property (readonly, nonatomic) NSString *searchAPIBaseURLString;
@property (readonly, nonatomic) NSString *puzzlesArchiveAPIBaseURLString;
@property (readonly, nonatomic) NSString *authTokenAPIBaseURLString;
@property (readonly, nonatomic) NSString *sportsDataVisualizationAPIBaseURLString;
@property (readonly, nonatomic) NSString *fineGrainedNewsletterSubscriptionBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsNotificationReceiptBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsSportsEventsBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsAppHealthBaseURLString;
@property (readonly, nonatomic) NSString *appAnalyticsAppHeartbeatBaseURLString;
@property (readonly, nonatomic) NSString *ckOrderFeedBaseURLString;
@property (readonly, nonatomic) NSString *ckMultiFetchBaseURLString;
@property (readonly, nonatomic) NSString *ckRecordFetchBaseURLString;
@property (readonly, nonatomic) NSString *ckEdgeCachedOrderFeedBaseURLString;
@property (readonly, nonatomic) NSString *ckEdgeCachedMultiFetchBaseURLString;
@property (readonly, nonatomic) NSString *smarterFetchBaseURLString;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 puzzlesArchiveAPIBaseURLString:(id)a8 appAnalyticsNotificationReceiptBaseURLString:(id)a9 authTokenAPIBaseURLString:(id)a10 sportsDataVisualizationAPIBaseURLString:(id)a11 fineGrainedNewsletterSubscriptionBaseURLString:(id)a12 appAnalyticsSportsEventsBaseURLString:(id)a13 appAnalyticsAppHealthBaseURLString:(id)a14 appAnalyticsAppHeartbeatBaseURLString:(id)a15 ckOrderFeedBaseURLString:(id)a16 ckMultiFetchBaseURLString:(id)a17 ckRecordFetchBaseURLString:(id)a18 ckEdgeCachedOrderFeedBaseURLString:(id)a19 ckEdgeCachedMultiFetchBaseURLString:(id)a20 smarterFetchBaseURLString:(id)a21;
- (id)initWithClientAPIBaseURLString:(id)a0 notificationsBaseURLString:(id)a1 staticAssetBaseURLString:(id)a2 remoteDataSourceBaseURLString:(id)a3 newsletterAPIBaseURLString:(id)a4 appAnalyticsBaseURLString:(id)a5 fairPlayBaseURLString:(id)a6 searchAPIBaseURLString:(id)a7 puzzlesArchiveAPIBaseURLString:(id)a8 appAnalyticsNotificationReceiptBaseURLString:(id)a9 authTokenAPIBaseURLString:(id)a10 sportsDataVisualizationAPIBaseURLString:(id)a11 fineGrainedNewsletterSubscriptionBaseURLString:(id)a12 appAnalyticsSportsEventsBaseURLString:(id)a13 appAnalyticsAppHealthBaseURLString:(id)a14 ckOrderFeedBaseURLString:(id)a15 ckMultiFetchBaseURLString:(id)a16 ckRecordFetchBaseURLString:(id)a17 ckEdgeCachedOrderFeedBaseURLString:(id)a18 ckEdgeCachedMultiFetchBaseURLString:(id)a19;

@end
