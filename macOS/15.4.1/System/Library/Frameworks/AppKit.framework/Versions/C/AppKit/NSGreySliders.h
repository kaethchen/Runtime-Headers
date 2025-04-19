@class NSView;

@interface NSGreySliders : NSColorSpaceSliders {
    id greySlider;
    id greyText;
    id greyButtons[5];
    id opacityButtons;
    double opacityDistanceFromBottom;
    BOOL alphaButtonsAreHidden;
}

@property (retain) NSView *greyView;
@property id greyButton0;
@property id greyButton1;
@property id greyButton2;
@property id greyButton3;
@property id greyButton4;

+ (id)genericColorSpace;

- (void)dealloc;
- (void)setGreyButton5:(id)a0;
- (void)adjustControls:(id)a0;
- (void)_adjustControls:(id)a0 andSetColor:(BOOL)a1;
- (void)_configureGreyButton:(id)a0 index:(long long)a1;
- (id)fieldEditableControl;
- (void)jumpSlider:(id)a0;
- (id)provideNewSubview:(id)a0;
- (id)regularColorIfPossible:(id)a0;
- (void)setMatchedColor:(id)a0;
- (BOOL)worksWhenModal;

@end
