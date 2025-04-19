@protocol CATiledLayerDelegate, CALayerDelegate;

@interface CATiledLayer : CALayer

@property struct CGColor { } *fillColor;
@property double maximumTileScale;
@property (getter=isDrawingEnabled) BOOL drawingEnabled;
@property (weak) id<CATiledLayerDelegate, CALayerDelegate> delegate;
@property unsigned long long levelsOfDetail;
@property unsigned long long levelsOfDetailBias;
@property struct CGSize { double x0; double x1; } tileSize;

+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (unsigned int)prefetchedTiles;
+ (double)fadeDuration;
+ (BOOL)shouldDrawOnMainThread;

- (void)dealloc;
- (void)didChangeValueForKey:(id)a0;
- (void)_dealloc;
- (void)_display;
- (void)setContents:(id)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canDisplayConcurrently;
- (void)_colorSpaceDidChange;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1;
- (void)displayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1 options:(id)a2;
- (void)invalidateContents;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 levelOfDetail:(int)a1 options:(id)a2;
- (void)setUnsafeUnretainedDelegate:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;

@end
