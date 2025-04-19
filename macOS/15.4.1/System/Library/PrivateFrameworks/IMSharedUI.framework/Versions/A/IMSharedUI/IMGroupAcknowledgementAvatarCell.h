@class CNAvatarViewController;

@interface IMGroupAcknowledgementAvatarCell : NSCollectionViewItem

@property (retain) CNAvatarViewController *avatarViewController;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setRepresentedObject:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)_updateDisplay;
- (void)performIntroAnimationWithDelay:(double)a0;
- (void)_anonymizeContentAndContactsDidChangeNotification:(id)a0;

@end
