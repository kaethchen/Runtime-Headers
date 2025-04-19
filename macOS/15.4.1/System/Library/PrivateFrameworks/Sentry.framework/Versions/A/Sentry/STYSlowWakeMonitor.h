@class STYWakeDiagnosticManager, STYWakeDetector;

@interface STYSlowWakeMonitor : NSObject <STYWakeDetectorDelegate> {
    STYWakeDetector *_wakeMonitor;
    STYWakeDiagnosticManager *_wakeDiagnosticManager;
    BOOL _lowerThresholdForWakeDiagnostics;
}

+ (void)_startMonitoring;
+ (void)continuePastReportsToSentry;
+ (void)monitorDetectedWake:(id)a0;
+ (void)monitorForever;
+ (void)monitorUntilNextWake;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)detectedWake:(id)a0;
- (BOOL)isWakeSlow:(id)a0;
- (void)missedBeginningOfWake;
- (void)recordSignpostsForWake:(id)a0;

@end
