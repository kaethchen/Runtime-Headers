@class NSView, MUIBrandIndicatorProvider, EMNSUserDefaultsBoolObserver, NSString, EFAutoCancelationToken, EMCategory, EMCachingContactStore, EFFuture;
@protocol MessageListCellHelperApplicationProxy, MessageListCellViewable, EMMessageListItem;

@interface MessageListCellHelper : NSObject <MessageListCellDisclosureUpdatable>

@property (retain, nonatomic) EMNSUserDefaultsBoolObserver *automaticallySummarizeMessages;
@property (retain, nonatomic) EFAutoCancelationToken *updateSummaryCancelationToken;
@property (retain, nonatomic) id<MessageListCellHelperApplicationProxy> applicationProxy;
@property (readonly, weak, nonatomic) NSView *parentView;
@property (readonly, weak, nonatomic) NSView *contentView;
@property (readonly, nonatomic) NSView<MessageListCellViewable> *cellView;
@property (readonly, nonatomic) id<EMMessageListItem> messageListItem;
@property (readonly, nonatomic) long long style;
@property (nonatomic, getter=isCompact) BOOL compact;
@property (nonatomic) BOOL disclosureEnabled;
@property (nonatomic) BOOL shouldAnnotateReplyOrForward;
@property (nonatomic) BOOL shouldDisplayUnreadAndVIP;
@property (nonatomic, getter=isOutgoingMailbox) BOOL outgoingMailbox;
@property (nonatomic, getter=isInbox) BOOL inbox;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL canShowReadLaterDate;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isPriority) BOOL priority;
@property (nonatomic, getter=isSearchResult) BOOL searchResult;
@property (nonatomic, getter=isLocalMailboxSearchScope) BOOL localMailboxSearchScope;
@property (nonatomic, getter=shouldHideFollowUp) BOOL hideFollowUp;
@property (retain, nonatomic) EFFuture *predictedMailbox;
@property (nonatomic) long long numberOfPreviewLines;
@property (retain, nonatomic) MUIBrandIndicatorProvider *brandIndicatorProvider;
@property (nonatomic) BOOL senderSpecificCell;
@property (retain, nonatomic) EMCategory *category;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic) BOOL shouldShowHighImpact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_significantTimeChange;
- (id)_cellViewModelForMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (long long)_cellViewRelationshipTypeForFlags:(id)a0;
- (id)_generatedSummaryForUpdatingCellView:(id)a0;
- (id)_generatedSummaryString;
- (void)_updateGeneratedSummary;
- (void)_updateViewsToMatchMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (id)initWithParentView:(id)a0 contentView:(id)a1 cellView:(id)a2 applicationProxy:(id)a3;
- (void)setDisclosureEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setMessageListItem:(id)a0 style:(long long)a1;
- (void)setMessageListItem:(id)a0 style:(long long)a1 hintsBySnippetZone:(id)a2;
- (void)setShowsAccessory:(BOOL)a0 showingDetail:(BOOL)a1;

@end
