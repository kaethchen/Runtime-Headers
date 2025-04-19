@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CRKValidXPCConnectionProvider : NSObject

@property (retain, nonatomic) NSXPCConnection *backingConnection;
@property (readonly, nonatomic) id /* block */ builder;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (void)tearDownConnection;
- (id)makeConnection;
- (void)connectionDied:(id)a0;
- (id)captureConnection;
- (id)invokeBuilder;
- (id)unprotectedConnection;

@end
