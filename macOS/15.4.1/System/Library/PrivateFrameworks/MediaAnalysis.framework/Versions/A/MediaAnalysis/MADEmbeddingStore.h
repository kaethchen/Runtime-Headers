@interface MADEmbeddingStore : NSObject

+ (id)fetchEmbeddingsWithAssetUUIDs:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)a0 photoLibraryURL:(id)a1 error:(id *)a2;
+ (id)searchWithEmbeddings:(id)a0 photoLibraryURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)embeddingStoreDirectoryForPhotoLibrary:(id)a0;
+ (BOOL)includeAudioFusedVideoEmbeddings;
+ (id)preferredImageEmbeddingsForAssetUUID:(id)a0 fromImageEmbeddingResults:(id)a1 error:(id *)a2;
+ (id)preferredVideoEmbeddingsForAssetUUID:(id)a0 fromVideoEmbeddingResults:(id)a1 audioFusedVideoEmbeddingResults:(id)a2 summarizedVideoEmbeddingResults:(id)a3 error:(id *)a4;

@end
