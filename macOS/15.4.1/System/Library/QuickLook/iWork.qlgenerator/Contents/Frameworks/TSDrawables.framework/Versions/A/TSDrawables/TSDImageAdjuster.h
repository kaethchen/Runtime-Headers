@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {
    TSDImageAdjustments *_imageAdjustments;
}

+ (id)p_adjustedImageNameForSourceImageProvider:(id)a0 adjustedImageType:(id)a1 filenameSuffix:(id)a2;

- (void).cxx_destruct;
- (id)initWithImageAdjustments:(id)a0;
- (struct CGImage { } *)newFilteredImageForImage:(struct CGImage { } *)a0 enhancedImage:(inout struct CGImage **)a1;
- (struct CGImage { } *)p_newImageFromCIImage:(id)a0 underlyingImage:(struct CGImage { } *)a1;
- (void)generateEnhancedAndAdjustedImageDataForSourceImage:(id)a0 enhancedImageData:(id)a1 completionHandler:(id /* block */)a2;
- (struct CGImage { } *)p_createImageByToneMappingHDRImageToSDR:(struct CGImage { } *)a0;
- (id)p_dataForPNGRepresentationOfImage:(struct CGImage { } *)a0 redrawnInHDRColorSpaceWithOrientation:(long long)a1;
- (id)p_dataForSDRCGImage:(struct CGImage { } *)a0 HDRCGImage:(struct CGImage { } *)a1 provider:(id)a2 filenameSuffix:(id)a3;

@end
