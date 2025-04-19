@class NSUserDefaults;
@protocol MTStopwatchManagerProtocol;

@interface MTLegacyStopwatchMigrator : NSObject

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) id<MTStopwatchManagerProtocol> manager;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) double currentInterval;

- (void).cxx_destruct;
- (BOOL)needsMigration;
- (void)eraseLocalDefaults;
- (id)generateStopwatchFromDefaults;
- (id)initWithDefaults:(id)a0 manager:(id)a1;
- (void)loadInitialState;
- (id)migrateLegacyStopwatch;

@end
