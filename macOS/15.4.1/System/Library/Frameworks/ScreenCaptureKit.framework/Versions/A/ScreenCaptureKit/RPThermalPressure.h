@protocol RPThermalPressureDelegate;

@interface RPThermalPressure : NSObject {
    int _thermalNotificationToken;
    int _thermalLevel;
    int _newThermalLevel;
}

@property (weak, nonatomic) id<RPThermalPressureDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)stopMonitoring;
- (long long)convertThermalPressureLevel:(int)a0;
- (long long)getCurrentPressureLevel;
- (int)getStateWithToken:(int)a0;
- (void)thermalPressureDidChangeWithThermalLevel:(int)a0;

@end
