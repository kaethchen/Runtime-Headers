@class NSUserDefaults;

@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject <HMDAppleMediaAccessorySensorManagerDataStore>

@property (retain, nonatomic) NSUserDefaults *defaults;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (void)saveSensorUUID:(id)a0;
- (void)fetchSensorUUIDWithCompletion:(id /* block */)a0;
- (void)saveSensorUUID:(id)a0 completion:(id /* block */)a1;

@end
