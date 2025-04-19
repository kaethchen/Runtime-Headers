@class NSLayoutConstraint, NSImageView, NSTextField;
@protocol AccountManagerListCellViewDelegate;

@interface AccountManagerListCellView : NSTableCellView

@property (weak, nonatomic) NSTextField *usernameField;
@property (weak, nonatomic) NSTextField *issueTypesField;
@property (weak, nonatomic) NSImageView *warningImageView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingSpaceToSuperview;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTrailingSpaceToSuperview;
@property (weak, nonatomic) id<AccountManagerListCellViewDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidMoveToWindow;

@end
