@class NUMediaView;
@protocol PXPortraitFocusViewDelegate;

@interface PXPortraitFocusView : UXView

@property (readonly, nonatomic) NUMediaView *mediaView;
@property (weak, nonatomic) id<PXPortraitFocusViewDelegate> focusViewDelegate;

- (void).cxx_destruct;
- (void)animateNextRender;
- (void)focusPointChanged:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithMediaView:(id)a0 isHDR:(BOOL)a1;

@end
