@protocol OSIPowerButtonMonitorDelegate;

@interface OSIPowerButtonMonitor : NSObject

@property (weak) id<OSIPowerButtonMonitorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_registerForPowerButtonHIDEvent;

@end
