@interface MusicUI.ArtworkPrefetchingController : NSObject <NSCollectionViewPrefetching> {
    void /* unknown type, empty encoding */ defaultCatalogMetricsProviding;
    void /* unknown type, empty encoding */ catalogMetricsProviding;
    void /* unknown type, empty encoding */ catalogProviding;
    void /* unknown type, empty encoding */ cachingContext;
    void /* unknown type, empty encoding */ numberOfSectionsToPrefetchAhead;
    void /* unknown type, empty encoding */ prefetchedSections;
}

- (id)init;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 cancelPrefetchingForItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;

@end
