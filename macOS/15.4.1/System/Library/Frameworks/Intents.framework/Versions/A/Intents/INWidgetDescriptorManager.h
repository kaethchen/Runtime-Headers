@class NSObject, NSSet, NSMutableArray, INWatchdogTimer;
@protocol OS_dispatch_queue;

@interface INWidgetDescriptorManager : NSObject {
    BOOL _observing;
    NSMutableArray *_completionHandlers;
    INWatchdogTimer *_watchdogTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSSet *widgetDescriptors;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_notifyCompletionHandlersWithWidgetDescriptors:(id)a0;
- (void)_startObservingDescriptors;
- (void)getDescriptorForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDescriptorsWithCompletionHandler:(id /* block */)a0;

@end
