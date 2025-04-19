@class RTMapsSupportManager, RTPlaceTypeClassifierMetricsCalculator, RTLearnedLocationStore, NSString;

@interface RTPlaceTypeClassifierExpertMaps : NSObject <RTPlaceTypeProvider>

@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_convertPinnedPlacesToLearnedPlaces:(id)a0 error:(id *)a1;
- (id)_fetchPinnedPlacesWithKnownPlacesTypesAndError:(id *)a0;
- (id)classifyWithError:(id *)a0;
- (id)initWithLearnedLocationStore:(id)a0 mapsSupportManager:(id)a1 placeTypeClassifierMetricsCalculator:(id)a2;

@end
