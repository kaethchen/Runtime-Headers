@class CNAvatarViewController, CNLikenessEditorPresentationController, NSString, CNUIMeContactMonitor, CNContact, AKCardViewDataSource, CNLikeness, CNContactAvatarPersistenceHelper;
@protocol CNContactLikenessPickerViewControllerDelegate, CNCancelable;

@interface CNContactLikenessPickerViewController : NSViewController <CNAvatarEditorDelegate, CNAvatarViewDelegate, CNContactCardWidget>

@property (retain) CNLikenessEditorPresentationController *editorPresentationController;
@property (weak) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) id<CNCancelable> currentLikenessToken;
@property (retain, nonatomic) CNLikeness *likenessBeingEdited;
@property (retain, nonatomic) CNUIMeContactMonitor *meContactMonitor;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (retain, nonatomic) CNContactAvatarPersistenceHelper *persistenceHelper;
@property (weak, nonatomic) id<CNContactLikenessPickerViewControllerDelegate> delegate;
@property (nonatomic) BOOL isMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)desiredHeight;
- (void)editorDidFinish:(id)a0 withLikenessResult:(id)a1 cancelled:(BOOL)a2;
- (void)editorDidFinish:(id)a0 withLikenessResult:(id)a1 memojiMetadata:(id)a2 cancelled:(BOOL)a3;
- (void)editorDidFinish:(id)a0 withRemovedLikeness:(id)a1;
- (void)prepareEditorPresentationController;
- (void)processLikenessEditingResult:(id)a0 memojiMetadata:(id)a1;
- (id)recentLikenessesDataSource;
- (void)reloadDataWithAvatarView:(id)a0;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (void)showLikenessEditorForLikeness:(id)a0 onView:(id)a1;

@end
