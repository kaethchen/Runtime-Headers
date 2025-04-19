@class NSString;

@interface ABLocalImageLoader : NSObject {
    NSString *_imagesFolder;
}

- (void)dealloc;
- (BOOL)fileExistsAtPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForPath:(id)a0;
- (id)initWithImagesFolder:(id)a0;
- (id)largePhotoForIdentifier:(id)a0;
- (id)largePhotoPathForIdentifier:(id)a0;
- (id)photoWithPath:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 identifier:(id)a2;
- (BOOL)shouldLogPaths;
- (id)thumbnailPhotoForIdentifier:(id)a0;
- (id)thumbnailPhotoPathForIdentifier:(id)a0;

@end
