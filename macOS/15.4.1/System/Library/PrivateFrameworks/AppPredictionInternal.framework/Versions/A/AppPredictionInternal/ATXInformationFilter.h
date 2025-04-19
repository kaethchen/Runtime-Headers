@class _PASQueueLock, ATXInformationStore, ATXTimelineAbuseControlConfig, _ATXAppLaunchHistogram, ATXDigitalHealthBlacklist, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface ATXInformationFilter : NSObject {
    NSCache *_appLaunchCountsByBundleId;
    NSObject<OS_dispatch_queue> *_queue;
    _PASQueueLock *_lock;
    ATXInformationStore *_store;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
    _ATXAppLaunchHistogram *_histogram;
    ATXDigitalHealthBlacklist *_digitalHealthBlockList;
}

+ (long long)chsFamilyForTimelineRelevanceSuggestionLayoutOptions:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_canSuggestionPassAppLaunchCheck:(id)a0;
- (void)_demoteFirstPartyDonatedSuggestionIfNecessary:(id)a0;
- (id)_fetchAppLaunchCountForBundleId:(id)a0;
- (BOOL)_isFirstPartyApp:(id)a0;
- (BOOL)_isSuggestionBlockedByDismiss:(id)a0 withGuardedData:(id)a1;
- (long long)_numberOfSeenRotationsForSuggestion:(id)a0;
- (void)_populateDismissRecordsCacheAsynchronously;
- (void)_removeExpiredDismissRecordsAsynchronously;
- (BOOL)_shouldBlockTimelineSuggestion:(id)a0 updatingAbuseControlOutcomes:(id)a1;
- (id)filterInfoSuggestions:(id)a0;
- (id)initWithStore:(id)a0 abuseControlConfig:(id)a1;
- (id)initWithStore:(id)a0 abuseControlConfig:(id)a1 histogram:(id)a2 digitalHealthBlockList:(id)a3;
- (long long)numberOfSeenRotationsForWidget:(id)a0 kind:(id)a1 intent:(id)a2 filterByClientModelId:(id)a3;
- (void)recordDismissOfSuggestion:(id)a0 isDismissalLongTerm:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldDisableRandomization:(id)a0;
- (BOOL)stalenessRotationsAreEnabled:(id)a0;

@end
