@class TSCH3DResource, TSCH3DSceneRenderPipeline, TSCH3DLabelsRendererTransforms, TSCH3DCamera, TSCH3DLabelResources, TSCH3DLabelResource, TSCH3DDataBufferResource, TSCH3DLabelsMeshRenderer;

@interface TSCH3DLabelsRenderer : NSObject {
    TSCH3DResource *_labelQuad;
    TSCH3DResource *_labelTexcoordQuad;
    TSCH3DLabelsRendererTransforms *_transforms;
}

@property (retain, nonatomic) TSCH3DLabelResource *label;
@property (retain, nonatomic) TSCH3DLabelResources *resources;
@property (retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline;
@property (retain, nonatomic) TSCH3DLabelsMeshRenderer *meshRenderer;
@property (retain, nonatomic) TSCH3DDataBufferResource *mesh;
@property (readonly, nonatomic) TSCH3DCamera *labelCamera;
@property (nonatomic) BOOL useLabelBounds;
@property (readonly, nonatomic) struct LabelRenderInfo { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledLabelSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledLabelFullSize; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledLabelRenderOffset; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } sampledAlignmentPadding; } renderInfo;

+ (id)renderer;
+ (id)renderCacheKey;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)effects;
- (BOOL)cacheEnabled;
- (BOOL)hasCachedLabels;
- (id)p_renderCacheID;
- (BOOL)beginResources:(id)a0 expectedSize:(void *)a1;
- (void)delegateDidSubmitLabel;
- (void)endResources;
- (BOOL)isCacheValid;
- (id)labelQuad;
- (id)p_renderCacheFromScene:(id)a0 created:(BOOL *)a1 createIfAbsent:(BOOL)a2;
- (id)p_renderCacheKey;
- (void)postrender:(id)a0;
- (void)prepareCachedIndex:(void *)a0 string:(id)a1 alignmentPadding:(void *)a2 width:(double)a3 bitmapContextInfo:(id)a4;
- (void)prerender:(id)a0;
- (void)renderAtPosition:(void *)a0 offset:(void *)a1 alignment:(unsigned int)a2 offset2D:(void *)a3 rotation:(float)a4 externalAttribute:(id)a5;
- (void *)unitToWorld;
- (void *)worldToStage;

@end
