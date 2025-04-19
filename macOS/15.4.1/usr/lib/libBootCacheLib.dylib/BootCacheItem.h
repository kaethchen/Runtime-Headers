@class BootCacheItemStore;

@interface BootCacheItem : NSObject

@property (readonly) BootCacheItemStore *store;

- (void).cxx_destruct;
- (id)_initWithStore:(id)a0;

@end
