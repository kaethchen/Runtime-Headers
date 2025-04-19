@class NSArray, NSString, TITypingSessionAligned, TITypingSession, TIRevisionRateAnalysisSummary;
@protocol TIMetricProviding, TIUserModeling;

@interface TIAutocorrectionFeedbackAnalyzer : NSObject <TITypingSessionAnalyzing, TIFeedbackControllerDelegate> {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    TIRevisionRateAnalysisSummary *_revisionRateAnalysisSummary;
}

@property (retain, nonatomic) NSArray *supportedLanguages;
@property (retain, nonatomic) id<TIUserModeling, TIMetricProviding> userModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyzerForUserModel:(id)a0 revisionRateAnalysisSummary:(id)a1;

- (void).cxx_destruct;
- (void)resetWordCounts;
- (void)accumulateWordCounts;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (id)initWithUserModel:(id)a0 revisionRateAnalysisSummary:(id)a1;
- (id)installedInputModesStringFromInputModes:(id)a0;
- (void)registerEventSpec;
- (void)sendCAEventForStudyStatus:(long long)a0;
- (void)sendCompletionEventUsingStudyDataFromFeedbackController:(id)a0;
- (void)sendInitiationEventUsingStudyDataFromFeedbackController:(id)a0;
- (void)sendRequestSurveyEventUsingStudyDataFromFeedbackController:(id)a0;
- (void)sendTerminationEventUsingStudyDataFromFeedbackController:(id)a0;
- (long long)studyStatusFromState:(long long)a0;

@end
