@class NSButton, AppleTextInputMenu, NSString;

@interface LUI2InputMethodViewController : LUI2ViewController <NSMenuDelegate>

@property (retain) AppleTextInputMenu *textInputMenu;
@property (retain) NSButton *textInputButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)viewDidLoad;
- (void)_buttonPressed:(id)a0;
- (id)_alternateAttributedStringFromString:(id)a0;
- (id)_attributedStringFromString:(id)a0;
- (void)_handleTIMChange:(id)a0;
- (BOOL)_shouldShowInputMenu;
- (id)_textInputMenu;

@end
