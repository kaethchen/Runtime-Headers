@class NSArray, NSImage, CNAvatarViewController, CNBadgeViewController;

@interface CNBadgingAvatarViewController : NSViewController

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CNBadgeViewController *badgeViewController;
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSImage *badgeImage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)commonInit;
- (void)loadView;
- (id)descriptorForRequiredKeys;
- (void)setupViewHierarchy;

@end
