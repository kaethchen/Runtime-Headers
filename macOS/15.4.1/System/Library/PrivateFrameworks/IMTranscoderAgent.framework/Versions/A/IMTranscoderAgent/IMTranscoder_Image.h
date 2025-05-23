@interface IMTranscoder_Image : IMTranscoder

@property (nonatomic) double overrideJPEGCompressionQuality;

+ (id)supportedUTIs;
+ (BOOL)_canConvertPNGToJPEG:(struct CGImage { } *)a0;
+ (BOOL)_imageContainsTranslucentPixels:(struct CGImage { } *)a0;
+ (unsigned long long)findLargerDimensionFromImage:(struct CGImageSource { } *)a0 withProperties:(id)a1 toWidth:(id *)a2 toHeight:(id *)a3;
+ (id)findOrientationFromProperties:(id)a0;

- (unsigned long long)_getImageWidth:(struct CGImageSource { } *)a0;
- (id)_checkAndSaveImageData:(id)a0 sourceURL:(id)a1 inFormat:(struct __CFString { } *)a2 withMaxByteSize:(unsigned long long)a3 actualSize:(unsigned long long *)a4 usedLengthIndex:(int *)a5 currentIndex:(int)a6;
- (unsigned long long)_determineFrameIndexForDowngradeFromMultiFrameToSingleFrameWithMaxDimension:(unsigned long long)a0 fromImageSource:(struct CGImageSource { } *)a1;
- (id)_getScaleFactorArray:(id)a0 transferURL:(id)a1 outputURLs:(id)a2;
- (void)_imMetricsCollectorForLQMQualityEstimatorModeImageTypeHEIC:(unsigned long long)a0 shouldUseQualityEstimatorModel:(BOOL)a1 inputImageFeatures:(id)a2 metricsDict:(id)a3;
- (id)_imMetricsCollectorForLQMQualityEstimatorModel:(struct __CFString { } *)a0 suggestedMaxLength:(unsigned long long)a1 shouldUseQualityEstimatorModel:(BOOL)a2 inputImageFeatures:(id)a3;
- (BOOL)_isHEIFImageFormat:(struct __CFString { } *)a0;
- (BOOL)_isWebPImageFormat:(struct __CFString { } *)a0;
- (BOOL)_isWideGamutImage:(struct CGImageSource { } *)a0;
- (id)_newGeneratedImage:(struct CGImageSource { } *)a0 sourceWidth:(id)a1 sourceHeight:(id)a2 sourceLength:(unsigned long long)a3 sourceProps:(id)a4 target:(long long)a5 hardwareEncoder:(id)a6 inFormat:(struct __CFString { } *)a7 fromFormat:(struct __CFString { } *)a8 withMaxLength:(unsigned long long)a9 withMaxCount:(unsigned long long)a10 withCompressionQuality:(double)a11 enforceMaxes:(BOOL)a12 subsampling:(int)a13 shouldSkipAuxillaryData:(BOOL)a14;
- (void)_setWideGamutProperties:(id)a0 scaledImage:(struct CGImage { } *)a1;
- (id)_wideGamutImage:(struct CGImageSource { } *)a0 sourceURL:(id)a1 inFormat:(struct __CFString { } *)a2 withMaxByteSize:(unsigned long long)a3 maxDimension:(unsigned long long)a4 actualSize:(unsigned long long *)a5 telemetry:(id)a6;
- (id)_writeHEIFImage:(struct CGImageSource { } *)a0 sourceURL:(id)a1 inFormat:(struct __CFString { } *)a2 withMaxByteSize:(unsigned long long)a3 maxDimension:(unsigned long long)a4 downgradingMultiFrameImageToSingleFrame:(BOOL)a5 actualSize:(unsigned long long *)a6 startingLengthIndex:(int)a7 usedLengthIndex:(int *)a8 telemetry:(id)a9;
- (id)_writeImage:(struct CGImageSource { } *)a0 sourceURL:(id)a1 target:(long long)a2 hardwareEncoder:(id)a3 inFormat:(struct __CFString { } *)a4 fromFormat:(struct __CFString { } *)a5 withMaxByteSize:(unsigned long long)a6 maxDimension:(unsigned long long)a7 actualSize:(unsigned long long *)a8 startingLengthIndex:(int)a9 usedLengthIndex:(int *)a10 estimator:(id)a11 isLQMEnabled:(BOOL)a12 telemetry:(id)a13;
- (id)_writeImageData:(id)a0 inFormat:(struct __CFString { } *)a1 sourceURL:(id)a2;
- (id)_writeRepresentationsForImage:(struct CGImageSource { } *)a0 target:(long long)a1 sourceURL:(id)a2 sizes:(id)a3 maxDimension:(unsigned long long)a4 srcUTI:(struct __CFString { } *)a5 inFormat:(struct __CFString { } *)a6 downgradingMultiFrameImageToSingleFrame:(BOOL)a7 estimator:(id)a8 isLQMEnabled:(BOOL)a9 telemetry:(id)a10;
- (void)copyAuxiliaryImagesFromImageSource:(struct CGImageSource { } *)a0 toDestination:(struct CGImageDestination { } *)a1 fromImageAtIndex:(unsigned long long)a2 scaleFactor:(double)a3;
- (id)copyFramePropertiesFrom:(struct CGImageSource { } *)a0 index:(unsigned long long)a1 inFormat:(struct __CFString { } *)a2 outFormat:(struct __CFString { } *)a3;
- (id)copyImagePropertiesFrom:(struct CGImageSource { } *)a0 frameCount:(unsigned long long)a1 withProps:(id)a2 inFormat:(struct __CFString { } *)a3 outFormat:(struct __CFString { } *)a4;
- (long long)shouldTranscodeTransfer:(id)a0 transcoderUserInfo:(id)a1 target:(long long)a2 utiType:(id)a3 allowUnfilteredUTIs:(id)a4 fileSizeLimit:(unsigned long long)a5 commonCapabilities:(id)a6;
- (void)transcodeFileTransfer:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 isLQMEnabled:(BOOL)a9 completionBlock:(id /* block */)a10;

@end
