@interface VCPAnalysisProgressQuery : NSObject

+ (int)_scanPhotoLibrary:(id)a0 taskID:(unsigned long long)a1 statistics:(id *)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
+ (unsigned long long)_vipStatusForPhotoLibrary:(id)a0 type:(unsigned long long)a1;
+ (BOOL)_screenProgress;
+ (unsigned long long)_countAnalysisWithAssetBatch:(id)a0 taskID:(unsigned long long)a1;
+ (unsigned long long)_countFaceAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countFailuresWithAssetBatch:(id)a0 database:(id)a1 taskID:(unsigned long long)a2;
+ (unsigned long long)_countFullImageAnalysisWithAssetBatch:(id)a0;
+ (void)_countMediaAnalysisWithAssetBatch:(id)a0 database:(id)a1 analyzedCount:(unsigned long long *)a2 completeAnalyzedCount:(unsigned long long *)a3 partialAnalyzedCount:(unsigned long long *)a4;
+ (unsigned long long)_countOCRAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countPECAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countSceneAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countVisualSearchAnalysisWithAssetBatch:(id)a0;
+ (id)_processedPredicateForTaskID:(unsigned long long)a0;
+ (int)_queryProgressDetailExpress:(id *)a0 photoLibrary:(id)a1 taskID:(unsigned long long)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
+ (unsigned long long)countAllAssetsForTaskID:(unsigned long long)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (unsigned long long)countProcessedAssetsForTaskID:(unsigned long long)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (int)queryAnalysisProgress:(float *)a0 photoLibrary:(id)a1 taskID:(unsigned long long)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
+ (int)queryCachedFaceAnalysisProgress:(id *)a0 photoLibrary:(id)a1;
+ (int)queryProgressDetail:(id *)a0 photoLibrary:(id)a1 taskID:(unsigned long long)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;
+ (int)queryVideoTotalDuration:(double *)a0 processedDuration:(double *)a1 failedDuration:(double *)a2 photoLibrary:(id)a3 taskID:(unsigned long long)a4 cancelOrExtendTimeoutBlock:(id /* block */)a5;
+ (void)reportProgressForPhotoLibrary:(id)a0 taskID:(unsigned long long)a1 logMessage:(id)a2 cancelOrExtendTimeoutBlock:(id /* block */)a3;

@end
