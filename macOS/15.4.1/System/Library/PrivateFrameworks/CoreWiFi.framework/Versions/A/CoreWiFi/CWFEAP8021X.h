@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFEAP8021X : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (copy) id /* block */ eventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (void)__startEventMonitoring;
- (id)clientStatus:(id *)a0;
- (id)controlMode:(id *)a0;
- (id)controlState:(id *)a0;
- (BOOL)isMonitoringEvents;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (id)supplicantState:(id *)a0;

@end
