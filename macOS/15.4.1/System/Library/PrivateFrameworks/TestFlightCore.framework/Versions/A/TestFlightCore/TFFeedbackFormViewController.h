@class TFFeedbackFormPresenter, TFFeedbackFormViewDataSource, NSButton, TFFeedbackBackgroundView, NSBox, NSLayoutConstraint, NSString, TFFeedbackTextView, ASDBetaAppLaunchInfo, NSTextView, NSView, TFFeedbackFormScreenshotCollectionView, NSTextField;

@interface TFFeedbackFormViewController : NSViewController <NSTextViewDelegate, TFFeedbackFormPresenterView>

@property (retain, nonatomic) ASDBetaAppLaunchInfo *launchInfo;
@property (retain, nonatomic) TFFeedbackFormViewDataSource *screenshotsCollectionDataSource;
@property (retain, nonatomic) NSView *view;
@property (weak, nonatomic) TFFeedbackBackgroundView *overallBackground;
@property (weak, nonatomic) TFFeedbackBackgroundView *nestedBackground;
@property (weak) NSLayoutConstraint *descriptionTextHeightConstraint;
@property (weak, nonatomic) NSTextView *descriptionTextView;
@property (weak, nonatomic) NSTextField *emailAddressLabel;
@property (weak, nonatomic) NSTextField *emailAddressField;
@property (weak, nonatomic) NSBox *emailAddressHorizontalSeparator;
@property (weak, nonatomic) NSLayoutConstraint *emailAddressHeightConstraint;
@property (weak, nonatomic) TFFeedbackTextView *feedbackTextView;
@property (weak, nonatomic) NSLayoutConstraint *feedbackTextScrollViewHeightConstraint;
@property (weak, nonatomic) NSBox *feedbackHorizontalSeparator;
@property (weak, nonatomic) TFFeedbackFormScreenshotCollectionView *screenshotsCollection;
@property (weak, nonatomic) NSTextField *screenshotsPlaceholderLabel;
@property (weak, nonatomic) NSButton *attachScreenshotsButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *submitButton;
@property (readonly, nonatomic) TFFeedbackFormPresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)bodyFont;
- (void)setupButtons;
- (id)initWithPresenter:(id)a0;
- (void)setupTitle;
- (void)cancelFeedback:(id)a0;
- (void)submitFeedback:(id)a0;
- (id)twoColumnLayout;
- (void)attachScreenshotsUsingFilePicker:(id)a0;
- (void)prepareForEntryType:(unsigned long long)a0;
- (void)reloadEntriesAtIndexPaths:(id)a0;
- (void)reloadEntryGroupsAtIndices:(id)a0;
- (void)setNavigationItemTitle:(id)a0;
- (void)setupEmailTextView;
- (void)setupFeedbackTextView;
- (void)setupPrivacyTextLabel;
- (void)setupScreenshotsCollectionView;
- (BOOL)shouldShowEmailField;
- (BOOL)shouldShowScreenshotsPlaceholderLabel;
- (void)showErrorAlertWithTitle:(id)a0 message:(id)a1;
- (void)showSubmitButtonForSubmissionPendingState:(BOOL)a0;

@end
