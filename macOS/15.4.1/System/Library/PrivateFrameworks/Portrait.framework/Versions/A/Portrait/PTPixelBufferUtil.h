@class CIContext;

@interface PTPixelBufferUtil : NSObject {
    CIContext *_ciContext;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
}

+ (BOOL)isCompressed:(struct __CVBuffer { } *)a0;
+ (id)getMTLTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 device:(id)a1;
+ (unsigned int)pixelBufferToLumaChroma:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 outLuma:(id *)a2 outChroma:(id *)a3 read:(BOOL)a4 write:(BOOL)a5;
+ (id)createTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 device:(id)a1 textureCache:(struct __CVMetalTextureCache { } *)a2 sRGB:(BOOL)a3;
+ (id)getMTLTextureDescriptor:(struct __CVBuffer { } *)a0 device:(id)a1;
+ (struct YUVPixelFormats { unsigned long long x0; unsigned long long x1; })_getPixelFormatsForType:(unsigned int)a0;
+ (id)createTextureFromCache:(struct __CVMetalTextureCache { } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 descriptor:(id)a2 plane:(unsigned long long)a3;
+ (id)createTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 device:(id)a1;
+ (unsigned int)createTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0 device:(id)a1 outLuma:(id *)a2 outChroma:(id *)a3 read:(BOOL)a4 write:(BOOL)a5;
+ (unsigned int)createTexturesFromPixelBuffer:(struct __CVBuffer { } *)a0 device:(id)a1 textureCache:(struct __CVMetalTextureCache { } *)a2 outLuma:(id *)a3 outChroma:(id *)a4 read:(BOOL)a5 write:(BOOL)a6;
+ (id)getAttachmentString:(struct __CVBuffer { } *)a0 forKey:(struct __CFString { } *)a1;
+ (unsigned int)getCVPixelBufferGetPixelFormatType:(unsigned long long)a0;
+ (unsigned long long)getNoConcurrentAccessHint:(struct __CVBuffer { } *)a0;
+ (struct YUVPixelFormats { unsigned long long x0; unsigned long long x1; })getPixelFormatsForPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelBuffer10Bit:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelBufferFullRange:(struct __CVBuffer { } *)a0;
+ (BOOL)isRGB:(struct __CVBuffer { } *)a0;
+ (void)logPixelbufferMetadataForPixelBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
+ (int)readRawPixelBufferFromFile:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)checksumForPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)createPixelbufferFromCIImage:(id)a0 pixelFormat:(unsigned int)a1;
- (id)readMetadataFromFile:(id)a0;
- (struct __CVBuffer { } *)readPixelBufferFromFile:(id)a0 pixelFormat:(unsigned int)a1;
- (struct __CVBuffer { } *)readPixelBufferFromFile:(id)a0 pixelFormat:(unsigned int)a1 ciOptions:(id)a2;
- (int)writePixelBufferToFile:(id)a0 fileFormat:(id)a1 pixelBuffer:(struct __CVBuffer { } *)a2 pixelWidth:(unsigned int)a3 pixelHeight:(unsigned int)a4 scalingModeTrim:(BOOL)a5;

@end
