@class SUProduct, NSError, NSString;

@interface SUTelemetryInstallEvent : SUTelemetryEvent <SUTelemetryReportable>

@property (retain) SUProduct *installProduct;
@property (retain) NSError *installError;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (void)dealloc;
- (void)addTelemetryForInstallFailure:(id)a0 installError:(id)a1;
- (void)addTelemetryForInstallSuccess:(id)a0;
- (id)createReportableDictionary;

@end
