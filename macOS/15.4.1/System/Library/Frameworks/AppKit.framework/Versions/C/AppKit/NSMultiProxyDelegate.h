@class NSMutableArray;

@interface NSMultiProxyDelegate : NSObject {
    NSMutableArray *_proxies;
}

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;

@end
