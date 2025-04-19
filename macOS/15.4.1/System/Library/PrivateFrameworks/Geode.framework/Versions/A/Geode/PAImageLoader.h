@class NSDictionary;

@interface PAImageLoader : NSObject {
    BOOL _compositeOnWhiteBackground;
    BOOL _isTiled;
    int _blendMode;
    struct PFIntSize_st { unsigned long long width; unsigned long long height; } _tileSize;
    struct PFIntSize_st { unsigned long long width; unsigned long long height; } _bandSize;
    NSDictionary *_cgImageProperties;
    struct CGImageSource { } *_imageSource;
    struct CGColorSpace { } *_colorSpace;
    NSDictionary *_imageSourceOptions;
}

+ (unsigned long long)subsampleFactorForTargetSize:(struct CGSize { double x0; double x1; })a0 originalSize:(struct CGSize { double x0; double x1; })a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct CGColorSpace { } *)colorSpace;
- (id)cgImageProperties;
- (void)_logBitmapInfo:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })_originalSizeForSubsampledImage;
- (id)_addOptionsForImageSource:(struct CGImageSource { } *)a0 sizePolicy:(id)a1 orientation:(long long)a2 createThumbnail:(BOOL)a3;
- (unsigned long long)_bitsPerComponents:(struct CGImage { } *)a0;
- (id)_bufferForRenderedCGImage:(struct CGImage { } *)a0 request:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 outputColorSpace:(struct CGColorSpace { } *)a3 canceler:(id)a4 error:(id *)a5;
- (id)_contiguousBufferForExtent:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 format:(int)a1 purgeLevel:(int)a2 colorSpace:(struct CGColorSpace { } *)a3 fill:(void *)a4;
- (id)_errorForNULLCGBitmapContext:(struct CGImage { } *)a0;
- (id)_errorForNULLCGImageForData:(id)a0;
- (id)_errorForNULLCGImageSourceWithData:(id)a0;
- (id)_errorForNULLCGImageSourceWithURL:(id)a0 options:(id)a1;
- (id)_errorForNULLCGImageWithURL:(id)a0 options:(id)a1;
- (id)_errorForNilPA2DBuffer:(struct CGImage { } *)a0;
- (int)_formatForCGImage:(struct CGImage { } *)a0;
- (id)_mutableBufferForCGImage:(struct CGImage { } *)a0 request:(id)a1 outputSize:(struct CGSize { double x0; double x1; })a2 outputColorSpace:(struct CGColorSpace { } *)a3 error:(id *)a4;
- (id)_mutableOptionsForRequest:(id)a0;
- (BOOL)_needsTiles:(id)a0 outputSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGContext { } *)_newBitmapContext:(id)a0 forImage:(struct CGImage { } *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 usingPtr:(void *)a4 rowBytes:(unsigned long long)a5;
- (struct CGImage { } *)_newCGImageForRequest:(id)a0 error:(id *)a1 createThumbnail:(BOOL)a2 applyTransform:(BOOL)a3 orientation:(long long)a4;
- (struct CGImage { } *)_newCGImageForRequest:(id)a0 orientation:(long long)a1 error:(id *)a2;
- (struct CGColorSpace { } *)_newColorSpaceToRenderInto:(struct CGImage { } *)a0;
- (id)_newErrorUserInfoWithMessage:(id)a0 url:(id)a1 options:(id)a2;
- (struct CGContext { } *)_newTiledBitmapContext:(id)a0 forImage:(struct CGImage { } *)a1 outTemporaryBuffer:(id *)a2;
- (struct CGSize { double x0; double x1; })_outputSizeForImage:(struct CGImage { } *)a0 request:(id)a1;
- (BOOL)_prepareURL:(id)a0;
- (BOOL)_renderCGImage:(struct CGImage { } *)a0 intoBuffer:(id)a1 request:(id)a2 canceler:(id)a3 error:(id *)a4;
- (BOOL)_renderEntireCGImage:(struct CGImage { } *)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2 interpolationQuality:(int)a3 intoContiguousBuffer:(id)a4 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 error:(id *)a6;
- (BOOL)_renderEntireCGImage:(struct CGImage { } *)a0 intoContiguousBuffer:(id)a1 canceler:(id)a2 error:(id *)a3;
- (BOOL)_renderTiledCGImage:(struct CGImage { } *)a0 intoTiledBuffer:(id)a1 canceler:(id)a2 error:(id *)a3;
- (id)_tiledBufferForExtent:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 format:(int)a1 purgeLevel:(int)a2 colorSpace:(struct CGColorSpace { } *)a3 tileSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a4;
- (id)bufferForRequest:(id)a0 canceler:(id)a1 error:(id *)a2;
- (struct CGImageSource { } *)cgImageSourceForFileRequest:(id)a0 error:(id *)a1;
- (struct CGImage { } *)newCGImageForRequest:(id)a0 error:(id *)a1;

@end
