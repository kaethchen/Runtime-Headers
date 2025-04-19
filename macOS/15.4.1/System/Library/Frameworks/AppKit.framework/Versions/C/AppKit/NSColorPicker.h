@class NSImage, NSColorPanel, NSString;

@interface NSColorPicker : NSObject <NSColorPickingDefault> {
    id _imageObject;
    NSString *_buttonToolTip;
    NSColorPanel *_colorPanel;
}

@property (readonly) NSColorPanel *colorPanel;
@property (readonly) NSImage *provideNewButtonImage;
@property (readonly, copy) NSString *buttonToolTip;
@property (readonly) struct CGSize { double x0; double x1; } minContentSize;

- (void)dealloc;
- (void)setMode:(long long)a0;
- (double)_insertionOrder;
- (id)_buttonImageToolTip;
- (id)_buttonToolTip;
- (id)_getTiffImage:(id)a0 ownedBy:(id)a1;
- (id)_localizedNumberedNameWithString:(id)a0 integer:(long long)a1;
- (void)_setButtonToolTip:(id)a0;
- (void)alphaControlAddedOrRemoved:(id)a0;
- (void)attachColorList:(id)a0;
- (void)detachColorList:(id)a0;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (void)insertNewButtonImage:(id)a0 in:(id)a1;
- (void)viewSizeChanged:(id)a0;

@end
