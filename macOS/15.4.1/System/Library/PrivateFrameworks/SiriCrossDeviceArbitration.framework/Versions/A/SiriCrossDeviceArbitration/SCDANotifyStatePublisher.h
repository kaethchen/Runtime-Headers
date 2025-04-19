@class NSObject;
@protocol OS_dispatch_queue;

@interface SCDANotifyStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_register;
- (id)initWithName:(id)a0 queue:(id)a1;
- (BOOL)_getState:(unsigned long long *)a0 withToken:(int)a1;
- (void)_notifyWithState:(unsigned long long)a0;
- (BOOL)_setState:(unsigned long long)a0 withToken:(int)a1;
- (void)_unregister;
- (void)publishState:(unsigned long long)a0;
- (void)publishStateWithBlock:(id /* block */)a0;

@end
