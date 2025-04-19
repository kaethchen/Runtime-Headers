@class NSTextField, NSString, StartPagePopoverViewController, StartPagePopoverTogglesDataSource, NSButton;

@interface ToggleRowItem : NSCollectionViewItem {
    NSTextField *_label;
}

@property (weak, nonatomic) StartPagePopoverViewController *startPagePopoverViewController;
@property (readonly, nonatomic) NSButton *toggle;
@property (nonatomic) BOOL dragging;
@property (weak, nonatomic) StartPagePopoverTogglesDataSource *data;
@property (copy, nonatomic) NSString *profileIdentifier;

- (void).cxx_destruct;
- (void)setLabel:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)accessibilityValue;
- (void)loadView;
- (void)mouseUp:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)_handleMouseUpEvent;
- (void)_toggleSwitch:(id)a0;
- (void)configureRow:(id)a0 imageView:(id)a1 label:(id)a2;

@end
