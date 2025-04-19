@class NSString, NSBackgroundActivityScheduler, EDPersistence, NSObject;
@protocol OS_os_log, EFCancelable;

@interface EDSearchableIndexDiagnosticsController : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EFCancelable> stateCancelable;
@property (retain, nonatomic) NSBackgroundActivityScheduler *indexingDiagnosticsScheduler;
@property (weak, nonatomic) EDPersistence *persistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0;
- (void)_stopCollection;
- (id)_localDiagnosticsFromStatistics:(id)a0;
- (void)_logDebuggingDiagnostics:(id)a0 forKey:(id)a1;
- (void)_registerDebuggingDiagnosticsCaptureHandler;
- (id)_remoteDiagnosticsFromStatistics:(id)a0;
- (void)_startLoggingDebuggingDiagnostics;
- (void)_stopLoggingDebuggingDiagnostics;
- (void)_unregisterDebuggingDiagnosticsCaptureHandler;
- (void)scheduleRecurringActivity;

@end
