@class NSImageView, NSVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : NSView {
    NSImageView *_musicNoteView;
    NSImageView *_spinnerView;
    NSVisualEffectView *_vibrancyView;
}

@property (weak, nonatomic) id<SiriUIAcousticIDSpinnerDelegate> delegate;

- (void).cxx_destruct;
- (void)layout;
- (void)animateIn;
- (void)animateOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isShowing;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_imageForSpinner;
- (id)_spinningAnimation;

@end
