@class BMStream;

@interface ATXHeroPoiManager : NSObject {
    BMStream *_poiCategoryStream;
}

- (void).cxx_destruct;
- (id)cachedPoiCategory;
- (id)currentPoiCategory;
- (void)donateHeroPoiPredictions:(id)a0;
- (void)donatePoiCategoryToBiome:(id)a0 rank:(unsigned long long)a1 date:(id)a2;
- (void)logCompletion:(id)a0;
- (id)mostRecentHighestRankedPoiCategory:(id)a0;
- (id)poiCategoryEventsWithStreamPublisher:(id)a0;
- (id)poiCategoryPublisherBookmark;
- (id)poiCategoryStream;
- (id)poiCategoryStreamPublisher;

@end
