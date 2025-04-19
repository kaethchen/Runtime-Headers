@interface NSColorPickerPencils : NSColorPicker <NSColorPickingCustom>

@property (retain) id colorNameTextField;
@property (retain) id containerView;
@property (retain) id pencilView;

- (void)dealloc;
- (long long)currentMode;
- (void)setColor:(id)a0;
- (id)provideNewView:(BOOL)a0;
- (double)_insertionOrder;
- (id)buttonToolTip;
- (void)changeColor:(id)a0;
- (void)changeDisplayedColorName:(id)a0;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (struct CGSize { double x0; double x1; })minContentSize;
- (id)provideNewButtonImage;
- (BOOL)supportsMode:(long long)a0;

@end
