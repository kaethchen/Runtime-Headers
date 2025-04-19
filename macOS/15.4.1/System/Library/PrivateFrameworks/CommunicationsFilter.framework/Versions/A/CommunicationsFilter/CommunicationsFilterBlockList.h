@class CommunicationsFilterBlockListCache, NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CommunicationsFilterBlockList : NSObject {
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)_disconnect;
- (BOOL)_connect;
- (void)_disconnected;
- (id)_sendSynchronousXPCRequest:(id)a0;
- (void)_sendXPCRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)addItemForAllServices:(id)a0;
- (id)copyAllItems;
- (BOOL)isItemInList:(id)a0;
- (void)removeItemForAllServices:(id)a0;

@end
