@class WDDiagnosticFileLogger, NSMutableDictionary;

@interface WDDiagnosticUtilities : NSObject {
    WDDiagnosticFileLogger *_fileLoggerForGlobalDiagnostics;
    NSMutableDictionary *_fileLoggersPerSession;
}

@property (nonatomic) BOOL globalDiagnosticsEnabled;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)flushPendingWrites;
- (BOOL)diagnosticsEnabledForSession:(id)a0;
- (void)logHTTPRequest:(id)a0 sessionIdentifier:(id)a1;
- (void)logHTTPResponse:(id)a0 sessionIdentifier:(id)a1;
- (void)logInitiatingHTTPRequest:(id)a0 sessionIdentifier:(id)a1;
- (void)logMessageForSession:(id)a0 withFormat:(id)a1;
- (void)logProtocolMessageReceive:(id)a0 sessionIdentifier:(id)a1;
- (void)logProtocolMessageSend:(id)a0 sessionIdentifier:(id)a1;
- (void)setDiagnosticsEnabled:(BOOL)a0 forSession:(id)a1;
- (BOOL)shouldLogDiagnosticMessages;

@end
