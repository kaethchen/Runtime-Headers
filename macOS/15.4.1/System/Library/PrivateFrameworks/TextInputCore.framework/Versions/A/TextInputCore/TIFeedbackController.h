@class NSString;

@interface TIFeedbackController : NSObject {
    NSString *_studyID;
    NSString *_preferenceName;
}

- (id)init;
- (void).cxx_destruct;
- (void)scheduleRetry;
- (void)assessAndScheduleRetry;
- (id)computeRandomizedTimeIntervalFromTimestamp:(id)a0;
- (id)currentInputModes;
- (BOOL)currentPreferenceValue;
- (void)dispatchScheduledEventsWithDelegate:(id)a0 overrideSchedule:(BOOL)a1;
- (void)dispatchScheduledInitiationAndCompletionEventsImmediatelyWithDelegate:(id)a0;
- (void)dispatchScheduledInitiationAndTerminationEventsImmediatelyWithDelegate:(id)a0;
- (BOOL)feedbackFeatureEnabled;
- (void)handleFeedbackActionsWithDelegate:(id)a0;
- (void)handleFeedbackStateCompletionPendingWithDelegate:(id)a0 isEligibleDevice:(BOOL)a1;
- (void)handleFeedbackStateInitiatedWithDelegate:(id)a0 isEligibleDevice:(BOOL)a1 isPreferenceEnabled:(BOOL)a2;
- (void)handleFeedbackStateNoneWithDelegate:(id)a0 isEligibleDevice:(BOOL)a1;
- (void)handleFeedbackStateResponsePendingWithDelegate:(id)a0 isEligibleDevice:(BOOL)a1;
- (void)handleFeedbackStateRetryPendingWithDelegate:(id)a0 isEligibleDevice:(BOOL)a1;
- (void)initiateStudyWithInputModes:(id)a0 initialPreferenceValue:(BOOL)a1;
- (BOOL)isFCSBuild;
- (void)retrySurvey;
- (void)scheduleCompletionEvent;
- (void)scheduleInitiationEvent;
- (void)scheduleSurveyRequestEvent;
- (void)setInitiationState;
- (void)setPreferenceValue:(BOOL)a0;
- (void)setTerminationStateWithValue:(long long)a0;
- (BOOL)wasSurveySubmitted;

@end
