@interface PEVideoTrimBurnInUtility : NSObject

+ (id)_fileType;
+ (id)burnInTrimToNewAsset:(id)a0 compositionController:(id)a1 asShotCompositionController:(id)a2 cinematographyScript:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
+ (id)_compositionControllerWithNormalizedTemporalAdjustmentsForBurnedInTrim:(id)a0 trimController:(id)a1 cinematographyScript:(id)a2 error:(id *)a3;
+ (void)_contentEditingInputFor:(id)a0 completion:(id /* block */)a1;
+ (void)_duplicateAsset:(id)a0 withNewRenderURL:(id)a1 asShotCompositionController:(id)a2 completion:(id /* block */)a3;
+ (id)_error:(long long)a0 description:(id)a1;
+ (id)_fileExtension;
+ (id)_renderComposition:(id)a0 toURL:(id)a1 completion:(id /* block */)a2;
+ (id)_renderURLForAssetFilename:(id)a0 error:(id *)a1;
+ (id)_trimOnlyCompositionControllerFor:(id)a0;

@end
