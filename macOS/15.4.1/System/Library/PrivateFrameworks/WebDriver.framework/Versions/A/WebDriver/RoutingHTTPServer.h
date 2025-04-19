@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RoutingHTTPServer : HTTPServer {
    NSMutableDictionary *routes;
    NSMutableDictionary *mimeTypes;
    NSObject<OS_dispatch_queue> *routeQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *defaultHeaders;

- (id)init;
- (void).cxx_destruct;
- (id)mimeTypes;
- (BOOL)supportsMethod:(id)a0;
- (void)post:(id)a0 withBlock:(id /* block */)a1;
- (void)addRoute:(id)a0 forMethod:(id)a1;
- (void)delete:(id)a0 withBlock:(id /* block */)a1;
- (void)get:(id)a0 withBlock:(id /* block */)a1;
- (void)handleMethod:(id)a0 withPath:(id)a1 block:(id /* block */)a2;
- (void)handleMethod:(id)a0 withPath:(id)a1 target:(id)a2 selector:(SEL)a3;
- (void)handleRoute:(id)a0 withRequest:(id)a1 response:(id)a2;
- (id)mimeTypeForPath:(id)a0;
- (void)put:(id)a0 withBlock:(id /* block */)a1;
- (id)routeMethod:(id)a0 withPath:(id)a1 parameters:(id)a2 request:(id)a3 connection:(id)a4;
- (id)routeQueue;
- (id)routeWithPath:(id)a0;
- (void)setDefaultHeader:(id)a0 value:(id)a1;
- (void)setDefaultHeaders:(id)a0;
- (void)setMIMEType:(id)a0 forExtension:(id)a1;
- (void)setMIMETypes:(id)a0;
- (void)setRouteQueue:(id)a0;
- (void)setupMIMETypes;
- (void)subscribe:(id)a0 withBlock:(id /* block */)a1;
- (void)unsubscribe:(id)a0 withBlock:(id /* block */)a1;

@end
