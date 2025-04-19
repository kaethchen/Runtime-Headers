@class PKInstallRequest, NSString, NSTask, PKInstallAnalyzer, NSObject;
@protocol OS_dispatch_source;

@interface PKInstallCommitManager : NSObject {
    PKInstallRequest *_installRequest;
    PKInstallAnalyzer *_analyzer;
    NSString *_pidPath;
    BOOL _suspendedSpotlight;
    NSObject<OS_dispatch_source> *_backupTimerSource;
    unsigned int _assertionID;
    NSTask *_monitorTask;
}

- (void)dealloc;
- (id)_commitCookiePath;
- (void)_startMonitor;
- (void)_waitUntilMonitorDone;
- (void)beginCommit;
- (void)endCommit;
- (id)initWithRequest:(id)a0 analyzer:(id)a1;

@end
