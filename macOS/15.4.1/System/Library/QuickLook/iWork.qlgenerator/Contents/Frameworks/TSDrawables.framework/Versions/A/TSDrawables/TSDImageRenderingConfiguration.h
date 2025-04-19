@class TSDBitmapRenderingQualityInfo;

@interface TSDImageRenderingConfiguration : NSObject

@property (readonly, nonatomic) BOOL wantsHDR;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) double additionalScale;
@property (readonly, nonatomic) TSDBitmapRenderingQualityInfo *qualityInfo;
@property (readonly, nonatomic) BOOL isForPrinting;
@property (readonly, nonatomic) BOOL isForPDF;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCGContext:(struct CGContext { } *)a0;
- (id)initWithContentsScale:(double)a0 wantsHDR:(BOOL)a1;
- (id)i_initWithCanvas:(id)a0;
- (id)initWantsHDR:(BOOL)a0;
- (id)initWithBitmapQualityInfo:(id)a0;
- (id)initWithContentsScale:(double)a0 additionalScale:(double)a1 wantsHDR:(BOOL)a2;
- (id)initWithContentsScale:(double)a0 additionalScale:(double)a1 wantsHDR:(BOOL)a2 qualityInfo:(id)a3 isForPrinting:(BOOL)a4 isForPDF:(BOOL)a5;

@end
