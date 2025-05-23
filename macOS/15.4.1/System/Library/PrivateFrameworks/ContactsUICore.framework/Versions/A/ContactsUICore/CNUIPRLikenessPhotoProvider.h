@class NSString, NSData, CNCache;

@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider> {
    CNCache *_cache;
}

@property (readonly, nonatomic) NSString *likenessFingerprint;
@property (readonly, nonatomic) NSData *originalPhotoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGImage { } *)cgImageFromData:(id)a0;
+ (struct CGImage { } *)cgThumbnailFromData:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (struct CGImage { } *)_cnui_circularImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)_cnui_image;
- (struct CGImage { } *)_cnui_imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_cnui_likenessForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { } *)_cnui_roundedRectImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithPhotoData:(id)a0 fingerprint:(id)a1;

@end
