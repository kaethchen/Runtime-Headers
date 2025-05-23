@class NSObject, CNAvatarViewModel, CNVariableChangeHelper, CNAvatarCache, CNLikenessEditorPresentationController, CNAvatarView, NSLayoutConstraint, CNContact, NSString, CNContactStore, NSViewController, NSArray, CNAvatarPickerUserSetupMemojiData, CNAvatarPickerUserSetupPictureData, PRLikeness;
@protocol OS_os_log, CNAvatarUpdating, CNAvatarViewDelegate, CNCancelable;

@interface CNAvatarViewController : NSViewController <CNAvatarEditorDelegate, CNAvatarEditorViewControllerSettings, NSImmediateActionGestureRecognizerDelegate, QLPreviewMenuItemDelegate>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (retain) CNAvatarView<CNAvatarUpdating> *avatarView;
@property (retain, nonatomic) NSLayoutConstraint *avatarHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topMarginConstraint;
@property (retain) CNAvatarViewModel *viewModel;
@property BOOL isFullAvatar;
@property BOOL overrideIsMe;
@property (retain) CNLikenessEditorPresentationController *likenessEditorController;
@property (retain) NSViewController *presentingViewController;
@property (retain) CNVariableChangeHelper *contactDebouncer;
@property (retain) id<CNCancelable> likenessResolverToken;
@property (retain) id<CNCancelable> likenessSaveToken;
@property (retain) NSArray *overrideLikenesses;
@property BOOL shouldInvalidateCache;
@property BOOL alwaysAcceptDrop;
@property (nonatomic) long long displayStyle;
@property (readonly, nonatomic) CNAvatarPickerUserSetupMemojiData *userSetupMemojiData;
@property (readonly, nonatomic) CNAvatarPickerUserSetupPictureData *userSetupPictureData;
@property (readonly) CNContactStore *contactStore;
@property long long behavior;
@property (nonatomic) BOOL isMe;
@property BOOL directEditing;
@property BOOL userSetup;
@property (nonatomic) BOOL monogramOnly;
@property (nonatomic) BOOL allowEditingMemojiAndMonogramOnly;
@property (retain, nonatomic) CNAvatarCache *avatarCache;
@property (nonatomic) unsigned long long style;
@property (retain) NSArray *contacts;
@property (weak) id<CNAvatarViewDelegate> delegate;
@property (retain) PRLikeness *likeness;
@property (copy) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)contactStore;
+ (id)meMonitor;
+ (id)_fallbackMonogramStringForContact:(id)a0;
+ (id)_fallbackMonogramStringForContact:(id)a0 fallbackToDefaultString:(BOOL)a1;
+ (id)_monogramStringForContact:(id)a0;
+ (id)_monogramStringWithFallbackForContact:(id)a0 fallbackToDefaultString:(BOOL)a1;
+ (id)_popoverAnimationControllerWithContents:(id)a0 anchorView:(id)a1 vibrant:(BOOL)a2;
+ (id)_quicklookURLForContact:(id)a0;
+ (BOOL)canCreateMonogramForContact:(id)a0;
+ (id)defaultMonogramLikenessForContact:(id)a0;
+ (id)defaultMonogramLikenessForFullName:(id)a0;
+ (id)photoDataLikenessForContact:(id)a0;
+ (void)updateContact:(id)a0 withLikeness:(id)a1;
+ (void)updateContact:(id)a0 withLikeness:(id)a1 memojiMetadata:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setView:(id)a0;
- (void)delete:(id)a0;
- (unsigned long long)menuItem:(id)a0 preferredEdgeForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)rightMouseDown:(id)a0;
- (void)_commonInit;
- (BOOL)gestureRecognizer:(id)a0 shouldAttemptToRecognizeWithEvent:(id)a1;
- (void)immediateActionRecognizerDidCancelAnimation:(id)a0;
- (void)immediateActionRecognizerWillPrepare:(id)a0;
- (void)loadView;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)menuItemDidClose:(id)a0;
- (void)mouseDown:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setSelected:(BOOL)a0;
- (double)topMargin;
- (void)updateView;
- (id)initWithContactStore:(id)a0;
- (void)showEditorSheet;
- (struct CGSize { double x0; double x1; })sizeForLikeness;
- (void)_configureView;
- (id)_dataDetectorsActionContext;
- (id)_dataDetectorsMenuItem;
- (BOOL)_hasValidDataDetectorsContact;
- (BOOL)_hasValidQuicklookContact;
- (id)_immediateActionAnimationController;
- (id)_quicklookMenuItem;
- (BOOL)_supportsPresentingCard;
- (BOOL)_supportsPresentingCustomView;
- (void)addContactImage:(id)a0;
- (BOOL)canDisplayEditOverlay;
- (BOOL)canPresentAvatarPicker;
- (void)cardEditOverlayWasSelected;
- (void)configureViewAsIcon;
- (void)configureViewForCard;
- (double)desiredHeight;
- (void)editorDidFinish:(id)a0 withLikenessResult:(id)a1 cancelled:(BOOL)a2;
- (void)editorDidFinish:(id)a0 withLikenessResult:(id)a1 memojiMetadata:(id)a2 cancelled:(BOOL)a3;
- (void)editorDidFinish:(id)a0 withLikenessResult:(id)a1 memojiMetadata:(id)a2 userSetupMemojiRecords:(id)a3 cancelled:(BOOL)a4;
- (id)initWithContactStore:(id)a0 personaStore:(id)a1;
- (id)likenessedProvidersByFilteringOutInvalidProviders:(id)a0;
- (void)logAnyInvalidLikenessProviders:(id)a0 origin:(id)a1;
- (void)notifyDelegateOfOverlayTapIfNeeded;
- (void)notifyOverlayWasSelectedWithEvent:(id)a0;
- (id)overrideLikenessesForContacts:(id)a0;
- (void)presentAvatarPicker;
- (void)resolveLikenessesForContacts:(id)a0;
- (void)saveContact:(id)a0;
- (void)setEditOverlayShown:(BOOL)a0;
- (void)setLikenessProviders:(id)a0;
- (void)setPlaceholderContactCount:(unsigned long long)a0;
- (void)setupEditorSheet;
- (void)showDelegateSuppliedLikenessProvidersForContacts:(id)a0;
- (void)showEditorPopover;
- (void)showEditorSheetForLikeness:(id)a0;
- (void)showEditorSheetForLikeness:(id)a0 fromImageSource:(long long)a1;
- (void)showLastKnownLikenessProvidersForContacts:(id)a0;
- (void)showUpToDateLikenessProvidersForContacts:(id)a0;
- (void)updateContactThumbnailImageIfNeeded;
- (void)updateForDirectEditing;
- (void)updateLikenesses;
- (void)updateUserSetupMemojiDataWithRecords:(id)a0;
- (void)updateViewAsIcon;
- (void)updateViewForCard;
- (void)updateViewForCardPopover;
- (void)updateViewModelWithContacts:(id)a0;

@end
