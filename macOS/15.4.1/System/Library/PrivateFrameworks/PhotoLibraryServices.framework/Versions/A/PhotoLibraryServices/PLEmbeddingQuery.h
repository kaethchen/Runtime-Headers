@class NSString, PLEmbeddingVectorGenerator;

@interface PLEmbeddingQuery : NSObject

@property (readonly, nonatomic) PLEmbeddingVectorGenerator *embeddingVectorGenerator;
@property (nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) NSString *queryText;

- (void).cxx_destruct;
- (BOOL)_embeddingCompareObjectIsValidSearchResultForQuery:(id)a0 forEmbeddingCompareObject:(id *)a1 similarityThreshold:(double)a2;
- (id)_processSearchResults:(id)a0 embeddingModelTypes:(id)a1 sortAscending:(BOOL)a2;
- (void)executeEmbeddingSearchQueryWithSimilarityThreshold:(double)a0 embeddingModelTypes:(id)a1 scopedAssetUUIDs:(id)a2 dateFilter:(id)a3 psiDatabase:(id)a4 photoLibrary:(id)a5 queryDepersonalization:(unsigned long long)a6 enableRanking:(BOOL)a7 completion:(id /* block */)a8;
- (id)initWithQueryText:(id)a0;

@end
