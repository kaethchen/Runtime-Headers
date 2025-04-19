@interface VFX.VFXCoreView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ renderOutput;
    void /* unknown type, empty encoding */ metalLayer;
    void /* unknown type, empty encoding */ sampleCount;
    void /* unknown type, empty encoding */ preferredFramesPerSecond;
    void /* unknown type, empty encoding */ scaleFactor;
    void /* unknown type, empty encoding */ postRenderCallback;
    void /* unknown type, empty encoding */ entityManager;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ stereoMode;
    void /* unknown type, empty encoding */ paused;
    void /* unknown type, empty encoding */ effectID;
    void /* unknown type, empty encoding */ sizeDirty;
    void /* unknown type, empty encoding */ drawableSize;
    void /* unknown type, empty encoding */ resizingMode;
    void /* unknown type, empty encoding */ backgroundColor;
}

@property (nonatomic) BOOL hidden;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isHidden;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_windowWillClose:(id)a0;
- (void)flagsChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;

@end
