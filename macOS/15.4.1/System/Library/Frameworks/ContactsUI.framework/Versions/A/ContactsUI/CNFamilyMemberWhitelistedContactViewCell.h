@class NSImageView, NSTextField, CNContactCardViewController, CNUICoreFamilyMemberContactItem, NSLayoutConstraint, NSButton, NSPopover;
@protocol CNFamilyMemberWhitelistedContactViewCellDelegate;

@interface CNFamilyMemberWhitelistedContactViewCell : NSTableCellView <CNFamilyMemberEditControlsViewControllerDelegate>

@property (readonly, nonatomic) NSTextField *label;
@property (readonly, nonatomic) NSTextField *detailLabel;
@property (readonly, nonatomic) NSTextField *warningLabel;
@property (readonly, nonatomic) NSImageView *warningImageView;
@property (readonly, nonatomic) NSButton *discosureButton;
@property (readonly, nonatomic) NSLayoutConstraint *detailLabelCenterXConstraint;
@property (retain, nonatomic) NSPopover *discosurePopover;
@property (retain, nonatomic) CNContactCardViewController *contactViewController;
@property (retain, nonatomic) CNUICoreFamilyMemberContactItem *item;
@property (retain, nonatomic) id<CNFamilyMemberWhitelistedContactViewCellDelegate> delegate;

+ (id)labelForContactType:(long long)a0;
+ (id)localizedStringForString:(id)a0;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closePopover;
- (void)didPressCancelFamilyMemberEditControlsViewController:(id)a0;
- (void)didPressDoneFamilyMemberEditControlsViewController:(id)a0;
- (void)didPressEditFamilyMemberEditControlsViewController:(id)a0;
- (void)discosurePressed:(id)a0;
- (void)presentContactViewController:(id)a0;
- (void)setupConstraints;
- (void)setupDetailLabel;
- (void)setupDiscosureButton;
- (void)setupLabel;
- (void)setupViewHierarchy;
- (void)setupWarningImageView;
- (void)setupWarningLabel;

@end
