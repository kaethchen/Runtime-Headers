@class NSImage, NSDictionary, NSMutableDictionary;

@interface ILMediaBrowserFacesImageCell : ILMediaBrowserImageCell {
    NSImage *faceFrameImage;
    NSImage *faceFrameImageSelected;
    NSImage *faceFrameImageSelectedInactive;
    NSDictionary *textAttributes;
    NSMutableDictionary *thumbnailCache;
    float _fontSize;
}

@property BOOL showsAlternateImage;

- (void)dealloc;
- (id)init;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawThumbnail:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 identifier:(id)a3;
- (id)ninePartImageNamed:(id)a0 fromResourceName:(id)a1;
- (void)setupNinePartImages;
- (id)thumbnailCIImageForImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
