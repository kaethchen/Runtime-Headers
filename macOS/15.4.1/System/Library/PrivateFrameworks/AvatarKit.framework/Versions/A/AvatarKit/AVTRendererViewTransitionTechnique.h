@class SCNTechnique;
@protocol MTLTexture;

@interface AVTRendererViewTransitionTechnique : NSObject <AVTRendererTechnique> {
    id<MTLTexture> _snapshotTexture;
    float _framebufferTextureOpacity;
    SCNTechnique *_technique;
}

@property (nonatomic) float framebufferTextureOpacity;
@property (retain, nonatomic) id<MTLTexture> snapshotTexture;
@property (readonly, nonatomic) SCNTechnique *technique;

- (void).cxx_destruct;
- (id)initWithSceneRenderer:(id)a0;

@end
