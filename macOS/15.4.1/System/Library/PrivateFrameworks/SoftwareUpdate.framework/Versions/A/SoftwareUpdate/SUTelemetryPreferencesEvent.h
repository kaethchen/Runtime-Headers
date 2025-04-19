@class NSString, SUSharedPrefs;

@interface SUTelemetryPreferencesEvent : SUTelemetryEvent <SUTelemetryReportable>

@property SUSharedPrefs *sharedPrefs;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)init;
- (id)_volumeGroupCount;
- (id)createReportableDictionary;
- (id)initWithSharedPrefs:(id)a0;

@end
