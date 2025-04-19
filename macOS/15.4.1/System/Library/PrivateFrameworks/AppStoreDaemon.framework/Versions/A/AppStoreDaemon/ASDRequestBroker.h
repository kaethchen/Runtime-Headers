@interface ASDRequestBroker : NSObject

+ (id)interface;

- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;

@end
