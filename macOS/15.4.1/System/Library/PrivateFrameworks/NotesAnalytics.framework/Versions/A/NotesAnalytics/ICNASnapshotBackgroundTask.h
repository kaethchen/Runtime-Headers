@class ICNASnapshotReporter, NSString, ICNAEventReporter, ICNAController;

@interface ICNASnapshotBackgroundTask : NSObject <ICBackgroundTask>

@property (readonly, nonatomic) BOOL shouldStartSession;
@property (readonly, nonatomic) ICNAController *analyticsController;
@property (readonly, nonatomic) ICNAEventReporter *eventReporter;
@property (readonly, nonatomic) ICNASnapshotReporter *snapshotReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeActivityScheduler;

- (void).cxx_destruct;
- (void)didRegister:(BOOL)a0;
- (void)handleTaskExpiration;
- (void)runTaskWithCompletion:(id /* block */)a0;
- (id)initWithAnalyticsController:(id)a0 eventReporter:(id)a1 snapshotReporter:(id)a2;

@end
