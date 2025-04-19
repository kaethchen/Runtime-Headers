@class NSObject;
@protocol OS_xpc_object;

@interface NSRemoteServiceEndpoint : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ connectionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)endpoint;
- (void)start;
- (void)stop;
- (void)_connectionDidReceiveEvent:(id)a0;

@end
