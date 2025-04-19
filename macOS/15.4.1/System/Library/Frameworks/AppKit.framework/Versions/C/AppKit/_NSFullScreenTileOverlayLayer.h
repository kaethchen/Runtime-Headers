@class NSView, CALayer, NSMutableArray, _NSFullScreenTileOverlayWindow;

@interface _NSFullScreenTileOverlayLayer : CALayer {
    unsigned long long _tileID;
    unsigned long long _parentSpaceID;
    _NSFullScreenTileOverlayWindow *_window;
    BOOL _active;
    NSMutableArray *_windowLayers;
    CALayer *_windowContentLayer;
    unsigned long long _dividerDirections;
    CALayer *_eastDivider;
    CALayer *_westDivider;
}

@property NSView *auxiliaryView;

- (void)dealloc;
- (void)endPresentation;
- (void)addWindowWithID:(unsigned int)a0;
- (void)applyPresentationFilters:(BOOL)a0;
- (id)initWithTileID:(unsigned long long)a0 parentSpaceID:(unsigned long long)a1 coveredWindowTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 window:(id)a3 tileDividerDirections:(unsigned long long)a4;
- (void)positionAuxiliaryView;
- (unsigned long long)tileID;
- (void)updateFrame;
- (void)updateFrameUsingCoveredWindowTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
