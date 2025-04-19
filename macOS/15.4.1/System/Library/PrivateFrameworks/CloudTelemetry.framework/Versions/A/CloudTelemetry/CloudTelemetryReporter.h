@interface CloudTelemetryReporter : NSObject {
    void /* unknown type, empty encoding */ connectionManager;
    void /* unknown type, empty encoding */ activeSendOneMessageCount;
    void /* unknown type, empty encoding */ activeSendOneMessageLimit;
    void /* unknown type, empty encoding */ xpcServiceXpcActivityStarted;
}

+ (BOOL)reportWithTeamID:(id)a0 eventType:(id)a1 event:(id)a2 allowCellularAccess:(BOOL)a3 allowExpensiveAccess:(BOOL)a4 bundleID:(id)a5 error:(id *)a6;
+ (id)_privacyLogs:(id *)a0;

- (id)init;
- (void).cxx_destruct;

@end
