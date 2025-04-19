@class RTLocationManager, RTPlaceTypeClassifierMetricsCalculator, NSObject, RTPlatform, RTVisitManager, RTMapsSupportManager, RTBiomeManager, RTDefaultsManager, RTContactsManager, RTDistanceCalculator, RTLearnedLocationStore, RTMapServiceManager;
@protocol OS_dispatch_queue;

@interface RTPlaceTypeClassifier : NSObject

@property (retain, nonatomic) RTBiomeManager *biomeManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (id)_convertToIdToLearnedPlace:(id)a0;
- (id)_getClosestLearnedPlacesAtDestination:(id)a0 source:(id)a1 threshold:(double)a2 error:(id *)a3;
- (BOOL)_logExpertClassifications:(id)a0 sourceNames:(id)a1;
- (BOOL)classifyWithError:(id *)a0;
- (id)coalescePlacesFromExperts:(id)a0;
- (id)coalescePlacesFromSourcesOfTruth:(id)a0 sourceOfTruthNames:(id)a1;
- (void)donateInferredPlaces:(id)a0;
- (id)getClassificationsFromExperts:(id)a0 error:(id *)a1;
- (id)getExperts;
- (id)getStoredPlacesWithError:(id *)a0;
- (id)initWithBiomeManager:(id)a0 contactsManager:(id)a1 defaultsManager:(id)a2 distanceCalculator:(id)a3 learnedLocationStore:(id)a4 locationManager:(id)a5 mapServiceManager:(id)a6 mapsSupportManager:(id)a7 placeTypeClassifierMetricsCalculator:(id)a8 platform:(id)a9 queue:(id)a10 visitManager:(id)a11;
- (BOOL)isRottedMeCard:(id)a0 inferredPlace:(id)a1;
- (id)mergeExistingPlaces:(id)a0 intoUpdatedPlace:(id)a1 typesInMeCard:(id)a2;
- (BOOL)processExpertClassifications:(id)a0 error:(id *)a1;
- (id)replaceBusinessMapItemWithReverseGeocodedMapItemForHome:(id)a0;
- (BOOL)updatePlaces:(id)a0 error:(id *)a1;

@end
