@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AMSCommerceService;

@interface AMSCommerceService : NSObject

@property (class, retain) NSXPCConnection *sharedConnection;
@property (class, readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (class, readonly) id<AMSCommerceService> proxyObject;
@property (class, readonly) id<AMSCommerceService> proxyObjectAsync;

+ (id)_createXPCConnection;

@end
