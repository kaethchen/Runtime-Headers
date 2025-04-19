@interface MusicUI.TrackNowPlayingIndicatorView : NSView {
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ levelColor;
    void /* unknown type, empty encoding */ levelWidth;
    void /* unknown type, empty encoding */ maximumLevelHeight;
    void /* unknown type, empty encoding */ levelViews;
    void /* unknown type, empty encoding */ interLevelSpacing;
    void /* unknown type, empty encoding */ levelCornerRadius;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
