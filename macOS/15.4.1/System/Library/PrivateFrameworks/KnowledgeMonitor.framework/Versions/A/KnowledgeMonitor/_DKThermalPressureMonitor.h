@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;

+ (id)entitlements;
+ (id)eventStream;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (id)loadState;
- (void)saveState;
- (void)setCurrentThermalLevel:(int)a0;
- (void)getThermalPressureLevelWithToken:(int)a0;

@end
