@class SCNPlane, NSOpenGLContext;

@interface SCNRenderTargetView : SCNView {
    struct __C3DTexture { } *_texture;
    int _filterChannel;
    SCNPlane *_plane;
}

@property (retain, nonatomic) NSOpenGLContext *sourceContext;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTexture:(struct __C3DTexture { } *)a0;
- (void)awakeFromNib;
- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)renderer:(id)a0 willRenderScene:(id)a1 atTime:(double)a2;
- (void)setFilterChannel:(id)a0;

@end
