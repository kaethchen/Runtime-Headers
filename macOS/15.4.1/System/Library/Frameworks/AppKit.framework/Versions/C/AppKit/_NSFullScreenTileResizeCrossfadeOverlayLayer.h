@class CALayer, _NSFullScreenTileResizeCrossfadeOverlayWindow;

@interface _NSFullScreenTileResizeCrossfadeOverlayLayer : CALayer {
    unsigned long long _tileID;
    unsigned long long _parentSpaceID;
    _NSFullScreenTileResizeCrossfadeOverlayWindow *_window;
    BOOL _active;
    CALayer *_windowContentLayer;
    BOOL _includeBorder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _tileFrame;
}

- (void)dealloc;
- (void)addWindowsWithIDs:(id)a0 lazyCapture:(BOOL)a1;
- (id)initWithTileID:(unsigned long long)a0 parentSpaceID:(unsigned long long)a1 tileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 includeBorder:(BOOL)a3 window:(id)a4;
- (void)resizeForTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setWindowContents:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tileFrame;
- (unsigned long long)tileID;

@end
