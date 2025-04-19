@class CLSSceneTaxonomyHierarchy, NSMutableDictionary;

@interface PGCurationCriteriaFactory : NSObject {
    NSMutableDictionary *_holidayServiceByLocale;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}

- (id)init;
- (void).cxx_destruct;
- (id)_performanceCriteriaWithClient:(unsigned long long)a0;
- (id)_winterSportCriteriaWithClient:(unsigned long long)a0;
- (id)_anniversaryCriteriaWithPersonLocalIdentifier:(id)a0 client:(unsigned long long)a1;
- (id)_beachingCriteriaWithClient:(unsigned long long)a0;
- (id)_birthdayCriteriaWithPersonLocalIdentifiers:(id)a0 client:(unsigned long long)a1;
- (id)_breakfastCriteriaWithClient:(unsigned long long)a0;
- (id)_climbingCriteriaWithClient:(unsigned long long)a0;
- (id)_compulsoryRequiredTraitsFromBaseSceneNames:(id)a0 leafSceneNames:(id)a1;
- (id)_concertCriteriaWithClient:(unsigned long long)a0;
- (id)_dinnerCriteriaWithClient:(unsigned long long)a0;
- (id)_divingCriteriaWithClient:(unsigned long long)a0;
- (id)_entertainmentCriteriaWithClient:(unsigned long long)a0;
- (id)_festivalCriteriaWithClient:(unsigned long long)a0;
- (id)_hikingCriteriaWithClient:(unsigned long long)a0;
- (id)_holidayEventCriteriaWithGraph:(id)a0 featureNodes:(id)a1 client:(unsigned long long)a2;
- (id)_longTripCriteriaWithClient:(unsigned long long)a0;
- (id)_lunchCriteriaWithClient:(unsigned long long)a0;
- (id)_memoriesRestaurantScenesTrait;
- (id)_museumCriteriaWithClient:(unsigned long long)a0;
- (id)_nightOutCriteriaWithClient:(unsigned long long)a0;
- (id)_sceneNamesFromBaseSceneNames:(id)a0 leafSceneNames:(id)a1;
- (id)_searchFallCriteria;
- (id)_searchRestaurantCompulsoryScenesTrait;
- (id)_searchRestaurantScenesTrait;
- (id)_searchSpringCriteria;
- (id)_searchSummerCriteria;
- (id)_searchWinterCriteria;
- (id)_shortTripCriteriaWithClient:(unsigned long long)a0;
- (id)_sportEventCriteriaWithClient:(unsigned long long)a0;
- (id)_tripScenesTrait;
- (id)_weddingCriteriaWithClient:(unsigned long long)a0;
- (id)curationCriteriaWithCollection:(id)a0 meaningLabel:(id)a1 inGraph:(id)a2 client:(unsigned long long)a3;
- (id)curationCriteriaWithMeaningLabel:(id)a0 featureNodes:(id)a1 inGraph:(id)a2 client:(unsigned long long)a3;
- (id)curationCriteriaWithSeasonName:(id)a0 client:(unsigned long long)a1;
- (id)foodieCurationCriteriaWithClient:(unsigned long long)a0;
- (id)foodieCurationCriteriaWithPersonLocalIdentifier:(id)a0 client:(unsigned long long)a1;
- (id)holidayServiceWithGraph:(id)a0;
- (id)petCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1 curationContext:(id)a2;
- (id)tripCurationCriteriaWithCollection:(id)a0 client:(unsigned long long)a1;

@end
