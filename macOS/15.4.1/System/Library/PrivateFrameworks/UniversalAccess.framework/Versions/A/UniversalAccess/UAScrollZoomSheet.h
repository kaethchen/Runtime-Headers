@class NSTextField, NSComboBox, NSView, NSMatrix, UAModifiersController, NSButton, NSWindow;

@interface UAScrollZoomSheet : NSObject {
    NSWindow *_sheet;
    NSButton *_doneButton;
    NSView *_scrollZoomControlsView;
    NSButton *_scrollZoomCheckbox;
    NSTextField *_modifiersLabel;
    NSComboBox *_modifiersComboBox;
    NSMatrix *_panningModeMatrix;
    NSButton *_smoothImagesCheckbox;
    BOOL _showModifiers;
    UAModifiersController *_modifiersController;
    BOOL _didAwakeFromNib;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)windowWillReturnFieldEditor:(id)a0 toObject:(id)a1;
- (void)donePressed:(id)a0;
- (void)_handlePreferencesChange:(id)a0;
- (void)_setupSheet;
- (void)_updateHotKeyInfo;
- (void)beginSheetOnWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)modifiersEditorSetHidden:(BOOL)a0;
- (void)panningModePressed:(id)a0;
- (void)scrollZoomCheckboxSetHidden:(BOOL)a0;
- (void)scrollZoomEnabledPressed:(id)a0;
- (void)smoothImagesPressed:(id)a0;

@end
