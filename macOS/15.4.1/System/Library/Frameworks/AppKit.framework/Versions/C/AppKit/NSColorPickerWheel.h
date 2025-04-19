@class NSView;

@interface NSColorPickerWheel : NSColorPicker <NSColorPickingCustom> {
    id wheelView;
    id brightnessSlider;
    BOOL previouslyTracking;
}

@property (retain) NSView *containerView;

- (void)dealloc;
- (long long)currentMode;
- (void)setColor:(id)a0;
- (id)provideNewView:(BOOL)a0;
- (double)_insertionOrder;
- (void)brightnessSlider:(id)a0;
- (id)buttonToolTip;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (BOOL)supportsMode:(long long)a0;
- (void)viewSizeChanged:(id)a0;
- (BOOL)worksWhenModal;

@end
