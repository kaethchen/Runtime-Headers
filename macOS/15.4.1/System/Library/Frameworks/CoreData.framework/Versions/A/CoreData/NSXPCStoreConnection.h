@class NSXPCStore, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface NSXPCStoreConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCStore *_store;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)initForStore:(id)a0;

@end
