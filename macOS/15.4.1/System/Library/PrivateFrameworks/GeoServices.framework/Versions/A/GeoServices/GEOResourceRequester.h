@protocol GEOResourceRequesterProxy;

@interface GEOResourceRequester : NSObject {
    id<GEOResourceRequesterProxy> _proxy;
}

@property (class, readonly, nonatomic) GEOResourceRequester *sharedRequester;

+ (void)setProxyClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (void)fetchResources:(id)a0 force:(BOOL)a1 manifestConfiguration:(id)a2 auditToken:(id)a3 queue:(id)a4 handler:(id /* block */)a5;
- (void)fetchResources:(id)a0 force:(BOOL)a1 unpack:(BOOL)a2 manifestConfiguration:(id)a3 auditToken:(id)a4 queue:(id)a5 handler:(id /* block */)a6;
- (void)fetchResources:(id)a0 force:(BOOL)a1 unpack:(BOOL)a2 manifestConfiguration:(id)a3 auditToken:(id)a4 signpostID:(unsigned long long)a5 queue:(id)a6 handler:(id /* block */)a7;
- (id)initWithProxy:(id)a0;
- (void)reportCorruptUnpackedResource:(id)a0 fileURL:(id)a1;

@end
