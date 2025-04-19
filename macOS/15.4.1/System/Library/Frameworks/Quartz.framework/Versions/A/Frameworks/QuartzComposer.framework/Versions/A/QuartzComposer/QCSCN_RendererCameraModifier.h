@interface QCSCN_RendererCameraModifier : NSObject {
    void *_cachedSceneRef;
    struct C3DSphere { double radius; struct _SCNVector3 { double x; double y; double z; } center; } _viewedObjectSphere;
    double zNEar_i;
    double zFar_i;
}

- (void)renderer:(id)a0 didRenderScene:(id)a1 atTime:(double)a2;
- (void)renderer:(id)a0 willRenderScene:(id)a1 atTime:(double)a2;
- (struct C3DSphere { double x0; struct _SCNVector3 { double x0; double x1; double x2; } x1; })_viewedObjectSphereOfScene:(id)a0;

@end
