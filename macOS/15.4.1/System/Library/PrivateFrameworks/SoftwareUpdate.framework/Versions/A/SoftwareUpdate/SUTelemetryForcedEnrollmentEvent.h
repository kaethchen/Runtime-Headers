@class NSString;

@interface SUTelemetryForcedEnrollmentEvent : SUTelemetryEvent <SUTelemetryReportable>

@property NSString *eventSubtype;
@property BOOL isAutoCheckForUpdatesManaged;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)createReportableDictionary;
- (id)initWithSubtype:(id)a0;

@end
