@interface CMIStyleEngineProcessorUtilities : NSObject

+ (unsigned long long)getMTLPixelFormatForCVPixelBuffer:(struct __CVBuffer { } *)a0 plane:(unsigned int)a1;
+ (struct { unsigned long long x0; unsigned long long x1; })getMTLPixelFormatsForDualPlaneYUV420CVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelBufferYUV420:(struct __CVBuffer { } *)a0;
+ (unsigned int)numberOfPixelBufferPlanesThatNeedToBeBoundToMTLTextures:(struct __CVBuffer { } *)a0;
+ (BOOL)textureIsLinearSRGB:(id)a0;

@end
