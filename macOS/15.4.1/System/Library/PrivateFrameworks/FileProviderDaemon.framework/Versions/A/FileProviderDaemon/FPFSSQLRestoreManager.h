@class FPRTCReportingSession, NSString, _TtC18FileProviderDaemon20FPFSSQLRestoreEngine;

@interface FPFSSQLRestoreManager : NSObject {
    NSString *_backupBuild;
    NSString *_restoreType;
}

@property (retain, nonatomic) _TtC18FileProviderDaemon20FPFSSQLRestoreEngine *restoreEngine;
@property (readonly, nonatomic) FPRTCReportingSession *rtcReportingDatabase;
@property (readonly, nonatomic) FPRTCReportingSession *rtcReportingPurgency;
@property (readonly, nonatomic) BOOL cleanupOnSuccess;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0;
- (id)initWithUserURL:(id)a0 fromBuild:(id)a1 restoreType:(id)a2 cleanupOnSuccess:(BOOL)a3;
- (void)reportDatabaseRestoreCompletionTelemetryWithError:(id)a0 atStep:(id)a1;
- (void)reportPurgencyRestoreCompletionTelemetryWithError:(id)a0;
- (void)restoreWithCompletionHandler:(id /* block */)a0;

@end
