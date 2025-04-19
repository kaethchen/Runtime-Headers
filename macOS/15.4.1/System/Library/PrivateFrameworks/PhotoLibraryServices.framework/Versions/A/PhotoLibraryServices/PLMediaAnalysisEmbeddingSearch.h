@interface PLMediaAnalysisEmbeddingSearch : NSObject

+ (double)_scalingFactorForNumberOfProbes;
+ (unsigned long long)_minimumNumberOfProbes;
+ (id)_numberOfProbesForEmbeddingSearchWithLimit:(int)a0;
+ (id)_searchWithEmbeddings:(id)a0 photoLibraryURL:(id)a1 searchOptions:(id)a2 numberOfProbes:(id)a3 error:(id *)a4;
+ (id)fetchEmbeddingsWithAssetUUIDs:(id)a0 photoLibraryURL:(id)a1 error:(id *)a2;
+ (BOOL)prewarmSearchWithConcurrencyLimit:(unsigned long long)a0 photoLibraryURL:(id)a1 error:(id *)a2;
+ (id)searchWithEmbeddings:(id)a0 photoLibraryURL:(id)a1 searchOptions:(id)a2 error:(id *)a3;

@end
