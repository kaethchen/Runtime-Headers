@class ImageViewWithConfigurableVibrancy;
@protocol VibrancyTransitioningImageViewDelegate;

@interface VibrancyTransitioningImageView : NSView {
    ImageViewWithConfigurableVibrancy *_currentImageView;
    ImageViewWithConfigurableVibrancy *_nextImageView;
    long long _numberOfAnimations;
}

@property (copy, nonatomic) id /* block */ imageViewConfigurationBlock;
@property (weak, nonatomic) id<VibrancyTransitioningImageViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (id)_createImageView;
- (void)setAnimations:(id)a0;
- (void)_installImageView:(id)a0;
- (void)_performSnapshotCrossFadeWithFinalOpacity:(double)a0 animationDuration:(double)a1;
- (void)_setUpNextImageViewWithImage:(id)a0 vibrancy:(BOOL)a1;
- (void)_showNextImageViewWithFinalOpacity:(double)a0;
- (void)_showNextImageViewWithFinalOpacity:(double)a0 animationDuration:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;
- (void)setImage:(id)a0 withVibrancy:(BOOL)a1 opacity:(double)a2;
- (void)setImage:(id)a0 withVibrancy:(BOOL)a1 opacity:(double)a2 animationDuration:(double)a3;

@end
