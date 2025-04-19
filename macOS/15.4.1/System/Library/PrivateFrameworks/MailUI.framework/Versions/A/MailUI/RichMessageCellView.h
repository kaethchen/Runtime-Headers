@class NSTextField, NSString, NSImageView, NSLayoutConstraint, NSStackView, NSMutableArray;

@interface RichMessageCellView : MUIRichMessageCellBase <MUIReusableIdentifiable> {
    BOOL _showSize;
    BOOL _showMailbox;
    BOOL _showSnippetHighlighting;
    unsigned long long _numberOfSnippetLines;
}

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) unsigned long long threadCount;
@property (retain, nonatomic) NSTextField *mailboxView;
@property (retain, nonatomic) NSTextField *sizeView;
@property (retain, nonatomic) NSStackView *flagsStackView;
@property (retain, nonatomic) NSImageView *singleStatusImageView;
@property (readonly, nonatomic) NSMutableArray *flagViews;
@property (retain, nonatomic) NSLayoutConstraint *senderLeadingToSuperviewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subjectMailboxConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusMailboxConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusDateConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subjectBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_calculateRowHeightUsingTextField:(id)a0;
+ (id)keyPathsForValuesAffectingIsOpen;
+ (id)keyPathsForValuesAffectingThreadCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)setObjectValue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setShowSize:(BOOL)a0;
- (BOOL)showSize;
- (void)_updateMutedIndicatorWithImage:(id)a0;
- (void)setShowMailbox:(BOOL)a0;
- (void)_setSymbolFonts;
- (void)_updateAttachmentViewWithImage:(id)a0;
- (void)_richTableCellViewCommonInit;
- (void)_setSnippetHidden:(BOOL)a0;
- (void)_updateAvatarViewWithContacts:(id)a0;
- (void)_updateCategorizationString;
- (void)_updateExtensionIndicatorWithImage:(id)a0;
- (void)_updateFlagViewsWithImages:(id)a0;
- (void)_updateHasGeneratedSummary:(id)a0;
- (void)_updateMailboxLabel;
- (void)_updateReadLaterIndicatorWithImage:(id)a0;
- (void)_updateReplyButtonWithImage:(id)a0;
- (void)_updateSingleStatusColor:(id)a0;
- (void)_updateSizeLabelWithSize:(id)a0;
- (void)_updateSnippetHighlightingStyle:(BOOL)a0;
- (void)_updateStatusViewWithImage:(id)a0;
- (void)_updateThreadControlWithThreadCount:(unsigned long long)a0;
- (void)_updateTimeSensitiveIndicatorWithImage:(id)a0;
- (void)_updateUnreadIndicatorWithImage:(id)a0;
- (void)_updateVIPIndicatorWithImage:(id)a0;
- (unsigned long long)numberOfSnippetLines;
- (void)setNumberOfSnippetLines:(unsigned long long)a0;
- (void)setShowSnippetHighlighting:(BOOL)a0;
- (BOOL)showMailbox;
- (BOOL)showSnippetHighlighting;
- (void)updateFontsUsingBold:(BOOL)a0;

@end
