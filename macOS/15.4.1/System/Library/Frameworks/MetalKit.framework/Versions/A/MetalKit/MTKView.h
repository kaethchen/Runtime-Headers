@class MTLRenderPassDescriptor, NSString, CAMetalLayer, NSObject, MTKOffscreenDrawable;
@protocol MTKViewDelegate, MTLDevice, MTLTexture, OS_dispatch_source, CAMetalDrawable;

@interface MTKView : NSView <NSCoding, CALayerDelegate> {
    CAMetalLayer *_metalLayer;
    long long _frameInterval;
    BOOL _sizeDirty;
    struct CGSize { double width; double height; } _drawableScaleFactor;
    struct __CVDisplayLink { } *_displayLink;
    unsigned long long _currentInterval;
    NSObject<OS_dispatch_source> *_displaySource;
    void /* function */ *_drawRectSubIMP;
    BOOL _subClassOverridesDrawRect;
    BOOL _deviceReset;
    BOOL _doesNotifyOnRecommendedSizeUpdate;
    id<MTLTexture> _depthStencilTexture;
    id<MTLTexture> _multisampleColorTexture;
    BOOL _framebufferOnly;
    unsigned long long _depthStencilTextureUsage;
    unsigned long long _multisampleColorTextureUsage;
    unsigned long long _depthStencilStorageMode;
    unsigned long long _drawableAttachmentIndex;
    long long _nominalFramesPerSecond;
    long long _maxValidAttachmentIndex;
    unsigned long long _colorPixelFormats[8];
    id<MTLTexture> _multisampleColorTextures[8];
    id<MTLTexture> _colorTextures[8];
    MTKOffscreenDrawable *_offscreenSwapChain[3];
    unsigned long long _drawableIdx;
    int _renderAttachmentDirtyState;
    unsigned long long _terminateAfterFrame;
    unsigned long long _terminateAfterSeconds;
    unsigned long long _measureAfterFrame;
    unsigned long long _measureAfterSeconds;
    unsigned long long _dumpFrameAtFrame;
    unsigned long long _dumpFrameAtSeconds;
    NSString *_dumpPath;
    BOOL _dumpFirstFrame;
    BOOL _drawOffscreen;
    double _startTime;
    unsigned int _frameNum;
}

@property (weak, nonatomic) id<MTKViewDelegate> delegate;
@property (retain, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<CAMetalDrawable> currentDrawable;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) unsigned long long depthStencilAttachmentTextureUsage;
@property (nonatomic) unsigned long long multisampleColorAttachmentTextureUsage;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthStencilPixelFormat;
@property (nonatomic) unsigned long long depthStencilStorageMode;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) struct { double red; double green; double blue; double alpha; } clearColor;
@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned int clearStencil;
@property (readonly, nonatomic) id<MTLTexture> depthStencilTexture;
@property (readonly, nonatomic) id<MTLTexture> multisampleColorTexture;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) BOOL enableSetNeedsDisplay;
@property (nonatomic) BOOL autoResizeDrawable;
@property (nonatomic) struct CGSize { double width; double height; } drawableSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredDrawableSize;
@property (readonly) id<MTLDevice> preferredDevice;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) struct CGColorSpace { } *colorspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (Class)layerClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)startTime;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)setNilValueForKey:(id)a0;
- (void)_windowWillClose:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPointFromBacking:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToBacking:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeFromBacking:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSizeToBacking:(struct CGSize { double x0; double x1; })a0;
- (void)displayLayer:(id)a0;
- (void)draw;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)_resizeDrawable;
- (void)__initCommon;
- (long long)_calculateRefeshesPerSecond;
- (void)_createCVDisplayLink;
- (void)_dumpFrameImageWithFilename:(id)a0;
- (void)_dumpFramerate:(double)a0 withFilename:(id)a1;
- (struct CGSize { double x0; double x1; })_pixelSizeFromPointSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resizeMetalLayerDrawable;
- (void)_updateToNativeScale;
- (const id *)colorTextures;
- (const id *)colorTexturesForceUpdate:(BOOL)a0;
- (void)createDepthStencilTexture;
- (unsigned long long)drawNumber;
- (unsigned long long)drawableAttachmentIndex;
- (BOOL)exportToTargaAtLocation:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 size:(unsigned long long)a3 bytes:(void *)a4;
- (void)getEnvironmentSettings;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (const id *)multisampleColorTextures;
- (const id *)multisampleColorTexturesForceUpdate:(BOOL)a0;
- (long long)nominalFramesPerSecond;
- (void)releaseDrawables;
- (void)setColorPixelFormat:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDrawableAttachmentIndex:(unsigned long long)a0;
- (void)setNominalFramesPerSecond:(long long)a0;

@end
