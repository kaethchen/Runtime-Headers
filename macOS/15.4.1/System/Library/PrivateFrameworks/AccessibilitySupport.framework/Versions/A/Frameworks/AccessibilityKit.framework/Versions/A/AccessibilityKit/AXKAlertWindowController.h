@class NSTextField, NSString, _AXKAlertImageView, NSStackView, NSButton;

@interface AXKAlertWindowController : NSWindowController

@property (weak, nonatomic) NSStackView *_stackView;
@property (weak, nonatomic) _AXKAlertImageView *_iconImage;
@property (weak, nonatomic) NSButton *_confirmButton;
@property (weak, nonatomic) NSButton *_cancelButton;
@property (weak, nonatomic) NSButton *_suppressionCheckbox;
@property (weak, nonatomic) NSTextField *_titleTextView;
@property (weak, nonatomic) NSTextField *_subtitleTextView;
@property (copy, nonatomic) NSString *_confirmButtonText;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (nonatomic) BOOL confirmButtonVisible;
@property (nonatomic) BOOL cancelButtonVisible;
@property (nonatomic) BOOL suppressionButtonVisible;
@property (copy, nonatomic) id /* block */ isEventAllowedToActivate;

- (id)init;
- (void).cxx_destruct;
- (void)windowDidLoad;
- (void)_buttonPressed:(long long)a0;
- (void)_updateViewVisibility;
- (id)_allButtons;
- (void)pressCancel:(id)a0;
- (void)pressOK:(id)a0;

@end
