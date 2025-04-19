@class ATXConfiguredModeService, NSString, NSArray, NSNumber, DNDModeConfiguration, ATXActivitySuggestionFeedbackStream, ATXActivitySuggestionsFeedbackHistogramHelper, ATXAppLaunches, BMStream;

@interface ATXModeSuggestionScorer : NSObject {
    NSString *_modeUUID;
    int _modeType;
    int _origin;
    NSString *_originAnchorType;
    NSString *_originBundleId;
    double _confidenceScore;
    double _secondsSinceSuggested;
    NSArray *_triggers;
    ATXConfiguredModeService *_configuredModeService;
    ATXActivitySuggestionFeedbackStream *_feedbackStream;
    ATXActivitySuggestionsFeedbackHistogramHelper *_feedbackHistogramHelper;
    ATXAppLaunches *_appLaunchStream;
    BMStream *_groundTruthModeStream;
    NSNumber *_feedbackScore;
    NSNumber *_rejectionsInPastWeek;
    NSNumber *_totalRejections;
    NSNumber *_totalIgnores;
    NSNumber *_timesShownInLastDay;
    NSNumber *_timesShown;
    NSNumber *_rejectionsAcrossAllModesInPastDay;
    NSNumber *_timesShownAcrossAllModesInPastDay;
    NSNumber *_timesShownAcrossAllModesInPastWeek;
    NSNumber *_rejectionsAcrossAllModesInPastWeek;
    NSNumber *_cachedIsUserCurrentlyInMode;
    NSNumber *_cachedIsUserCurrentlyInADifferentMode;
    NSNumber *_cachedIsModeConfigured;
    DNDModeConfiguration *_cachedDNDMode;
}

@property (readonly, nonatomic) BOOL isModeConfigured;
@property (readonly, nonatomic) BOOL isUserCurrentlyInMode;
@property (readonly, nonatomic) BOOL isUserCurrentlyInADifferentMode;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) BOOL shouldSuggestOnLockScreen;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (readonly, nonatomic) BOOL shouldAllowSmartEntry;

+ (BOOL)_areConfiguredTriggers:(id)a0 conflictingWithSuggestedTriggers:(id)a1;

- (void).cxx_destruct;
- (id)_lockScreenSuggestionThresholds;
- (void)_populateFeedbackScoresIfNeeded;
- (id)_scoringWeights;
- (BOOL)_hasHadEarlyExitTodayForModeWithUUID:(id)a0;
- (BOOL)_hasLaunchedAppOnAtLeastTwoSeparateDays;
- (BOOL)_hasUserSetUpModeBefore;
- (BOOL)_hasUserSetUpSmartActivationForThisModeBefore;
- (BOOL)_inValidLocaleForDrivingSuggestions;
- (BOOL)_isSameActivityAndSource:(id)a0;
- (BOOL)_isUserCurrentlyInDifferentModeFromSuggestedMode:(id)a0;
- (BOOL)_isUserCurrentlyInSuggestedMode:(id)a0;
- (void)_populateCachedDataAboutUsersCurrentMode;
- (void)_populateFeedbackScores;
- (BOOL)_shouldSuggestOnLockScreenWithDefaults:(id)a0;
- (id)initWithModeUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7;
- (id)initWithModeUUID:(id)a0 modeType:(int)a1 origin:(int)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 configuredModeService:(id)a8 feedbackStream:(id)a9 feedbackHistogramHelper:(id)a10 appLaunchStream:(id)a11 groundTruthModeStream:(id)a12;

@end
