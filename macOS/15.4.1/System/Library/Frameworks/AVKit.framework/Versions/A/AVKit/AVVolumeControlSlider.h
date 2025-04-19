@class NSLayoutAnchor, NSSlider, NSButton, AVScrollSliderView;

@interface AVVolumeControlSlider : AVVolumeControlView <AVKeyViewLoopParticipant> {
    BOOL _viewHasBeenSetup;
    NSLayoutAnchor *_baselineAnchor;
}

@property (readonly, nonatomic) AVScrollSliderView *volumeControlsContainerView;
@property (readonly, nonatomic) NSButton *volumeButton;
@property (readonly, nonatomic) NSSlider *volumeSlider;

+ (id)_lowVolumeImage;
+ (id)_minVolumeImage;
+ (id)_highVolumeImage;
+ (id)_mediumVolumeImage;
+ (id)_mutedImage;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)firstKeyView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setVolume:(double)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setMuted:(BOOL)a0;
- (void)_setupConstraints;
- (void)_maxVolumeButtonPressed:(id)a0;
- (void)_setupViewIfNeeded;
- (void)_updateVolumeButtonImageIfNeeded;
- (void)_updateVolumeSliderIfNeeded;
- (void)_volumeButtonPressed:(id)a0;
- (void)_volumeSliderChanged:(id)a0;
- (void)setUpKeyViewLoopWithNextKeyView:(id)a0;

@end
