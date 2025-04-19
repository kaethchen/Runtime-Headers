@class NTTodayResults, NTPBTodayResultOperationFetchInfo, NSDictionary, NSMutableSet, NSDate, NTCatchUpOperationForYouFetchInfo, NTPBTodayConfig;

@interface NTNewsTodayResultOperation : NTTodayResultOperation

@property (retain, nonatomic) NSMutableSet *articleIDsToExclude;
@property (copy, nonatomic) NTPBTodayConfig *todayConfig;
@property (copy, nonatomic) NSDate *filterDate;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic) double resultHeadlineScaleFactor;
@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void)operationWillFinishWithError:(id)a0;
- (void)prepareOperation;
- (void)resetForRetry;
- (BOOL)validateOperation;
- (void)_assembleQueueDescriptorsWithConfig:(id)a0 allowOnlyWatchEligibleSections:(BOOL)a1 respectsWidgetVisibleSectionsLimit:(BOOL)a2 personalizationTreatment:(id)a3 aggregateStore:(id)a4 appConfiguration:(id)a5 todayData:(id)a6 completion:(id /* block */)a7;
- (void)_fetchTodayResultsWithFetchHelper:(id)a0 aggregator:(id)a1 budgetInfo:(id)a2 appConfiguration:(id)a3 feedPersonalizer:(id)a4 todayData:(id)a5 todayBanner:(id)a6 completion:(id /* block */)a7;
- (void)_finalizeTodayResultsWithSectionDescriptors:(id)a0 catchUpOperationResultsBySectionDescriptor:(id)a1 appConfiguration:(id)a2 feedPersonalizer:(id)a3 todayData:(id)a4 todayBanner:(id)a5 completion:(id /* block */)a6;
- (id)_firstRefreshDateDefaultsKey;
- (void)_registerForYouFetchWithForYouFetchInfo:(id)a0;
- (unsigned long long)convertBannerBackgroundMethodToNTBannerBackgroundType:(int)a0;
- (unsigned long long)convertBannerImageMethodToNTBannerImageType:(int)a0;
- (id)dictionaryFromColorGradient:(id)a0;
- (id)gradientBackgroundPairFromLightGradientDict:(id)a0 darkGradientDict:(id)a1;
- (id)todayBannerWithTodayConfig:(id)a0 todayData:(id)a1;

@end
