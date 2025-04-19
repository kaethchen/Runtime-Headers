@class NSDictionary, VSKAsset;

@interface MADComputeSyncPayloadResults : NSObject

@property (readonly, nonatomic) NSDictionary *fullAnalysisResults;
@property (readonly, nonatomic) VSKAsset *imageEmbeddingVSKAsset;
@property (readonly, nonatomic) short imageEmbeddingVersion;
@property (readonly, nonatomic) VSKAsset *videoEmbeddingVSKAsset;
@property (readonly, nonatomic) short videoEmbeddingVersion;

+ (id)fullAnalysisResultsFromAnalysisProto:(id)a0 asset:(id)a1 payloadData:(id)a2;
+ (id)payloadDataForAsset:(id)a0 targetStage:(short)a1 embeddingResults:(id)a2 fullAnalysisResults:(id)a3;
+ (id)resultsForAsset:(id)a0 payloadData:(id)a1;

- (void).cxx_destruct;
- (id)initWithFullAnalysisResults:(id)a0 imageEmbeddingVSKAsest:(id)a1 imageEmbeddingVersion:(short)a2 videoEmbeddingVSKAsset:(id)a3 videoEmbeddingVersion:(short)a4;

@end
