@class IPAImageSizePolicy, PAImageRequestTileHint, NSDictionary, PAImageRequestCacheHint;

@interface PALoadRequest : NSObject <NSCoding>

@property (readonly) PAImageRequestCacheHint *cacheHint;
@property (readonly) PAImageRequestTileHint *tileHint;
@property (readonly) IPAImageSizePolicy *sizePolicy;
@property (readonly) NSDictionary *cgOptions;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCacheHint:(id)a0 tileHint:(id)a1;
- (id)initWithCacheHint:(id)a0 tileHint:(id)a1 sizePolicy:(id)a2;

@end
