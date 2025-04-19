@class NSMutableDictionary, NSString;

@interface AMServicesController : NSObject <NSServicesMonitorObserver>

@property (class, readonly, nonatomic) AMServicesController *sharedServicesController;

@property (retain, nonatomic) NSMutableDictionary *_servicesMonitorsByURL;
@property (retain, nonatomic) NSMutableDictionary *_completionHandlersByURL;
@property (retain, nonatomic) NSMutableDictionary *_timersByURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)servicesDidChange;
- (void)_timeoutTimerFired:(id)a0;
- (BOOL)_activateServiceAction:(id)a0 error:(id *)a1;
- (void)_clearServiceActivationStateAtURL:(id)a0;
- (void)_serviceFoundForServicesMonitor:(id)a0 url:(id)a1;
- (BOOL)activateServiceAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
