@class NSString, MCActivityMonitor;

@interface MCMonitoredOperation : NSOperation

@property (retain, nonatomic) MCActivityMonitor *parentMonitor;
@property (retain, nonatomic) MCActivityMonitor *monitor;
@property (readonly, copy, nonatomic) NSString *activityString;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)executeOperation;

@end
