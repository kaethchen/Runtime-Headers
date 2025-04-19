@interface _TtCC17PreviewsOSSupport19CrashReportListener13ObserverProxy : NSObject <OSADiagnosticObserver> {
    void /* unknown type, empty encoding */ diagnosticsLogHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)didWriteDiagnosticLog:(id)a0 logId:(id)a1 logFilePath:(id)a2 logInfo:(id)a3 error:(id)a4;
- (void)willWriteDiagnosticLog:(id)a0 logId:(id)a1 logInfo:(id)a2;

@end
