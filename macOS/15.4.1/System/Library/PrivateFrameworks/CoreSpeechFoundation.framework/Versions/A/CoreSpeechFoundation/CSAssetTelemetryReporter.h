@interface CSAssetTelemetryReporter : NSObject

+ (id)sharedReporter;

- (void)reportAssetMapFailTelemetryForError:(id)a0 assetSpecifier:(id)a1 assetConfigVersion:(id)a2;
- (void)reportAssetMapLatencyTelemetry:(double)a0 assetSpecifier:(id)a1 assetConfigVersion:(id)a2;
- (void)submitSecureAssetMapFailDiagnosticReportForError:(id)a0;

@end
