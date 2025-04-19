@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface OS_remote_listening_service : NSObject {
    const char *service_name;
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_xpc_object> *properties;
    id /* block */ accept_block;
    NSMutableArray *proxies;
    OS_remote_listening_service *next;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)shouldEncryptSocketData;

@end
