@class _ATXAppLaunchCategoricalHistogram;

@interface ATXAppClipsFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogram;
    _ATXAppLaunchCategoricalHistogram *_appClipsAndHeroAppHistogramNoDecay;
}

- (id)init;
- (void).cxx_destruct;
- (double)_overallRejects;
- (double)_confirmsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_confirmsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_engagementForAppClipWithHeroAppPrediction:(id)a0;
- (double)_engagementForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (double)_overallAppClipsengagement;
- (double)_overallConfirms;
- (double)_overallConfirmsNoDecay;
- (double)_overallRejectsNoDecay;
- (double)_rejectsForAppClipWithHeroAppPrediction:(id)a0;
- (double)_rejectsForAppClipWithHeroAppPredictionNoDecay:(id)a0;
- (BOOL)_shouldHideAppClipForLowEngagementNoDecay:(id)a0;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (void)addRejectForAppClipWithHeroAppPrediction:(id)a0 weight:(float)a1;
- (double)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0;
- (id)initWithAppClipsHistogram:(id)a0 appClipsHistogramNoDecay:(id)a1;
- (BOOL)shouldShowAppClipWithHeroAppPrediction:(id)a0;
- (BOOL)shouldShowAppClips;

@end
