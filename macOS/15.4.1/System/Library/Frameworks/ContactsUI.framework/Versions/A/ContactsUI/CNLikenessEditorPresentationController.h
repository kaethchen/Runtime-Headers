@class CNContact, NSView, NSLayoutConstraint, NSButton;
@protocol CNLikenessEditorPresentationStrategy;

@interface CNLikenessEditorPresentationController : CNAvatarEditorViewController

@property (retain) NSView *editorAreaView;
@property (retain) NSButton *deleteButton;
@property (retain) NSButton *cancelButton;
@property (retain) NSButton *actionButton;
@property (copy) id /* block */ actionButtonBlock;
@property (retain) CNContact *contact;
@property BOOL isMe;
@property BOOL isNewLikeness;
@property long long imageSource;
@property (retain) NSLayoutConstraint *editorWidthConstraint;
@property (retain, nonatomic) id<CNLikenessEditorPresentationStrategy> presentationStrategy;
@property (nonatomic) BOOL userSetup;
@property (nonatomic) BOOL allowEditingMemojiAndMonogramOnly;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)cancel;
- (void)loadView;
- (void)save;
- (void)setNextButtonAction:(id /* block */)a0;
- (BOOL)isBuddy;
- (id)_deletionStringForLikeness:(id)a0;
- (double)_topInsetForViewController:(id)a0;
- (void)actionButton:(id)a0;
- (void)cancelButton:(id)a0;
- (void)configureEditorForLikeness:(id)a0 type:(unsigned long long)a1;
- (void)configureLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(BOOL)a3;
- (void)configureRecentsEditor;
- (void)deleteButton:(id)a0;
- (id)initWithSettingsDelegate:(id)a0;
- (BOOL)isBackwardsNavigationEnabled;
- (void)setAvatarPickerAsActiveViewController;
- (void)setNextButtonEnabled:(BOOL)a0;
- (void)setNextButtonTitle:(id)a0;
- (void)setReadyToSave;
- (void)setupEditorViewForAvatarPicker;
- (void)showLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(BOOL)a3;
- (void)showLikenessEditorOnView:(id)a0 forLikeness:(id)a1 contact:(id)a2 isMe:(BOOL)a3 imageSource:(long long)a4;
- (void)showRecentsEditorOnView:(id)a0 forContact:(id)a1 isMe:(BOOL)a2;
- (void)updateButtonsWithLikeness:(id)a0;

@end
