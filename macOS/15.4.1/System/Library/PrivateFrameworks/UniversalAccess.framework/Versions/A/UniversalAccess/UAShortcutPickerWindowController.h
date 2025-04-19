@class NSTextField, NSString, NSView, UAShortcutPickerViewController;

@interface UAShortcutPickerWindowController : NSWindowController <UAShortcutPickerViewControllerDelegate>

@property (weak, nonatomic) NSView *_pickerViewControllerContainerView;
@property (weak, nonatomic) NSTextField *_promptTextField;
@property (retain, nonatomic) UAShortcutPickerViewController *_pickerViewController;
@property (copy, nonatomic) NSString *_prompt;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showOnWindow:(id)a0 identifiers:(id)a1 allowsMultiple:(BOOL)a2 prompt:(id)a3 completionHandler:(id /* block */)a4;

- (void).cxx_destruct;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)_complete;
- (void)cancelButtonClicked:(id)a0;
- (id)initWithIdentifiers:(id)a0 allowsMultiple:(BOOL)a1 prompt:(id)a2;
- (void)okButtonClicked:(id)a0;
- (void)shortcutPickerViewControllerDidDoubleClick:(id)a0;

@end
