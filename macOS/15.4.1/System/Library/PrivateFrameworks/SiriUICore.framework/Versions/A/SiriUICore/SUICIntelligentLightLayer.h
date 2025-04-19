@class MTLRenderPassDescriptor, NSString, CADisplayLink, NSScreen;
@protocol MTLCommandQueue, MTLTexture, MTLRenderPipelineState;

@interface SUICIntelligentLightLayer : CAMetalLayer {
    struct { void /* unknown type, empty encoding */ scale; void /* unknown type, empty encoding */ offset; } _vertUniforms;
    struct { void /* unknown type, empty encoding */ lights[11]; void /* unknown type, blank encoding */ power; void /* unknown type, blank encoding */ lightness; } _fragUniforms;
    struct { struct { unsigned long long physicsRate; int maxPhysicsIterationsPerFrame; float physicsTickDelta; float framerateEnergyModifier; float micPowerLevel; float chipRandomOffset[33]; float chipRotation; BOOL drawingVeryLastFrame; BOOL reduceMotion; } common; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } flameSpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } onSpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } volumeSpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } glowSpring; unsigned long long zoning; BOOL isBuddy; BOOL slowAudioReactivity; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } energySpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } lightnessSpring; float flameDrawnSize; float baseRotationSlowdownModifier; float extraRotationSlowdownModifier; void /* unknown type, empty encoding */ lights[11]; } _physics;
    struct { void /* unknown type, empty encoding */ noiseOffset; void /* unknown type, empty encoding */ scale; } _noiseUniforms;
    id<MTLTexture> _noiseTexture;
    NSScreen *_screen;
    NSString *_archivePath;
    unsigned long long _firstFrameSignpost;
    BOOL _firstFrame;
}

@property (nonatomic) unsigned long long colorPalette;
@property (nonatomic) BOOL quicktationMode;
@property (nonatomic) float minPowerLevel;
@property (nonatomic) float volumeLinearPowerLevel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipeline;
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDesc;

+ (void)prewarm;
+ (Class)layerClass;
+ (id)createNoiseTextureWithDevice:(id)a0 commandQueue:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (void)invalidate;
- (void)stopVolumeInput;
- (id)initWithLayer:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMinimumPowerLevel:(float)a0;
- (void)setPaused:(BOOL)a0;
- (void)setScreen:(id)a0;
- (void)updateVolumeInputdB:(float)a0;
- (void)setIsQuicktationPill:(BOOL)a0;
- (void)transitionToNextBuddyStep;
- (void)_loadMetalState;
- (void)_commonInitWithScreen:(id)a0 commandQueue:(id)a1;
- (void)_drawFrame:(id)a0;
- (void)_loadMetalPipelines;
- (void)_updateMetalRatios:(struct CGSize { double x0; double x1; })a0;
- (void)_updateScreen:(id)a0;
- (void)endReducedFramerateForPerformance;
- (id)initWithScreen:(id)a0 commandQueue:(id)a1;
- (void)startReducedFramerateForPerformance;

@end
