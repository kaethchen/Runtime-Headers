@class NSString;

@interface PTTexture : NSObject

@property (retain, nonatomic) NSString *colorPrimaries;
@property (retain, nonatomic) NSString *transferFunction;
@property (retain, nonatomic) NSString *YCbCrMatrix;
@property (nonatomic) long long YCbCrColorDepth;
@property (nonatomic) BOOL YCbCrFullRange;

+ (id)createRGBA:(id)a0;
+ (id)createYUV420:(id)a0 chroma:(id)a1;
+ (id)createFromPixelbuffer:(struct __CVBuffer { } *)a0 device:(id)a1 textureCache:(struct __CVMetalTextureCache { } *)a2 read:(BOOL)a3 write:(BOOL)a4;
+ (id)createFromPixelbuffer:(struct __CVBuffer { } *)a0 device:(id)a1 read:(BOOL)a2 write:(BOOL)a3;

- (void).cxx_destruct;
- (unsigned long long)height;
- (unsigned long long)width;
- (BOOL)isRGB;
- (void)copyMetadataTo:(id)a0;

@end
