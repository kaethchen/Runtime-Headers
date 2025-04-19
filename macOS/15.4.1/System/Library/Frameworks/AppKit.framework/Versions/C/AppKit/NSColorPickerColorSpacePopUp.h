@class NSColorSpace;

@interface NSColorPickerColorSpacePopUp : NSPopUpButton {
    NSColorSpace *_selectedColorSpace;
    long long _selectedEntryMode;
}

@property (retain) NSColorSpace *selectedColorSpace;
@property long long selectedEntryMode;

+ (id)preferredColorSpaces;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)_colorSpaceForColorDisplaysAsGeneric:(id)a0;
- (void)_commonInitNSColorPickerColorSpacePopUp;
- (BOOL)_isShowingKeyboardFocus;
- (void)_selectColorProfile:(id)a0;
- (void)_selectEntryMode:(id)a0;
- (void)_setNeedsDisplayInRectWithFocus:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)becomeFirstResponder;
- (void)colorPanelColorDidChange:(id)a0;
- (void)doneSendingPopUpAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resignFirstResponder;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willPopUpNotification:(id)a0;

@end
