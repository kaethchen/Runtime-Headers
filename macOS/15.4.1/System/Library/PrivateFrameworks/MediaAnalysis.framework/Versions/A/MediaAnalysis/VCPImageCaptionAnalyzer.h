@class CSUImageCaptionerConfiguration, VCPImageBackboneAnalyzer, CSUImageCaptioner;

@interface VCPImageCaptionAnalyzer : VCPImageAnalyzer {
    struct CVNLPCaptionHandler { } *_captionHandlerRef;
    CSUImageCaptioner *_imageCaptioner;
    CSUImageCaptionerConfiguration *_captionerConfig;
    struct __CVBuffer { } *_rescaledImageBuffer;
    long long _modelType;
    long long _safetyType;
    VCPImageBackboneAnalyzer *_imageBackboneAnalyzer;
    BOOL _useSharedModel;
}

+ (BOOL)useVCPMobileAssetAXCaptionModel;
+ (BOOL)greedySearchEnabled;
+ (id)sharedCSUCaptionerWithConfig:(id)a0 identifier:(id)a1;
+ (id)sharedCVNLPCaptionHandlerWithOptions:(id)a0 identifier:(id)a1;
+ (BOOL)writeSpatialEmbeddingToFile;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)analyzeEmbedding:(id)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (BOOL)containPotentialUnsafeContent:(struct __CVBuffer { } *)a0;
- (id)initWithCaptionModelType:(long long)a0 captionSafetyType:(long long)a1 useSharedModel:(BOOL)a2;

@end
