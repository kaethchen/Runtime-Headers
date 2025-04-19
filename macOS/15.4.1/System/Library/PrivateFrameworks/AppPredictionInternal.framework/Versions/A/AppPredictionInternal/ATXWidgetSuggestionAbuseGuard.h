@class ATXInformationStore, ATXTimelineAbuseControlConfig, ATXInformationFilter, NSDate;

@interface ATXWidgetSuggestionAbuseGuard : NSObject {
    ATXTimelineAbuseControlConfig *_config;
    ATXInformationStore *_store;
    ATXInformationFilter *_filter;
    NSDate *_scheduledRefreshDate;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidatePreviousVerdicts;
- (void)_scheduleRefreshNoLaterThanDate:(id)a0;
- (id)initWithConfig:(id)a0 store:(id)a1;
- (BOOL)shouldDemoteSuggestionsForWidget:(id)a0 kind:(id)a1 intent:(id)a2;

@end
