@class NSString;

@interface SUOSUTelemetryStartPostLogoutEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property BOOL nowIsLater;
@property BOOL opportunistic;
@property BOOL launchedDirectly;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (id)createReportableDictionary;
- (id)initWithNowIsLater:(BOOL)a0 opportunistic:(BOOL)a1 launchedDirectly:(BOOL)a2;

@end
