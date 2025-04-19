@class PLAssetsdClientState;
@protocol PLXPCProxyCreating, PLXPCAsyncProxyCreating;

@interface PLAssetsdBaseClient : NSObject

@property (readonly) id<PLXPCProxyCreating, PLXPCAsyncProxyCreating> proxyFactory;
@property (readonly) PLAssetsdClientState *clientState;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2 clientState:(id)a3;

@end
