@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)initWithPreferences:(id)a0;
- (id)allCities;
- (id)citiesMatchingName:(id)a0;
- (void)removeAllCities;
- (void)pushCityPropertiesToPreferences;
- (void)_notifyNano;
- (unsigned long long)addCity:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (BOOL)canAddCity;
- (BOOL)checkIfCitiesModified;
- (id)citiesMatchingIdentifiers:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1 requireTimeZoneEquivalence:(BOOL)a2;
- (id)fixUpCityProperties:(id)a0;
- (void)loadCities;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeCity:(id)a0;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (void)saveCities;
- (id)updateALDataWithCity:(id)a0;
- (id)updatedDataForCityWithID:(id)a0;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;

@end
