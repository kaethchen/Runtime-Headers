@class VFXWorld, VFXRenderer, AVAudioEnvironmentNode, NSString, VFXRenderGraph, AVAudioEngine, MTLRenderPassDescriptor, VFXNode;
@protocol MTLRenderCommandEncoder, MTLDevice, VFXWorldRendererDelegate, MTLCommandQueue;

@interface VFXHolographicRenderer : NSObject <VFXWorldRenderer> {
    VFXNode *_pointOfView;
}

@property (retain, nonatomic) VFXRenderer *renderer;
@property (retain, nonatomic) id session;
@property (nonatomic) BOOL rawQuilt;
@property (retain, nonatomic) VFXWorld *world;
@property (weak, nonatomic) id<VFXWorldRendererDelegate> delegate;
@property (retain, nonatomic) VFXNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic) unsigned long long antialiasingMode;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL additiveWritesToAlpha;
@property (nonatomic) BOOL showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) VFXNode *audioListener;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (readonly, nonatomic) struct CGColorSpace { } *workingColorSpace;
@property (retain, nonatomic) VFXRenderGraph *renderGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookingGlassRendererWithDevice:(id)a0 quiltSettings:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 calibration:(id)a2 options:(id)a3;

- (void)dealloc;
- (id)init;
- (id)initWithDevice:(id)a0 options:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (void /* unknown type, empty encoding */)unprojectPoint:(SEL)a0;
- (BOOL)prepareObject:(id)a0 shouldAbortBlock:(id /* block */)a1;
- (void)set_commandBufferStatusMonitor:(id)a0;
- (id)_commandBufferStatusMonitor;
- (id)_resourceManagerMonitor;
- (BOOL)isNodeInsideFrustum:(id)a0 withPointOfView:(id)a1;
- (id)nodesInsideFrustumWithPointOfView:(id)a0;
- (void)prepareObjects:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void /* unknown type, empty encoding */)projectPoint:(SEL)a0;
- (void)set_resourceManagerMonitor:(id)a0;
- (void)updateAtTime:(double)a0;
- (BOOL)_wantsWorldRendererDelegationMessages;
- (void)renderToTexture:(id)a0 commandBuffer:(id)a1;
- (void)set_wantsWorldRendererDelegationMessages:(BOOL)a0;

@end
