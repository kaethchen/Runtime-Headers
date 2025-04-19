@class CNAvatarViewController, NSString, CNContact;

@interface CNContactAvatarViewController : NSViewController <NSGestureRecognizerDelegate, CNContactCardWidget>

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (nonatomic) BOOL didCreateConstraints;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)mouseUp:(id)a0;
- (void)viewDidLoad;
- (void)createConstraints;
- (void)setAllowsEditing:(BOOL)a0;
- (void)setLikeness:(id)a0;
- (void)beginEditingContactImage;
- (void)clearContactImage;
- (double)customSpacingAfterWidget;
- (double)desiredHeight;
- (void)setPropertyKeysToDisplay:(id)a0;
- (void)setStyleProvider:(id)a0;
- (BOOL)shouldBeIncludedInKeyViewLoop;

@end
