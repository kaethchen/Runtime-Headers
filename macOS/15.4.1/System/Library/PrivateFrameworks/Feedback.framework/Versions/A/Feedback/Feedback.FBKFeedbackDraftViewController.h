@interface Feedback.FBKFeedbackDraftViewController : NSViewController <NSWindowDelegate, Feedback.FeedbackClientProtocol> {
    void /* unknown type, empty encoding */ isAuthenticated;
    void /* unknown type, empty encoding */ isMinimized;
    void /* unknown type, empty encoding */ showsCompletionPage;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ _xpcConnection;
    void /* unknown type, empty encoding */ isClosing;
    void /* unknown type, empty encoding */ hasCalledDelegateAfterClosing;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ presentationDelegate;
    void /* unknown type, empty encoding */ form;
    void /* unknown type, empty encoding */ extensionObserver;
    void /* unknown type, empty encoding */ extensionKitQueryDelegate;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } preferredMinimumSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)closeWindow;
- (void)userAuthenticatedStatusChanged:(BOOL)a0;
- (void)didFailSubmissionWithError:(id)a0;
- (void)draftDirtyStateUpdated:(BOOL)a0;
- (void)feedbackDidBeginSubmission;
- (void)feedbackDidCompleteWithResponseType:(long long)a0 responseID:(id)a1 completedForm:(id)a2;
- (void)feedbackDidFailToAttachURL:(id)a0 nsError:(id)a1;
- (void)feedbackRestartDidFailWithError:(id)a0;

@end
