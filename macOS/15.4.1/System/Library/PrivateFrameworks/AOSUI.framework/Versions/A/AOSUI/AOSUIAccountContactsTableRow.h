@class AOSUICircularImageView, NSButton, NSTextField;

@interface AOSUIAccountContactsTableRow : NSTableRowView

@property (weak) NSTextField *nameLabel;
@property (weak) NSTextField *contactDetailLabel;
@property (weak) AOSUICircularImageView *profileImageView;
@property (weak) NSButton *detailsButton;

+ (id)createFromNib;

- (void).cxx_destruct;
- (void)configureWithTitle:(id)a0 detailText:(id)a1 imageData:(id)a2;

@end
