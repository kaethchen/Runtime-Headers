@class NSString, NSArray, WFWeatherStoreService, WFQueryDispatcher, NSMutableArray, NSObject, WFTemperatureUnitProvider, NSMapTable;
@protocol OS_dispatch_queue;

@interface WeatherService : NSObject <WeatherServiceProtocol, WeatherServicePrivateProtocol> {
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (retain) WFWeatherStoreService *internalService;
@property (retain) WFQueryDispatcher *queryDispatcher;
@property (retain) NSMapTable *clientDictionary;
@property (readonly, nonatomic) NSArray *clients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) WFTemperatureUnitProvider *temperatureUnitProvider;

+ (id)sharedService;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)cancelTaskWithIdentifier:(id)a0;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (void)addClient:(id)a0 forPid:(int)a1;
- (void)airQualityForLocation:(id)a0 locale:(id)a1 options:(id)a2 taskIdentifier:(id)a3;
- (id)clientForPid:(int)a0;
- (void)dailyForecastForLocation:(id)a0 locale:(id)a1 taskIdentifier:(id)a2;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)a0;
- (void)forecast:(unsigned long long)a0 forLocation:(id)a1 locale:(id)a2 taskIdentifier:(id)a3;
- (void)forecast:(unsigned long long)a0 forLocation:(id)a1 withUnits:(int)a2 locale:(id)a3 taskIdentifier:(id)a4;
- (void)forecast:(unsigned long long)a0 forLocation:(id)a1 withUnits:(int)a2 locale:(id)a3 taskIdentifier:(id)a4 requestOptions:(id)a5;
- (void)forecastForLocation:(id)a0 locale:(id)a1 onDate:(id)a2 options:(id)a3 taskIdentifier:(id)a4;
- (void)hourlyForecastForLocation:(id)a0 locale:(id)a1 taskIdentifier:(id)a2;
- (void)invalidateCache:(id)a0;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 taskIdentifier:(id)a1;
- (void)locationForSearchCompletion:(id)a0 taskIdentifier:(id)a1;
- (void)locationForString:(id)a0 taskIdentifier:(id)a1;
- (void)queryDispatcherDidReceiveResponse:(id)a0 identifier:(id)a1;
- (void)reachabilityConfigurationForIdentifier:(id)a0;
- (void)replaceTemperatureUnitWith:(int)a0 identifier:(id)a1;
- (void)temperatureUnitWithIdentifier:(id)a0;

@end
