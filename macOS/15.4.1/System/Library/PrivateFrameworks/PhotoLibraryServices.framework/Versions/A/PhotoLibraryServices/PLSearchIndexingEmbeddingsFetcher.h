@class NSError, NSMutableDictionary;

@interface PLSearchIndexingEmbeddingsFetcher : NSObject {
    NSMutableDictionary *_mutableEmbeddingsByUUID;
    NSError *_prefetchError;
}

- (id)init;
- (void).cxx_destruct;
- (id)embeddingForAsset:(id)a0 indexingContext:(id)a1 allowFetchIfMissing:(BOOL)a2;
- (void)prefetchEmbeddingsForAssets:(id)a0 indexingContext:(id)a1;

@end
