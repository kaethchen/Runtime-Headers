@class NSTextField, NSString, NSView, NSFont, NSArray, NSStackView, ReaderAppearanceViewController, NSLayoutConstraint, NSParagraphStyle;
@protocol AssistantPopoverViewControllerDelegate, AssistantPopoverResultCollectionViewCellDelegate;

@interface AssistantPopoverResultCollectionViewCell : NSCollectionViewItem <NSTextFieldDelegate> {
    NSStackView *_contentView;
    NSTextField *_titleTextField;
    NSTextField *_bodyTextField;
    NSStackView *_summaryDisclaimerTextWrappingView;
    NSTextField *_summaryDisclaimerTextField;
    NSView *_bodyContentView;
    NSView *_backgroundView;
    NSView *_selectionView;
    NSStackView *_actionButtonStackView;
    NSView *_viewShadow;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_leadingButtonsConstraint;
    NSLayoutConstraint *_trailingButtonsConstraint;
    NSLayoutConstraint *_contentDistanceToTopBackgroundConstraint;
    NSLayoutConstraint *_contentDistanceToBottomBackgroundConstraint;
    ReaderAppearanceViewController *_readerAppearanceViewController;
    NSFont *_bodyTextFieldFont;
    NSFont *_summaryHeaderFont;
    NSParagraphStyle *_bodyParagraphStyle;
    NSArray *_actionButtons;
}

@property (class, readonly, nonatomic) NSString *identifier;

@property (weak, nonatomic) id<AssistantPopoverResultCollectionViewCellDelegate> delegate;
@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) id<AssistantPopoverViewControllerDelegate> assistantPopoverDelegate;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic, setter=setSummaryDisclaimer:) NSString *summaryDisclaimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setType:(long long)a0;
- (void)prepareForReuse;
- (void)loadView;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (BOOL)textField:(id)a0 textView:(id)a1 clickedOnLink:(id)a2 atIndex:(unsigned long long)a3;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)setSummary:(id)a0;
- (void)setBodyText:(id)a0;
- (void)setResultTitle:(id)a0;
- (void)_readerConfigurationChanged;
- (void)_setupActionButtonStackView;
- (void)_setupBodyContentView;
- (void)_setupBodyTextField;
- (void)_setupSummaryDisclaimerTextField;
- (void)_setupTitleTextField;
- (BOOL)_shouldPresentReaderForEvent:(id)a0 inView:(id)a1;
- (id)_titleFontForReaderCard:(id)a0;
- (void)_updateButtonColorForReaderTheme:(long long)a0;
- (void)setActionButtons:(id)a0;
- (void)updateReaderCardAppearance;

@end
