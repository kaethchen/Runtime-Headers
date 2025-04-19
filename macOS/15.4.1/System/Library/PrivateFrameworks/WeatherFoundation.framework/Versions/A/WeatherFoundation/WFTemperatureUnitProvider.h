@class NSObject;
@protocol OS_dispatch_queue;

@interface WFTemperatureUnitProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerQueue;
@property (readonly) int userTemperatureUnit;

- (id)init;
- (void).cxx_destruct;
- (void)_postDidChangeUnitDefaultsPreference;
- (int)_providerQueue_changeUnit:(int)a0;
- (int)_providerQueue_readUnit;
- (void)fetchTemperatureUnitWithCompletionHandler:(id /* block */)a0;
- (void)replaceUnit:(int)a0;
- (void)replaceUnit:(int)a0 completionHandler:(id /* block */)a1;

@end
