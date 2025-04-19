@class CALayer, NSString, NSRecursiveLock;

@interface SSCursorView : NSView <CALayerDelegate>

@property (retain, nonatomic) CALayer *cursorLayer;
@property (nonatomic) struct CGPoint { double x; double y; } cursorPosition;
@property (nonatomic) struct CGImage { } *cursorImage;
@property (nonatomic) struct CGPoint { double x; double y; } cursorHotSpot;
@property (nonatomic) double scaleFactor;
@property (nonatomic) struct CGImage { } *scaledCursorImage;
@property (nonatomic) BOOL cursorVisibility;
@property (nonatomic) BOOL observeMode;
@property (retain, nonatomic) NSRecursiveLock *cursorViewMutex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)resizeWithOldSuperviewSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)createScaledCursor;
- (void)updateCursorImage:(struct CGImage { } *)a0 hotSpot:(struct CGPoint { double x0; double x1; })a1;
- (void)updateCursorPosition:(struct CGPoint { double x0; double x1; })a0 scaleFactor:(double)a1;
- (void)updateCursorVisibility:(BOOL)a0;
- (void)updateObserveFlag:(BOOL)a0;

@end
