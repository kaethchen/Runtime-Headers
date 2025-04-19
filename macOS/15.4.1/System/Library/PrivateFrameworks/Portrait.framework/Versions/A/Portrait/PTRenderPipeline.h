@class PTMetalContext, PTRenderPipelineDescriptor, NSString;

@interface PTRenderPipeline : NSObject {
    PTRenderPipelineDescriptor *_descriptor;
    PTMetalContext *_metalContext;
    unsigned long long _activeVersion;
    NSString *_description;
}

@property (readonly) unsigned long long activeVersion;

+ (unsigned long long)latestVersion;
+ (BOOL)isMetalDeviceSupported:(id)a0;
+ (BOOL)isRenderVersionSupported:(unsigned long long)a0;
+ (id)debugRenderOptions;
+ (int)prewarmForCameraCaptured;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithDescriptor:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)prewarm;
- (id)initWithDescriptor:(id)a0;
- (id)createRenderStateWithQuality:(int)a0;
- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (void)setActiveVersion:(unsigned long long)a0;
- (unsigned long long)minimumResourceHeapSize;
- (void)setResourceHeap:(id)a0;

@end
