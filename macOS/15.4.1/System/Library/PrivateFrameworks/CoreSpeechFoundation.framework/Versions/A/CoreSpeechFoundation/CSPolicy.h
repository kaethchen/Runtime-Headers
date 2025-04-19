@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSPolicy : NSObject <CSEventMonitorDelegate> {
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (void)setCallback:(id /* block */)a0;
- (void)addConditions:(id /* block */)a0;
- (void)CSEventMonitorDidReceiveEvent:(id)a0;
- (void)notifyCallbackWithOption:(unsigned long long)a0;
- (void)subscribeEventMonitor:(id)a0;
- (BOOL)_checkAllConditionsEnabled;
- (void)notifyCallback:(BOOL)a0 option:(unsigned long long)a1;

@end
