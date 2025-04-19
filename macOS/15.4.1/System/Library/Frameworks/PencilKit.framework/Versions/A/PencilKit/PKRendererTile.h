@class NSUUID, PKMetalFramebuffer, NSArray, PKRendererTileProperties, CALayer;

@interface PKRendererTile : NSObject <NSCopying> {
    _Atomic double _cachedContentsScale;
    _Atomic long long _renderCount;
    _Atomic double _lastUsedTimestamp;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _drawingTransform;
    BOOL _framebufferIsLocked;
    BOOL _multiplyFramebufferIsLocked;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } framebufferSize;
@property (readonly, nonatomic) BOOL sixChannelMode;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } offset;
@property (readonly, nonatomic) PKRendererTileProperties *properties;
@property (readonly, nonatomic) double drawingContentsScale;
@property (readonly, nonatomic) PKMetalFramebuffer *framebuffer;
@property (readonly, nonatomic) PKMetalFramebuffer *multiplyFramebuffer;
@property (readonly, nonatomic) double lastUsedTimestamp;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawingFrame;
@property (copy) NSArray *renderedStrokes;
@property BOOL outOfDate;
@property (readonly) long long renderCount;
@property (nonatomic) long long currentlyRenderingCount;
@property (readonly, nonatomic) CALayer *tileLayer;
@property (readonly, nonatomic) CALayer *tileMultiplyLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double contentsScale;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) double opacity;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingFrameForLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 contentScale:(double)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameForLevel:(long long)a0 offset:(struct CGPoint { double x0; double x1; })a1;
+ (double)tileSizeForLevel:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)purgeTileLayers;
- (BOOL)_lockAndSetMultiplyFramebuffer:(id)a0;
- (void)_clearFramebuffers;
- (BOOL)_lockAndSetFramebuffer:(id)a0;
- (void)clearFramebuffersThreadSafe;
- (BOOL)framebuffersArePurged;
- (id)initWithLevel:(long long)a0 offset:(struct CGPoint { double x0; double x1; })a1 drawingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 contentsScale:(double)a3 sixChannelMode:(BOOL)a4;
- (BOOL)lockAndSetFramebufferThreadSafe:(id)a0;
- (BOOL)lockAndSetMultiplyFramebufferThreadSafe:(id)a0;
- (BOOL)recreatePurgedTileLayersIfPossible;
- (void)showDebugLayer;
- (void)updateDisableTransactionActions:(BOOL)a0 reloadContents:(BOOL)a1;
- (void)updateFrameForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)updateLastUsedTimestamp;

@end
