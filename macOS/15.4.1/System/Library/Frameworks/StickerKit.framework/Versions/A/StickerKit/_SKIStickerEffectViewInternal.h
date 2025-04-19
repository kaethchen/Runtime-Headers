@class NSString;

@interface _SKIStickerEffectViewInternal : NSView {
    void /* unknown type, empty encoding */ isTargetDebugStickerView;
    void /* unknown type, empty encoding */ instanceLabel;
    void /* unknown type, empty encoding */ device;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ metalLayerContainer;
    void /* unknown type, empty encoding */ needsRender;
    void /* unknown type, empty encoding */ renderInProgress;
    void /* unknown type, empty encoding */ currentDrawable;
    void /* unknown type, empty encoding */ requiredScale;
    void /* unknown type, empty encoding */ appliedScale;
    void /* unknown type, empty encoding */ strokeScale;
    void /* unknown type, empty encoding */ renderQueue;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ instanceNumber;
    void /* unknown type, empty encoding */ displayLinkActive;
    void /* unknown type, empty encoding */ motionActive;
    void /* unknown type, empty encoding */ deviceOrientation;
    void /* unknown type, empty encoding */ settlingDuration1;
    void /* unknown type, empty encoding */ settlingDuration2;
    void /* unknown type, empty encoding */ settlingStartAngle;
    void /* unknown type, empty encoding */ settlingEndAngle;
    void /* unknown type, empty encoding */ settlingStartTime;
    void /* unknown type, empty encoding */ settlingOrientation;
    void /* unknown type, empty encoding */ screenCenterDuration;
    void /* unknown type, empty encoding */ unitScreenCenter;
    void /* unknown type, empty encoding */ displayHandler;
}

@property (nonatomic) BOOL wantsLayer;
@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic) void /* unknown type, empty encoding */ boundsIncludeStroke;
@property (nonatomic) void /* unknown type, empty encoding */ reRenderOnMotion;
@property (nonatomic) void /* unknown type, empty encoding */ curlPosition;
@property (nonatomic, retain) void /* unknown type, empty encoding */ effect;
@property (nonatomic, retain) void /* unknown type, empty encoding */ image;
@property (nonatomic) void /* unknown type, empty encoding */ isPaused;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

+ (void)resetRestingOrientation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidMoveToWindow;
- (void)snapshotWithCompletionHandler:(id /* block */)a0;
- (void)_internalUpdateFromDisplayLink:(id)a0;
- (void)configureWithImage:(id)a0 effect:(id)a1 didDisplayHandler:(id /* block */)a2;
- (void)playSettlingAnimation;

@end
