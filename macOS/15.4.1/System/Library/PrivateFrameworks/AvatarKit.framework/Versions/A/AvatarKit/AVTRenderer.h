@class NSLock, NSString, SCNScene, SCNNode, AVAudioEnvironmentNode, AVTAvatarEnvironment, SKScene, AVTAvatar, MTLRenderPassDescriptor, AVTPresentationConfiguration, AVAudioEngine;
@protocol MTLRenderCommandEncoder, SCNSceneRendererDelegate, MTLDevice, MTLCommandQueue, AVTRendererTechnique;

@interface AVTRenderer : SCNRenderer <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, AVTRendererTechniqueSupport, AVTSceneRenderer> {
    AVTAvatarEnvironment *_environment;
    AVTPresentationConfiguration *_presentationConfiguration;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    BOOL _warmingUp;
    unsigned long long _antialiasingMode;
    id<AVTRendererTechnique> _avtRendererTechnique;
}

@property (nonatomic) unsigned long long avt_antialiasingMode;
@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic, getter=isWarmingUp) BOOL warmingUp;
@property (retain, nonatomic) AVTPresentationConfiguration *presentationConfiguration;
@property (copy, nonatomic) NSString *framingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AVTRendererTechnique> avtRendererTechnique;
@property (retain, nonatomic) SCNScene *scene;
@property (nonatomic) double sceneTime;
@property (weak, nonatomic) id<SCNSceneRendererDelegate> delegate;
@property (getter=isPlaying) BOOL playing;
@property (nonatomic) BOOL loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) BOOL autoenablesDefaultLighting;
@property (nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property (nonatomic, getter=isTemporalAntialiasingEnabled) BOOL temporalAntialiasingEnabled;
@property (nonatomic) BOOL showsStatistics;
@property (nonatomic) unsigned long long debugOptions;
@property (retain, nonatomic) SKScene *overlaySKScene;
@property (readonly, nonatomic) unsigned long long renderingAPI;
@property (readonly, nonatomic) struct CGColorSpace { } *workingColorSpace;
@property (readonly, nonatomic) void *context;
@property (readonly, nonatomic) id<MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long colorPixelFormat;
@property (readonly, nonatomic) unsigned long long depthPixelFormat;
@property (readonly, nonatomic) unsigned long long stencilPixelFormat;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) AVAudioEngine *audioEngine;
@property (readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property (retain, nonatomic) SCNNode *audioListener;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL usesReverseZ;

+ (id)renderer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTechnique:(id)a0;
- (id)technique;
- (id)_initWithOptions:(id)a0 isPrivateRenderer:(BOOL)a1 privateRendererOwner:(id)a2 clearsOnDraw:(BOOL)a3 context:(void *)a4 renderingAPI:(unsigned long long)a5;
- (void)_renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (void)_renderer:(id)a0 updateAtTime:(double)a1;
- (void)renderer:(id)a0 commandBufferDidCompleteWithError:(id)a1;
- (void)renderer:(id)a0 didFallbackToDefaultTextureForSource:(id)a1 message:(id)a2;
- (void)avatarDidChange;
- (void)__setAvatar:(id)a0;
- (void)_avtSetupWithOptions:(id)a0;
- (void)_avtUpdateRendersContinuously;
- (void)_detachAvatarFromRenderer;
- (void)_setAvatar:(id)a0;
- (void)crashAppExtensionOrViewService_rdar98130076:(id /* block */)a0;
- (BOOL)deprecated_ntk_isPaused;
- (void)deprecated_ntk_setPaused:(BOOL)a0;
- (void)deprecated_ntk_setPhysicsWorldTimeStep:(float)a0;
- (void)fadePuppetToWhite:(float)a0;
- (void)setFramingModeForcingPointOfViewUpdate:(id)a0;

@end
