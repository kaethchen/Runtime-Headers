@class NSCache, MKCustomImageRepAdaptiveToScale;

@interface MKImageAdaptiveToScale : NSImage {
    id /* block */ _vkImageWithScale;
    NSCache *_vkImageCache;
    MKCustomImageRepAdaptiveToScale *_backingImageRep;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_vkImagePtSize:(id)a0;
- (void)_drawCustomImageRep:(id)a0;
- (void)_updateSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBlockGetVKImageWithScale:(id /* block */)a0;
- (id)vkImageWithScale:(double)a0;

@end
