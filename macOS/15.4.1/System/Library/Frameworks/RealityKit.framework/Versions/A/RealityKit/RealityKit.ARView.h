@class NSArray;

@interface RealityKit.ARView : NSView {
    void /* unknown type, empty encoding */ _lastHitEntityForGestures;
    void /* unknown type, empty encoding */ _scene;
    void /* unknown type, empty encoding */ __delegatePrivate;
    void /* unknown type, empty encoding */ debugOptions;
    void /* unknown type, empty encoding */ initialized;
    void /* unknown type, empty encoding */ engineStartedByThisView;
    void /* unknown type, empty encoding */ currentIBL;
    void /* unknown type, empty encoding */ _enableGroundingShadowsByDefault;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ __environmentEntity;
    void /* unknown type, empty encoding */ __enableAutomaticFrameRate;
    void /* unknown type, empty encoding */ __preferredFrameRate;
    void /* unknown type, empty encoding */ backingLayer;
    void /* unknown type, empty encoding */ useCAMetalLayer;
    void /* unknown type, empty encoding */ pauseEngineOnLeaveForeground;
    void /* unknown type, empty encoding */ extendedDynamicRangeOutput;
    void /* unknown type, empty encoding */ edrHeadroomPolicy;
    void /* unknown type, empty encoding */ __renderGraphEmitter;
    void /* unknown type, empty encoding */ __forceLocalizedProbes;
    void /* unknown type, empty encoding */ __parallaxBackgroundProbe;
    void /* unknown type, empty encoding */ layerHandle;
    void /* unknown type, empty encoding */ updateSubscription;
    void /* unknown type, empty encoding */ renderSubscription;
    void /* unknown type, empty encoding */ realityFusionSession;
    void /* unknown type, empty encoding */ __disableComposition;
    void /* unknown type, empty encoding */ __nonARKitDevices;
    void /* unknown type, empty encoding */ enablePresentsWithTransaction;
    void /* unknown type, empty encoding */ presentsWithTransactionFrames;
    void /* unknown type, empty encoding */ antialiasingMode;
    void /* unknown type, empty encoding */ __statisticsOptions;
    void /* unknown type, empty encoding */ __disableStatisticsRendering;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, readonly) NSArray *entityAccessibilityWrappers;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (id)makeBackingLayer;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToSuperview;
- (void)didBecomeActiveWithNotification:(id)a0;
- (float)distanceInMetersFromEntityAccessibilityWrapper:(id)a0;
- (BOOL)handleTapForEntityAccessibilityWrapper:(id)a0;
- (void)resizeWithNotification:(id)a0;
- (void)willResignActiveWithNotification:(id)a0;

@end
