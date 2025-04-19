@class NSString, HDDaemon, HDPeriodicActivity;

@interface HDDatabasePruningCoordinator : NSObject <HDDiagnosticObject, HDProfileReadyObserver, HDPeriodicActivityDelegate> {
    HDDaemon *_daemon;
    HDPeriodicActivity *_activity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (id)diagnosticDescription;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)profileDidBecomeReady:(id)a0;

@end
