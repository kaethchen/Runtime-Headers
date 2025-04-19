@class NSTextField, NSView, MessageStatusStackView, RichMessageCellBaseTextField, NSStackView, EMCategory, NSLayoutConstraint, NSImageView, ThreadDisclosureControl, CNAvatarViewController;

@interface MUIRichMessageCellBase : MUIMessageListTableCellView {
    BOOL _senderSpecificCell;
    EMCategory *_category;
}

@property (readonly, nonatomic) BOOL isHighlighted;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSLayoutConstraint *avatarWidthConstraint;
@property (weak, nonatomic) NSView *avatarView;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (weak, nonatomic) NSTextField *senderView;
@property (weak, nonatomic) RichMessageCellBaseTextField *subjectView;
@property (weak, nonatomic) RichMessageCellBaseTextField *snippetView;
@property (weak, nonatomic) NSTextField *dateView;
@property (retain, nonatomic) NSImageView *unreadView;
@property (retain, nonatomic) NSImageView *vipView;
@property (retain, nonatomic) NSImageView *statusView;
@property (retain, nonatomic) NSImageView *flagStatusView;
@property (retain, nonatomic) NSImageView *attachmentView;
@property (retain, nonatomic) NSImageView *readLaterView;
@property (retain, nonatomic) NSImageView *mutedView;
@property (retain, nonatomic) NSImageView *extensionActedOnView;
@property (retain, nonatomic) MessageStatusStackView *statusStack;
@property (retain, nonatomic) NSStackView *trailingStatusStack;
@property (retain, nonatomic) ThreadDisclosureControl *threadDisclosureControl;
@property (weak, nonatomic) NSTextField *categoryView;
@property (nonatomic) BOOL showMailbox;
@property (nonatomic) BOOL showSize;
@property (nonatomic) BOOL showDateTime;
@property (nonatomic) unsigned long long numberOfSnippetLines;
@property (retain, nonatomic) NSImageView *timeSensitiveImageView;

+ (id)keyPathsForValuesAffectingSelected;
+ (double)photoDimensionForPhotoSize:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)category;
- (void)setObjectValue:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setCategory:(id)a0;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setSymbolFonts;
- (void)_didSelectDisclosureControl:(id)a0;
- (void)configureUnifiedMessageListThreadControlDisclosureTargetAction;
- (BOOL)isSenderSpecificCell;
- (void)setSenderSpecificCell:(BOOL)a0;
- (void)setThreadDisclosureAction:(SEL)a0;
- (void)setThreadDisclosureTarget:(id)a0;

@end
