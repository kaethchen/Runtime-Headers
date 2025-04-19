@class NSString, NSXPCConnection;
@protocol WMWeatherStoreProtocol;

@interface WMWeatherStore : NSObject <WMWeatherStoreProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) id<WMWeatherStoreProtocol> remoteWeatherStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedWeatherStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)weatherForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 atDate:(id)a1 result:(id /* block */)a2;
- (void)almanacWeatherForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 atDate:(id)a1 result:(id /* block */)a2;
- (void)currentConditionsForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 result:(id /* block */)a1;
- (void)currentDailyForecastForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 result:(id /* block */)a1;
- (void)currentHourlyForecastForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 result:(id /* block */)a1;
- (void)forecastForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 atDate:(id)a1 result:(id /* block */)a2;
- (void)historicalWeatherForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 atDate:(id)a1 result:(id /* block */)a2;

@end
