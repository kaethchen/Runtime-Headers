@class NSURL;

@interface BootCacheFileItem : BootCacheItem

@property (readonly) NSURL *url;
@property (readonly) long long fileSize;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithStore:(id)a0 key:(id)a1;

@end
