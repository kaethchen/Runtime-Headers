@interface TFDiagnosticFileCollector : NSObject {
    void /* unknown type, empty encoding */ diagnosticDumpDir;
    void /* unknown type, empty encoding */ diagnosticFileProviders;
    void /* unknown type, empty encoding */ diagnosticFilesNotificationName;
    void /* unknown type, empty encoding */ diagnosticFileListURL;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ logger;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addDiagnosticFileProvider:(id)a0;
- (id)initWithDiagnosticDumpDir:(id)a0 diagnosticDumpNotificationName:(id)a1 diagnosticFilesNotificationName:(id)a2 diagnosticFileListURL:(id)a3 log:(id)a4;
- (void)removeDiagnosticFileProvider:(id)a0;

@end
