@class NSDictionary, CIContext;

@interface NSGraphicsContext : NSObject

@property (class, retain) NSGraphicsContext *currentContext;

@property BOOL shouldAntialias;
@property unsigned long long imageInterpolation;
@property struct CGPoint { double x0; double x1; } patternPhase;
@property unsigned long long compositingOperation;
@property long long colorRenderingIntent;
@property (readonly) CIContext *CIContext;
@property (readonly) void *graphicsPort;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly, getter=isDrawingToScreen) BOOL drawingToScreen;
@property (readonly) struct CGContext { } *CGContext;
@property (readonly, getter=isFlipped) BOOL flipped;

+ (BOOL)isCurrentContextDrawingToScreen;
+ (id)_popGraphicsContext;
+ (void)_pushGraphicsContext:(id)a0;
+ (id)colorFactory;
+ (void)configureGraphicsContextForCALayer:(id)a0 withCGContext:(struct CGContext { } *)a1 andRenderWithHandler:(id /* block */)a2;
+ (BOOL)currentContextDrawingToScreen;
+ (id)graphicsContextWithAttributes:(id)a0;
+ (id)graphicsContextWithBitmapImageRep:(id)a0;
+ (id)graphicsContextWithCGContext:(struct CGContext { } *)a0 flipped:(BOOL)a1;
+ (id)graphicsContextWithCGContext:(struct CGContext { } *)a0 forCALayer:(id)a1;
+ (id)graphicsContextWithGraphicsPort:(void *)a0 flipped:(BOOL)a1;
+ (id)graphicsContextWithWindow:(id)a0;
+ (void)restoreGraphicsState;
+ (void)saveGraphicsState;
+ (void)setGraphicsState:(long long)a0;

- (unsigned int)contextID;
- (id)CALayer;
- (void)_releaseCIContext;
- (id)colorFactory;
- (void)flushGraphics;
- (id)focusStack;
- (void)restoreGraphicsState;
- (void)saveGraphicsState;
- (void)setFocusStack:(id)a0;

@end
