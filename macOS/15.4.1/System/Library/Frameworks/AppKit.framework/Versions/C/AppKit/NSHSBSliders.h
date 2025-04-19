@class NSView, NSColor;

@interface NSHSBSliders : NSColorSpaceSliders {
    id hueSlider;
    id saturationSlider;
    id brightnessSlider;
    id hueText;
    id saturationText;
    id brightnessText;
    NSColor *currColor;
    NSColor *backgroundColor;
    id sliderMatrix;
}

@property (retain) NSView *hsbView;

+ (id)genericColorSpace;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })requiredMinSize;
- (void)adjustControls:(id)a0;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (id)fieldEditableControl;
- (id)provideNewSubview:(id)a0;
- (id)regularColorIfPossible:(id)a0;
- (void)setMatchedColor:(id)a0;
- (void)viewSizeChanged:(id)a0;
- (BOOL)worksWhenModal;

@end
