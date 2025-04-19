@class ToCCIndicator, EMCategory, NSButton, MessageListCellLayoutValuesHelper, MessageListCellHelper, MessageListCellLayoutValues, MessageListCellViewModel, NSString, EFFuture, NSLayoutConstraint, EMCachingContactStore, MUIMessageListObjectProxy, NSColor;
@protocol MessageListCellDisclosureDelegate, EMMessageListItem, ECMessage, MUIMessageListTableCellViewDelegate, EMCollectionItemID, EFCancelable;

@interface MUIMessageListTableCellView : NSTableCellView <MessageListSectionCellCapable, MessageListCellViewable> {
    NSColor *_textColor;
}

@property (class, readonly, copy, nonatomic) NSString *reusableIdentifier;

@property (retain) MUIMessageListObjectProxy *objectValue;
@property (retain, nonatomic) ToCCIndicator *toCCIndicator;
@property (retain, nonatomic) NSLayoutConstraint *subjectLeadingToIndicatorConstraint;
@property (weak, nonatomic) NSButton *replyButton;
@property (readonly, nonatomic) id<ECMessage> message;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic) BOOL showToCc;
@property (nonatomic) BOOL showSnippetHighlighting;
@property (weak, nonatomic) id<MUIMessageListTableCellViewDelegate> delegate;
@property (nonatomic) long long backgroundViewConfigurationGrouping;
@property (nonatomic) BOOL needsFlushSeparator;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (weak, nonatomic) id<MessageListCellDisclosureDelegate> disclosureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MessageListCellHelper *cellHelper;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;
@property (retain, nonatomic) id<EMCollectionItemID> itemID;
@property (retain, nonatomic) EFFuture *messageListItemFuture;
@property (retain, nonatomic) id<EFCancelable> messageListItemFetchTimeoutCancelable;
@property (nonatomic) long long chevronType;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isCompact) BOOL compact;
@property (nonatomic) long long numberOfPreviewLines;
@property (nonatomic, getter=isSenderSpecificCell) BOOL senderSpecificCell;
@property (retain, nonatomic) EMCategory *category;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic) BOOL shouldShowHighImpact;
@property (nonatomic) BOOL shouldAnnotateReplyOrForward;
@property (nonatomic) long long annotatedRelationshipType;
@property (retain, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (readonly, nonatomic) MessageListCellLayoutValues *layoutValues;
@property (retain, nonatomic) MessageListCellViewModel *viewModel;
@property (copy, nonatomic) NSString *summary;
@property (nonatomic) BOOL hasGeneratedSummary;
@property (readonly, nonatomic) NSButton *disclosureButton;

+ (double)_calculateRowHeightUsingTextField:(id)a0;
+ (id)changeAttributedStringHighlighting:(id)a0 useSelectedStyle:(BOOL)a1;
+ (id)keyPathsForValuesAffectingMessage;
+ (id)keyPathsForValuesAffectingTextColor;
+ (unsigned long long)rowGroupingStyleFromCellGrouping:(long long)a0;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setNeedsUpdateConfiguration;
- (void)_updateToCCIndicatorWithString:(id)a0;
- (void)_setSymbolFonts;
- (void)refreshForSignificantTimeChange;
- (void)_preserveContentTintForImageViews:(id)a0;
- (void)applyIndicatorPreviewChangeAction:(id)a0;
- (void)setDisclosureEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setDisplayUnreadDot:(BOOL)a0;
- (void)setDisplayVIP:(BOOL)a0;
- (void)updateFontsUsingBold:(BOOL)a0;
- (BOOL)verifyContentVisibility:(id *)a0;

@end
