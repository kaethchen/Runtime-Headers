@class NSBox, NSView, NSProgressIndicator, NSWindow, NSLayoutConstraint, NSImageView, NSButton, NSTextFieldCell;

@interface AOSUICloudDriveViewController : NSViewController

@property (weak) NSButton *doneButton;
@property (weak) NSImageView *iCloudDriveLogoImageView;
@property (weak) NSTextFieldCell *iCloudDriveLabel;
@property (weak) NSTextFieldCell *iCloudDriveDescriptionLabel;
@property (weak) NSTextFieldCell *appsSyncingLabel;
@property (weak) NSTextFieldCell *appsSyncingDescriptionLabel;
@property (weak) NSTextFieldCell *statusLabel;
@property (weak) NSButton *switchButton;
@property (weak) NSButton *optionsButton;
@property (weak) NSBox *appSyncingPane;
@property (weak) NSView *grayOverlay;
@property (weak) NSProgressIndicator *spinner;
@property (weak) NSLayoutConstraint *doneButtonTopConstraint;
@property (retain, nonatomic) NSWindow *modalWindow;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) double appSyncingPaneHeight;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)doneButtonPressed:(id)a0;
- (void)_dismiss;
- (id)_setupWindowWithContentViewController:(id)a0 driveEnabled:(BOOL)a1;
- (void)optionsButtonPressed:(id)a0;
- (void)presentICloudDriveOptions:(id)a0 driveEnabled:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)showSpinner:(BOOL)a0;
- (void)switchButtonPressed:(id)a0;

@end
