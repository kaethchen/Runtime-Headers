@class NSView;

@interface NSCMYKSliders : NSColorSpaceSliders {
    id cyanSlider;
    id yellowSlider;
    id magentaSlider;
    id blackSlider;
    id cyanText;
    id yellowText;
    id magentaText;
    id blackText;
}

@property (retain) NSView *cmykView;

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
