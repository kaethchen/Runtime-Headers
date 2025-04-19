@interface PLAssetComputeSyncPayloadHelper : NSObject

+ (id)mediaAnalysisPayloadDataForWrapperURL:(id)a0;
+ (id)mediaAnalysisPayloadDataForWrapperData:(id)a0;

- (BOOL)applyComputeSyncWrapperData:(id)a0 toAsset:(id)a1 error:(id *)a2;
- (id)assetPayloadForComputeSyncWrapperData:(id)a0 payloadID:(id)a1 error:(id *)a2;
- (id)computeSyncWrapperDataForAsset:(id)a0 mediaAnalysisPayload:(id)a1 analysisStage:(short)a2 error:(id *)a3;
- (id)computeSyncWrapperURLForAsset:(id)a0 analysisStage:(short)a1;

@end
