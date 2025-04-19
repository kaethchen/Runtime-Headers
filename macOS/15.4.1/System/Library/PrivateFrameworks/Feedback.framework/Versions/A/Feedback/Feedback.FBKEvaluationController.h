@interface Feedback.FBKEvaluationController : NSObject <Feedback.FBKFeedbackDraftViewControllerDelegate> {
    void /* unknown type, empty encoding */ _apiType;
    void /* unknown type, empty encoding */ blockPresentationDetentUsage;
    void /* unknown type, empty encoding */ __presentAsEmbeddedView;
    void /* unknown type, empty encoding */ _evaluationState;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _swiftUIDetent;
    void /* unknown type, empty encoding */ _isFeedbackFormPresented;
    void /* unknown type, empty encoding */ _interaction;
    void /* unknown type, empty encoding */ __evaluation;
    void /* unknown type, empty encoding */ __evaluationCompletionHandler;
    void /* unknown type, empty encoding */ _subject;
    void /* unknown type, empty encoding */ __cachedInteraction;
    void /* unknown type, empty encoding */ _formContext;
    void /* unknown type, empty encoding */ _actionPerformed;
    void /* unknown type, empty encoding */ __shouldShortenForRemoteView;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)feedbackDraftViewController:(id)a0 didCompleteWithResponseType:(long long)a1 responseID:(id)a2;
- (void)feedbackDraftViewController:(id)a0 didFailToAttachURL:(id)a1 error:(long long)a2;
- (void)feedbackDraftViewController:(id)a0 didFailToStartWithError:(long long)a1;
- (void)feedbackDraftViewController:(id)a0 didFailToSubmitFeedback:(id)a1;
- (void)feedbackDraftViewControllerDidCancel:(id)a0;
- (void)feedbackDraftViewControllerDidLoadForm:(id)a0;

@end
