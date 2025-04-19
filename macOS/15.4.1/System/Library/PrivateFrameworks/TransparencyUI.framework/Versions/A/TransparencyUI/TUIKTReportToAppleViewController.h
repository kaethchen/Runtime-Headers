@class NSTextField, TUIReportManager, NSScrollView, NSString, TUIKTLearnMorePresenter, NSStackView, NSTextView, NSLayoutConstraint, NSImageView, NSButton, TUIKTReportToAppleContext;

@interface TUIKTReportToAppleViewController : NSViewController <NSTextViewDelegate> {
    TUIKTReportToAppleContext *_context;
    NSLayoutConstraint *_reportToAppleTextHeightConstraint;
    NSLayoutConstraint *_reportDetailsConstraint;
    TUIKTLearnMorePresenter *_learnMorePresenter;
}

@property (retain, nonatomic) TUIReportManager *reportManager;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSTextField *reportToAppleTitle;
@property (retain, nonatomic) NSTextView *reportToAppleText;
@property (retain, nonatomic) NSTextView *learnMoreLink;
@property (retain, nonatomic) NSScrollView *additionalDetailsText;
@property (retain, nonatomic) NSTextField *reportDetailsTitle;
@property (retain, nonatomic) NSScrollView *reportDetailsBody;
@property (retain, nonatomic) NSStackView *reportDetailsDescriptionStack;
@property (retain, nonatomic) NSButton *showDetailsButton;
@property (retain, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSButton *sendButton;
@property (retain, nonatomic) NSStackView *detailsStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)textView:(id)a0 clickedOnLink:(id)a1 atIndex:(unsigned long long)a2;
- (void)loadView;
- (id)textView:(id)a0 willChangeSelectionFromCharacterRanges:(id)a1 toCharacterRanges:(id)a2;
- (id)textView:(id)a0 willDisplayToolTip:(id)a1 forCharacterAtIndex:(unsigned long long)a2;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)cancelButtonClicked:(id)a0;
- (void)_setAtributedTextWithLink:(id)a0 text:(id)a1 linkID:(id)a2 linkText:(id)a3;
- (void)_setupReportDetailsDescription;
- (id)_setupReportDetailsDescriptionLine:(id)a0 textID:(id)a1;
- (void)_updateReportManager;
- (id)attributedStringForSystemImageNamed:(id)a0;
- (id)initWithContext:(id)a0 staticIdentityManager:(id)a1;
- (void)sendButtonClicked:(id)a0;
- (void)showDetailsClicked:(id)a0;

@end
