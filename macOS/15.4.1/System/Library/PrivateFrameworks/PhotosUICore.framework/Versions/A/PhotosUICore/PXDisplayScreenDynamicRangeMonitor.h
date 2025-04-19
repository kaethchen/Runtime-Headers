@class NSString, NSTimer;

@interface PXDisplayScreenDynamicRangeMonitor : PXObservable <PXChangeObserver> {
    NSTimer *_displayEDRMonitorTimer;
}

@property (readonly, copy, nonatomic) id /* block */ screenProvider;
@property (nonatomic) BOOL screenSupportsHDR;
@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_monitorDisplayEDRHeadroom:(id)a0;
- (BOOL)_currentlySupportsHDRForScreen:(id)a0;
- (BOOL)_isHDRCurrentlySupportedForScreen:(id)a0;
- (BOOL)_isHDRPotentiallySupportedForScreen:(id)a0;
- (void)_resumeTimer;
- (void)_teardownTimer;
- (void)_updateScreenSupportHDR;
- (id)initWithAutomaticApplicationStateTracking:(BOOL)a0;
- (void)startMonitoringWithScreenProvider:(id /* block */)a0;

@end
