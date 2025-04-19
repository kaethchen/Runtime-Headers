@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface UVCPipeStatusMonitor : NSObject {
    NSSet *_statusListToMonitor;
    unsigned int _actionTriggerTimeoutInSec;
    id /* block */ _actionTriggerBlock;
    id /* block */ _actionHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)reportStatus:(int)a0;
- (id)initWithStatusListToMonitor:(id)a0 actionHandler:(id /* block */)a1 actionTriggerTimeoutInSec:(unsigned int)a2 queue:(id)a3;
- (void)scheduleActionTriggerBlock;
- (void)unscheduleActionTriggerBlock;

@end
