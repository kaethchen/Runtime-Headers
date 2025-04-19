@class NSObject, _AXFResourceMonitor;
@protocol OS_dispatch_source, OS_dispatch_queue, AXFProcessManagerDelegate;

@interface AXFProcessManager : NSObject

@property (retain, nonatomic) _AXFResourceMonitor *_CPUMonitor;
@property (retain, nonatomic) _AXFResourceMonitor *_memoryMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_processManagerDispatchQueue;
@property (weak, nonatomic) id<AXFProcessManagerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)stopObserving;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_checkCPUStatus;
- (void)_checkMemoryStatus;
- (void)_checkProcessInfo;
- (void)_signalProcessDidExceedCPUUsageThreshold:(id)a0;
- (void)_signalProcessDidExceedMemoryThreshold:(id)a0;
- (void)_startObservingPID:(int)a0 cpuThreshold:(double)a1 duration:(double)a2;
- (void)_startObservingPID:(int)a0 memoryThreshold:(double)a1 duration:(double)a2;
- (void)startObservingProcessExceedingCPUThreshold:(double)a0 duration:(double)a1;
- (void)startObservingProcessExceedingMemory:(double)a0 duration:(double)a1;
- (void)stopObservingAllProcesses;
- (void)stopObservingPID:(int)a0;

@end
