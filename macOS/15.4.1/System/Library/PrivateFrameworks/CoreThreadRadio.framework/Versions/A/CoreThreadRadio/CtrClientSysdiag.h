@class CtrClient;

@interface CtrClientSysdiag : NSObject {
    CtrClient *ctrClient;
}

- (void).cxx_destruct;
- (id)init:(const char *)a0;
- (BOOL)generateThreadDiagnosticsMonitorLogs;

@end
