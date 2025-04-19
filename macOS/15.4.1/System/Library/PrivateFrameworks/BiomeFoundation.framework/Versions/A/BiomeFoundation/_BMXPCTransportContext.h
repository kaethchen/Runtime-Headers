@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _BMXPCTransportContext : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (weak) NSObject<OS_xpc_object> *connection;
@property (copy) id /* block */ messageHandler;
@property (copy) id /* block */ errorHandler;
@property (retain) NSMutableDictionary *exportedUserInfo;
@property (retain) NSDictionary *remoteUserInfo;

- (void).cxx_destruct;

@end
