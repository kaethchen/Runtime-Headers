@class KHFrame, NSArray, KHTextView, NSString, NSPopUpButton, NSComboBox, NSButton;

@interface KHFontPickerController : UXViewController <NSComboBoxDelegate>

@property (retain) NSPopUpButton *fontMenuButton;
@property (retain) NSPopUpButton *fontFaceButton;
@property (retain) NSComboBox *fontSizeButton;
@property (retain) NSButton *colorButton;
@property (retain) KHFrame *frame;
@property (retain) NSArray *fontList;
@property (retain) KHTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)comboBoxSelectionDidChange:(id)a0;
- (BOOL)control:(id)a0 textShouldEndEditing:(id)a1;
- (id)initWithTextView:(id)a0;
- (void)loadView;
- (void)updateControls;
- (void)addMenuItemForFontFamily:(id)a0 toMenu:(id)a1;
- (id)attributedStringForFontFamily:(id)a0;
- (void)fontMenuButtonClicked:(id)a0;
- (id)headerItemWithTitle:(id)a0;
- (void)itemChosen:(id)a0;

@end
