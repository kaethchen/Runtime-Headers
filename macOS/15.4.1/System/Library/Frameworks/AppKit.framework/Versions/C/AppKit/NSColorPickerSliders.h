@class NSView, NSColorSpaceSliders;

@interface NSColorPickerSliders : NSColorPicker <NSColorPickingCustom> {
    id sliderModePopUp;
    id currViewObject;
    id sliderContainer;
    id colorProfileButton;
    long long modeMask;
}

@property (retain) NSView *slidersView;
@property (retain) NSColorSpaceSliders *greySliders;
@property (retain) NSColorSpaceSliders *rgbSliders;
@property (retain) NSColorSpaceSliders *hsbSliders;
@property (retain) NSColorSpaceSliders *cmykSliders;

- (void)dealloc;
- (long long)currentMode;
- (void)setMode:(long long)a0;
- (void)setColor:(id)a0;
- (id)provideNewView:(BOOL)a0;
- (double)_insertionOrder;
- (void)_adjustToMode;
- (void)_redisplayColorProfileButtonIfNeeded;
- (void)_removePopUpWithTag:(long long)a0;
- (void)_restoreMode;
- (void)_saveMode;
- (long long)_savedMode;
- (void)_selectPopUpWithTag:(long long)a0;
- (void)alphaControlAddedOrRemoved:(id)a0;
- (id)buttonToolTip;
- (void)forceSetMode:(long long)a0;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (void)replaceSubviewWith:(id)a0;
- (void)showCMYKView:(id)a0;
- (void)showGreyScaleView:(id)a0;
- (void)showHSBView:(id)a0;
- (void)showRGBView:(id)a0;
- (BOOL)supportsMode:(long long)a0;
- (void)takeColorSpaceFrom:(id)a0;
- (BOOL)worksWhenModal;

@end
