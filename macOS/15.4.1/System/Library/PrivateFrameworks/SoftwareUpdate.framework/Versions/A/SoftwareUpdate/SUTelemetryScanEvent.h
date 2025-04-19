@class NSURL, NSString;

@interface SUTelemetryScanEvent : SUTelemetryEvent <SUTelemetryReportable>

@property (retain) NSURL *catalogURL;
@property BOOL isBackgroundScan;
@property double timeSinceLastScan;
@property double timeElapsed;
@property long long scanResult;
@property (readonly) NSString *eventName;
@property (readonly) long long telemetryServer;

- (void)dealloc;
- (void)addTelemetryWithResult:(long long)a0 catalogURL:(id)a1 isBackgroundScan:(BOOL)a2 timeElapsed:(double)a3 timeSinceLastScan:(double)a4;
- (id)createReportableDictionary;

@end
