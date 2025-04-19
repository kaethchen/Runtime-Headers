@interface MusicUI.ArtworkVideoView : NSView {
    void /* unknown type, empty encoding */ statusHandler;
    void /* unknown type, empty encoding */ waitingToPlayHandler;
    void /* unknown type, empty encoding */ cropStyle;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;

@end
