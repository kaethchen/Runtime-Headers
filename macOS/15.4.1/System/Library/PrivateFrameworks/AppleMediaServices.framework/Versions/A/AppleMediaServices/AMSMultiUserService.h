@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, AMSMultiUserServiceProtocol;

@interface AMSMultiUserService : NSObject <AMSMachService>

@property (class, retain) NSXPCConnection *sharedConnection;
@property (class, readonly) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue;
@property (class, readonly) id<AMSMultiUserServiceProtocol> proxyObject;
@property (class, readonly) id<AMSMultiUserServiceProtocol> proxyObjectAsync;
@property (class, readonly) NSString *machServiceName;
@property (class, readonly) NSXPCInterface *serviceInterface;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createXPCConnection;
+ (BOOL)isConnectionEntitled:(id)a0;


@end
