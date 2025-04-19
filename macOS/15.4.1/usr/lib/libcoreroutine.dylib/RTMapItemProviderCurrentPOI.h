@class RTMapItemProviderCurrentPOIParameters, NSString, RTPlaceInferenceQueryStore, RTVisitStore;

@interface RTMapItemProviderCurrentPOI : RTMapItemProviderBase <RTMapItemProvider>

@property (readonly, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (readonly, nonatomic) RTVisitStore *visitStore;
@property (readonly, copy, nonatomic) RTMapItemProviderCurrentPOIParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 placeInferenceQueryStore:(id)a2 visitStore:(id)a3;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 placeInferenceQueryStore:(id)a2 visitStore:(id)a3 parameters:(id)a4;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;

@end
