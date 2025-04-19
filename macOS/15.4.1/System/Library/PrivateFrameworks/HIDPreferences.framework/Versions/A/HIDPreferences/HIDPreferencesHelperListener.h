@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface HIDPreferencesHelperListener : NSObject {
    NSObject<OS_xpc_object> *_listener;
    NSMutableArray *_clients;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeClient:(id)a0;
- (void)acceptConnection:(id)a0 onQueue:(id)a1;
- (BOOL)setupListener;

@end
