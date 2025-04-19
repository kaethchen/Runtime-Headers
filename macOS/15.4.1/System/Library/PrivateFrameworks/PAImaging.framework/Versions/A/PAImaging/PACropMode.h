@class PACropModeDrawingDelegate;

@interface PACropMode : PAImageItemViewDefaultMode

@property (retain) PACropModeDrawingDelegate *drawingDelegate;
@property struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } inversePreviewTransform;
@property (copy) id /* block */ _cropImageReadyHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToMode:(id)a0;
- (BOOL)cropImageReady:(id /* block */)a0;
- (void)activateWithView:(id)a0;
- (void)compositionForAssetType:(id)a0 imageItemController:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id /* block */)compositionReplacedFilter;
- (void)deactivateWithView:(id)a0;
- (id)imageAssetTypeForKey:(id)a0;
- (void)loadWithConfiguration:(id)a0 display:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)updateAssetClient:(id)a0 forKey:(id)a1 withConfiguration:(id)a2;
- (void)updateImageView:(id)a0 withImage:(id)a1 forKey:(id)a2;

@end
