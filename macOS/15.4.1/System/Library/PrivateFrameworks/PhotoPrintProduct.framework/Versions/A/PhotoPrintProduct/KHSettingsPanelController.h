@class NSButton, NSPopover, UXView;

@interface KHSettingsPanelController : UXViewController

@property (retain) NSButton *okButton;
@property (retain) NSButton *cancelButton;
@property (weak, nonatomic) UXView *settingsView;
@property (retain) NSPopover *popover;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
