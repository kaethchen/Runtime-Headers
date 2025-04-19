@class NSDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_nw_listener, LOMDeviceControllerRequestDelegate;

@interface LOMControllerConnection : NSObject

@property (retain) NSDictionary *attributes;
@property (retain) NSObject<OS_nw_listener> *listener;
@property (retain) NSMutableSet *connections;
@property (retain) NSObject<OS_dispatch_group> *connectionCancellationGroup;
@property (retain) NSObject<OS_dispatch_group> *listenerCancellationGroup;
@property BOOL suspended;
@property (weak, nonatomic) id<LOMDeviceControllerRequestDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)description;
- (void).cxx_destruct;
- (BOOL)activate;
- (void)cancel;
- (id)initWithAttributes:(id)a0;
- (id)serialize;
- (void)acceptConnection:(id)a0;
- (void)setSecOptions:(id)a0;
- (void)terminateConnections:(id /* block */)a0 queue:(id)a1;
- (void)terminateListener;

@end
