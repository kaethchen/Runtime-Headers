@class NSImageView, NSTextField;

@interface ProfilesPreferencesTableCellView : NSTableCellView

@property (weak, nonatomic) NSTextField *profileNameField;
@property (weak, nonatomic) NSImageView *iconImageView;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
