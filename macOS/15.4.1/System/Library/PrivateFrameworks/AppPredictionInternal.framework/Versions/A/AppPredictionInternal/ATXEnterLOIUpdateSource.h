@class NSUserDefaults, NSDate;
@protocol ATXLocationManagerProtocol, ATXUpdatePredictionsDelegate;

@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource>

@property (retain, nonatomic) NSDate *now;
@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (readonly, nonatomic) id<ATXLocationManagerProtocol> locationManager;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_start;
- (void)_registerNotificationListeners;
- (id)_regionIdentifierForLocationOfInterestType:(long long)a0;
- (id)initWithLocationManager:(id)a0 userDefaults:(id)a1;
- (void)locationManagerDidEnterRegion:(id)a0;
- (void)locationManagerDidExitRegion:(id)a0;
- (void)updateMonitoredRegionsIfNecessaryWithReply:(id /* block */)a0;

@end
