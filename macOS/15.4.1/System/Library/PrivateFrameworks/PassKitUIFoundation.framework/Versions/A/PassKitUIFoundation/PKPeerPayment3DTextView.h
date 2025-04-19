@class NSString, SCNView, PKPeerPayment3DStore, PKPeerPayment3DScene, NSMutableArray;

@interface PKPeerPayment3DTextView : NSView {
    SCNView *_sceneView;
    PKPeerPayment3DScene *_scene;
    double _sceneWidthUnits;
    double _sceneHeightUnits;
    NSMutableArray *_performHandlers;
    double _dynamicRollPitchMix;
    double _startAnimationTime;
    double _animationDuration;
    double _lastRenderTime;
    BOOL _liveMotionEnabled;
    BOOL _willAnimate;
    BOOL _snapshotRequested;
    BOOL _usedForSnapshotting;
    unsigned long long _framesFullyRendered;
    PKPeerPayment3DStore *_3DStore;
    BOOL _layoutRequested;
    NSMutableArray *_charactersToDraw;
}

@property (readonly, nonatomic) unsigned long long renderStyle;
@property (readonly, copy, nonatomic) NSString *text;

+ (id)supportedCharacterSet;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)setText:(id)a0;
- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)renderer:(id)a0 updateAtTime:(double)a1;
- (void)layoutText;
- (void /* unknown type, empty encoding */)_fakeAnimationRollPitchWithElapsedTime:(double)a0;
- (id)generatedSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderStyle:(unsigned long long)a1 usedForSnapshotting:(BOOL)a2;
- (void)loadCharactersAndLayout;
- (void)performPostRender:(id /* block */)a0;
- (void)setMotionEffectEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSceneUnits;

@end
