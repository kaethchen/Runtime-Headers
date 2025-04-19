@interface MusicUI.TrackArtworkView : NSView {
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ trackNumber;
    void /* unknown type, empty encoding */ accessorySocialProfileContentDescriptor;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ shouldUsePlaceholderAsFallback;
    void /* unknown type, empty encoding */ artworkLayoutStyle;
    void /* unknown type, empty encoding */ isDisabled;
    void /* unknown type, empty encoding */ trackPlaybackState;
    void /* unknown type, empty encoding */ playActionHandler;
    void /* unknown type, empty encoding */ pauseActionHandler;
    void /* unknown type, empty encoding */ resumeActionHandler;
    void /* unknown type, empty encoding */ hasEqualizerBars;
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ imageCatalog;
    void /* unknown type, empty encoding */ idealImageSize;
    void /* unknown type, empty encoding */ artworkInsets;
    void /* unknown type, empty encoding */ cornerTreatment;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ nowPlayingActivityIndicator;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_socialProfileView;
    void /* unknown type, empty encoding */ trackNumberLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playPauseButton;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)drawFocusRingMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
