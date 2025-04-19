@class NSString, NSError, NSArray;

@interface SUOSUTelemetrySplatRevokedEvent : SUOSUTelemetryEvent <SUTelemetryReportable>

@property (retain) NSString *revokedReason;
@property (retain) NSString *splatVersion;
@property (retain) NSError *rollbackError;
@property (retain) NSArray *responsibleProcesses;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (void).cxx_destruct;
- (id)createReportableDictionary;
- (void)addTelemetryWithError:(id)a0 revokedReason:(id)a1 splatVersion:(id)a2 responsibleProcesses:(id)a3;

@end
