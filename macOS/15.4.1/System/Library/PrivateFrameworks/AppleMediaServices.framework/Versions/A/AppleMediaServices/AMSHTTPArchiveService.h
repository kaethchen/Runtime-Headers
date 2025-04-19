@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain) NSXPCConnection *connection;
@property (copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_createRemoteConnection;
- (id)_createProxy;
- (void)_removeRemoteConnection;

@end
