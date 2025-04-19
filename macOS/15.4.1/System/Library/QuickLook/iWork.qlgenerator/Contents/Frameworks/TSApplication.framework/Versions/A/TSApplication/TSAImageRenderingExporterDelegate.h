@class NSString, TSDCapabilities, NSURL, TSARenderingExporter, TSUColor;
@protocol TSKImageExporter;

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    TSARenderingExporter<TSKImageExporter> *mRenderingExporter;
    NSURL *mURL;
    TSDCapabilities *mCapabilities;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) BOOL scaleToFit;
@property (retain, nonatomic) TSUColor *backgroundColor;
@property (copy, nonatomic) NSString *imageType;
@property (nonatomic) float compressionFactor;
@property (nonatomic) long long transferFunction;
@property (nonatomic) BOOL exportWithAlpha;
@property (readonly, nonatomic) BOOL currentTransferFunctionRequiresSDRCGContext;
@property (readonly, nonatomic) BOOL currentTransferFunctionRequiresHDRCGContext;

- (void).cxx_destruct;
- (void)teardown;
- (void)setup;
- (double)viewScale;
- (id)initWithRenderingExporter:(id)a0;
- (struct CGContext { } *)newCGContextForURL:(id)a0;
- (struct CGContext { } *)newHDRCGContextForURL:(id)a0;
- (BOOL)p_imageTypeSupportsHDR:(id)a0;
- (void)releaseCGContext:(struct CGContext { } *)a0;
- (void)releaseSDRCGContext:(struct CGContext { } *)a0 andHDRContext:(struct CGContext { } *)a1;
- (BOOL)supportsPaging;
- (BOOL)supportsRenderingQuality;

@end
