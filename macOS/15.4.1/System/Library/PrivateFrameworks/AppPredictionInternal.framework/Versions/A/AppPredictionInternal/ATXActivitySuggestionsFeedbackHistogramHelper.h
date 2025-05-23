@class _ATXAppLaunchCategoricalHistogram;

@interface ATXActivitySuggestionsFeedbackHistogramHelper : NSObject {
    _ATXAppLaunchCategoricalHistogram *_feedbackCategoricalHistogram;
}

+ (id)histogramBundleIdForModeWithUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originAnchorType:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (double)acceptancesForLockScreenSuggestionWithModeUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originAnchorType:(id)a3;
- (id)initWithFeedbackCategoricalHistogram:(id)a0;
- (double)rejectionsForLockScreenSuggestionWithModeUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originAnchorType:(id)a3;
- (double)suggestionsGivenForLockScreenSuggestionWithModeUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originAnchorType:(id)a3;
- (void)updateFeedbackHistogramWithEvent:(id)a0;

@end
