@class NSDictionary;

@interface CAProxyLayer : CALayer

@property (copy) NSDictionary *proxyProperties;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end
