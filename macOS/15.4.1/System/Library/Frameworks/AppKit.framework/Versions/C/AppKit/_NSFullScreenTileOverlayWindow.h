@class CALayer, NSArray;

@interface _NSFullScreenTileOverlayWindow : NSPanel {
    BOOL _ignoreEvents;
    BOOL _applyBlur;
    CALayer *_rootLayer;
    NSArray *_tileLayers;
    BOOL _beginningPresentation;
    BOOL _endingPresentation;
    BOOL _presented;
}

@property id target;
@property SEL action;
@property BOOL applyBlur;
@property BOOL useLiveTileRect;

- (void)dealloc;
- (void)addAuxiliaryView:(id)a0 alignedTileID:(unsigned long long)a1;
- (BOOL)_ignoreForFullScreenTransition;
- (void)_setWindowTag;
- (void)applyPresentationFiltersWithCompletionHandler:(id /* block */)a0;
- (void)beginPresentationWithCompletionHandler:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)endPresentationWithCompletionHandler:(id /* block */)a0;
- (id)initWithActiveTileID:(unsigned long long)a0 coverTileID:(unsigned long long)a1 coveredWindowTileFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 parentSpaceID:(unsigned long long)a3 ignoreEvents:(BOOL)a4 screen:(id)a5 joinTileID:(unsigned long long)a6;
- (void)sendEvent:(id)a0;
- (void)updateOverlay;

@end
