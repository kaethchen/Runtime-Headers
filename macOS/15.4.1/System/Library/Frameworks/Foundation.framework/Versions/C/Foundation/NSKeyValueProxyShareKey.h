@class NSString, NSObject;

@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching> {
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;

- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (struct { id x0; id x1; })_proxyLocator;
- (void)_proxyNonGCFinalize;

@end
