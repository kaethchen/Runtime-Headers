@class NSData, NSObject;
@protocol OS_nw_connection, OS_dispatch_queue, LOMDeviceControllerRequestDelegate;

@interface LOMConnection : NSObject {
    NSObject<OS_nw_connection> *_connection;
    BOOL _isActive;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _cancellationHandler;
    id<LOMDeviceControllerRequestDelegate> _delegate;
    NSData *_request;
    NSData *_response;
    id /* block */ _responseAckTimeout;
}

- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;
- (void)receiveRequest;
- (void)handleRequest;
- (id)initWithConnection:(id)a0 queue:(id)a1 delegate:(id)a2;
- (void)requestCompletion;
- (void)sendResponse;

@end
