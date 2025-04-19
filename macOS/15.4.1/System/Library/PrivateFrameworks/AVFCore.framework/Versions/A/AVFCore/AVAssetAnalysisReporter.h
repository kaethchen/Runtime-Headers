@class AVAsset, NSString, NSArray;

@interface AVAssetAnalysisReporter : NSObject {
    void *_assetAnalysisReporterInternal;
}

@property (readonly, weak) AVAsset *asset;
@property (readonly, getter=isReporting) BOOL reporting;
@property (readonly) NSString *analysisType;
@property (readonly) NSArray *messages;

+ (id)assetAnalysisReporterWithAsset:(id)a0 options:(id)a1;

- (void)dealloc;
- (void)_reportMessages;
- (id)initWithAsset:(id)a0 options:(id)a1;
- (void)startAnalysisReportingWithMessagesHandler:(id /* block */)a0;

@end
