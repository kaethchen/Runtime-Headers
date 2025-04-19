@class NSString;

@interface SUOSUTelemetryStartLogoutEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property BOOL result;
@property BOOL forceRestart;
@property BOOL nowIsLater;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)createReportableDictionary;
- (id)initWithResult:(BOOL)a0 forceRestart:(BOOL)a1 nowIsLater:(BOOL)a2;

@end
