@class NSDictionary, RoutingHTTPServer;

@interface RoutingConnection : HTTPConnection {
    RoutingHTTPServer *http;
    NSDictionary *headers;
}

- (void).cxx_destruct;
- (id)httpResponseForMethod:(id)a0 URI:(id)a1;
- (id)initWithAsyncSocket:(id)a0 configuration:(id)a1;
- (id)preprocessErrorResponse:(id)a0;
- (id)preprocessResponse:(id)a0;
- (void)processBodyData:(id)a0;
- (void)responseDidAbort:(id)a0;
- (void)responseHasAvailableData:(id)a0;
- (BOOL)shouldDie;
- (BOOL)supportsMethod:(id)a0 atPath:(id)a1;
- (void)setHeadersForResponse:(id)a0 isError:(BOOL)a1;
- (BOOL)shouldHandleRequestForMethod:(id)a0 atPath:(id)a1;

@end
