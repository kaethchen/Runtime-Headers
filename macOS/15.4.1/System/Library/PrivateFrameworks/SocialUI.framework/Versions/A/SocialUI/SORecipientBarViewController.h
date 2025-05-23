@class CNContactPicker, NSTextField, NSButton, NSString, IMHeaderView, SOProgressBarViewController, SOChatDetailsPopoverController, NSLayoutConstraint, NSImageView, SORecipientBarView, SOTokenFieldController;

@interface SORecipientBarViewController : SOChatViewController <NSMenuDelegate, CNContactPickerDelegate> {
    NSButton *_layoutTestDetailsButton;
    double _initialButtonWidth;
}

@property (retain) SOChatDetailsPopoverController *detailsPopoverController;
@property (retain) NSImageView *businessHeaderImageView;
@property (retain) NSLayoutConstraint *maximumRecipientScrollViewHeightConstraint;
@property (retain) NSLayoutConstraint *maximumRecipientScrollViewContentsHeightConstraint;
@property (retain) NSLayoutConstraint *recipientTokenFieldWidth;
@property (nonatomic) BOOL allowsTokenFieldScrolling;
@property (retain) NSLayoutConstraint *toLabelLeadingMarginConstraint;
@property (retain) NSLayoutConstraint *toLabelTopMarginConstraint;
@property (retain) NSLayoutConstraint *recipientTokenFieldTopMarginConstraint;
@property (retain) NSLayoutConstraint *recipientTokenFieldBottomMarginConstraint;
@property (retain) NSLayoutConstraint *recipientActionsViewBottomMarginConstraint;
@property (retain) NSLayoutConstraint *recipientActionsViewTrailingMarginConstraint;
@property (retain) CNContactPicker *contactPicker;
@property BOOL reloadContactPicker;
@property (readonly) SORecipientBarView *recipientBarView;
@property (retain) SOProgressBarViewController *progressBarViewController;
@property (retain) NSTextField *toLabel;
@property (retain) SOTokenFieldController *recipientTokenFieldController;
@property (retain) IMHeaderView *recipientScrollViewContentView;
@property (retain) NSButton *addRecipientButton;
@property (retain) NSButton *detailsButton;
@property double maximumRecipientScrollViewHeight;
@property double maximumStaticRecipientViewHeight;
@property double toLabelLeadingMargin;
@property double toLabelTopMargin;
@property double tokenFieldTopMargin;
@property double recipientActionsViewBottomMargin;
@property double recipientActionsViewTrailingMargin;
@property double tokenFieldBottomMargin;
@property double defaultFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)windowDidResize:(id)a0;
- (void)_updateColors;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)_updateBanner;
- (void)_stopObservingRecipientHandles:(id)a0;
- (void)chatDisplayControllerDidChange:(id)a0;
- (void)_chatDisplayControllerRecipientHandlesDidChange:(id)a0;
- (void)_chatStatusDidChange:(id)a0;
- (id)_detailsButtonTitleAttributes;
- (void)_handleInfoDidChange:(id)a0;
- (id)_redrawImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)_setupRecipientActionsView;
- (void)_startObservingRecipientHandles:(id)a0;
- (void)_tokenFieldDidChange:(id)a0;
- (void)_updateRecipientBarView;
- (void)accountLoginStatusChanged:(id)a0;
- (void)addRecipientActionView:(id)a0 verticalOffset:(double)a1;
- (BOOL)allowsTokenFieldScrolling;
- (void)chatDisplayControllerWillChange:(id)a0;
- (double)maximumRecipientScrollViewHeight;
- (double)maximumStaticRecipientViewHeight;
- (double)recipientActionsViewBottomMargin;
- (double)recipientActionsViewTrailingMargin;
- (id)recipientBarView;
- (void)recipientsSelected:(id)a0;
- (void)setAllowsTokenFieldScrolling:(BOOL)a0;
- (void)setMaximumRecipientScrollViewHeight:(double)a0;
- (void)setMaximumStaticRecipientViewHeight:(double)a0;
- (void)setRecipientActionsViewBottomMargin:(double)a0;
- (void)setRecipientActionsViewTrailingMargin:(double)a0;
- (void)setToLabelLeadingMargin:(double)a0;
- (void)setToLabelTopMargin:(double)a0;
- (void)setTokenFieldBottomMargin:(double)a0;
- (void)setTokenFieldTopMargin:(double)a0;
- (void)showContacts:(id)a0;
- (void)showDetails:(id)a0;
- (double)toLabelLeadingMargin;
- (double)toLabelTopMargin;
- (double)tokenFieldBottomMargin;
- (double)tokenFieldTopMargin;

@end
