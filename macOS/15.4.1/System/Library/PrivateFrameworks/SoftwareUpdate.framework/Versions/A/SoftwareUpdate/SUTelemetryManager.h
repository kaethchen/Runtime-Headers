@class SUTelemetryReporter;

@interface SUTelemetryManager : NSObject

@property (retain, nonatomic) SUTelemetryReporter *reporter;

+ (id)sharedManager;
+ (id)advancedPreferencesEvent;
+ (id)downloadEvent;
+ (id)installEvent;
+ (id)preferencesEvent;
+ (id)scanEvent;

- (void)dealloc;
- (id)init;
- (void)reportEventName:(id)a0 telemetryServer:(long long)a1 reportableDictionary:(id)a2 className:(id)a3;
- (id)_formatReportableDictionary:(id)a0 className:(id)a1;
- (id)initWithReporter:(id)a0;
- (void)reportEvent:(id)a0;
- (void)reportPreferences;

@end
