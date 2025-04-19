@class NSTrackingArea, NSArray, AVDesktopVolumeSlider, NSView, NSVisualEffectView, NSButton, NSWindow;
@protocol AVVolumeControlButtonDelegate;

@interface AVVolumeControlButton : AVVolumeControlView <AVAuxiliaryControlsViewItem, AVKeyViewLoopParticipant> {
    NSTrackingArea *_trackingArea;
    NSArray *_activeVolumeSliderConstraints;
    BOOL _included;
    BOOL _showsVolumeSliderForFullKeyboardAccess;
}

@property (readonly, nonatomic) NSButton *volumeButton;
@property (readonly, nonatomic) AVDesktopVolumeSlider *volumeSlider;
@property (readonly, nonatomic) NSWindow *sliderWindow;
@property (readonly, nonatomic) NSView *sliderView;
@property (readonly, nonatomic) NSVisualEffectView *sliderViewVisualEffectView;
@property (nonatomic) BOOL showsVolumeSliderForFullKeyboardAccess;
@property (weak) id<AVVolumeControlButtonDelegate> delegate;
@property (nonatomic) BOOL included;
@property (nonatomic) BOOL canOnlyAppearInOverflowMenu;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;

+ (id)_lowVolumeImage;
+ (id)_minVolumeImage;
+ (id)_highVolumeImage;
+ (id)_mediumVolumeImage;
+ (id)_mutedImage;

- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (double)firstBaselineOffsetFromTop;
- (id)firstKeyView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;
- (double)lastBaselineOffsetFromBottom;
- (void)mouseEntered:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVolume:(double)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)setMuted:(BOOL)a0;
- (void)_hideVolumeSliderIfNeeded;
- (BOOL)_mouseIsOverView:(id)a0;
- (void)_setUpVolumeButtonIfNeeded;
- (void)_setUpVolumeSliderViewIfNeeded;
- (void)_showVolumeSliderIfNeeded;
- (BOOL)_showVolumeSliderInContainerViewIfPossible:(id)a0;
- (void)_showVolumeSliderInWindow;
- (void)_updateVolumeImageIfNeeded;
- (void)_updateVolumeSliderIfNeeded;
- (void)_volumeButtonPressed:(id)a0;
- (void)_volumeSliderChanged:(id)a0;
- (void)setUpKeyViewLoopWithNextKeyView:(id)a0;
- (void)updateSliderPositionIfNeeded;
- (void)updateVolumeSliderVisibilityStateIfNeeded;

@end
