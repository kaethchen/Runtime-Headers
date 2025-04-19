@class NSArray, NSDictionary, CRPerformanceStatistics;

@interface CRImageReader : NSObject

@property (nonatomic, copy) NSArray *outputObjectTypes;
@property (nonatomic, readonly) CRPerformanceStatistics *detectorStats;
@property (nonatomic, readonly) CRPerformanceStatistics *postProcStats;
@property (nonatomic, readonly) CRPerformanceStatistics *recognizerStats;
@property (nonatomic, readonly) CRPerformanceStatistics *detectorInferenceStats;
@property (nonatomic, readonly) CRPerformanceStatistics *recognizerInferenceStats;
@property (nonatomic, readonly) CRPerformanceStatistics *recognizerDecodingStats;
@property (nonatomic, readonly) CRPerformanceStatistics *textGroupingStats;
@property (nonatomic, readonly) CRPerformanceStatistics *orientationCorrectionStats;
@property (nonatomic, readonly) CRPerformanceStatistics *lineWrappingStats;
@property (nonatomic, readonly) CRPerformanceStatistics *tableStructureRecognitionStats;
@property (nonatomic, readonly) CRPerformanceStatistics *formAnalyzerStats;
@property (nonatomic, readonly) CRPerformanceStatistics *formDetectionStats;
@property (nonatomic, readonly) CRPerformanceStatistics *formPostProcessingStats;
@property (retain, nonatomic) NSDictionary *userOptions;
@property (retain, nonatomic) id engine;
@property (retain, nonatomic) NSArray *_outputObjectTypes;

+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedComputeDevicesForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedLanguagesForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (BOOL)languageIsThai:(id)a0;
+ (long long)defaultRevisionNumber;
+ (id)descriptionForErrorCode:(long long)a0;
+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)errorWithErrorCode:(long long)a0;
+ (BOOL)languageIsArabic:(id)a0;
+ (BOOL)languageIsChinese:(id)a0;
+ (BOOL)languageIsCyrillic:(id)a0;
+ (BOOL)languageIsFrench:(id)a0;
+ (BOOL)languageIsJapanese:(id)a0;
+ (BOOL)languageIsKorean:(id)a0;
+ (BOOL)languageIsLatin:(id)a0;
+ (BOOL)languageIsNorwegian:(id)a0;
+ (BOOL)languageIsVietnamese:(id)a0;
+ (id)languageSetFromOptionsDictionary:(id)a0;
+ (BOOL)languageSupportsFullWidthPunctuation:(id)a0;
+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 extendedTimeoutBlock:(id /* block */)a2 error:(id *)a3;
+ (id)prioritizationForOptions:(id)a0;
+ (id)supportedChineseLanguages;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)cancel;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)computeDevice;
- (id)documentOutputRegionForImage:(id)a0 options:(id)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)documentOutputRegionForImage:(id)a0 options:(id)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 trackingSession:(id)a3 error:(id *)a4 withProgressHandler:(id /* block */)a5;
- (id)recognizeDetectedBlocks:(id)a0 inImage:(id)a1 error:(id *)a2 withProgressHandler:(id /* block */)a3;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)confidenceThresholdProvider;
- (BOOL)configureImageReaderWithOptions:(id)a0 error:(id *)a1;
- (id)documentOutputRegionForImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2 withProgressHandler:(id /* block */)a3;
- (id)documentOutputRegionForTextFeatures:(id)a0 image:(id)a1;
- (BOOL)purgeCaches:(id)a0;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;

@end
