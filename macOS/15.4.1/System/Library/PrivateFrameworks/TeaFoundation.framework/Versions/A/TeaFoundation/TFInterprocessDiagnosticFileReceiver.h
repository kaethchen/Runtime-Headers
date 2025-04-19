@interface TFInterprocessDiagnosticFileReceiver : NSObject {
    void /* unknown type, empty encoding */ interprocessDiagnosticFilesNotificationName;
    void /* unknown type, empty encoding */ diagnosticFileListURL;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ diagnosticFiles;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)diagnosticFileURLs;
- (id)initWithNotificationName:(id)a0 diagnosticFileListURL:(id)a1 log:(id)a2;

@end
