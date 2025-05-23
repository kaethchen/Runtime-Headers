@class RTPlatform, RTDefaultsManager, RTDistanceCalculator, RTLearnedLocationStore, RTPlaceTypeClassifierMetricsCalculator, RTBiomeManager, NSString;

@interface RTPlaceTypeClassifierExpertInferred : NSObject <RTPlaceTypeProvider>

@property (retain, nonatomic) RTBiomeManager *biomeManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceTypeClassifierMetricsCalculator *placeTypeClassifierMetricsCalculator;
@property (retain, nonatomic) RTPlatform *platform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
