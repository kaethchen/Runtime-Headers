@protocol CRConfidenceThresholdProviding;

@interface TextRecognition.CREngineFast : _TtCs12_SwiftObject <TextRecognition.CREngine> {
    void /* unknown type, empty encoding */ textRecognitionStats;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ languageCorrection;
    void /* unknown type, empty encoding */ shouldCancel;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ confidenceThresholdProviderFacade;
@property (nonatomic, readonly) id<CRConfidenceThresholdProviding> confidenceThresholdProvider;

+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2 extendedTimeoutBlock:(id /* block */)a3;
+ (id)supportedComputeDevicesWithRevision:(long long)a0 error:(id *)a1;
+ (id)supportedLanguagesForRevision:(long long)a0 error:(id *)a1;

- (void)cancel;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)computeDevice;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)resultDocumentFor:(id)a0 options:(id)a1 trackingSession:(id)a2 error:(id *)a3 progressHandler:(id /* block */)a4;

@end
