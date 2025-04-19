@class PAImageRequestCacheHint, PAImageRequestTileHint;
@protocol PAImageRequestService;

@interface PAImageRequest : NSObject <NSCopying> {
    id<PAImageRequestService> _requestService;
}

@property (retain) PAImageRequestCacheHint *cacheHint;
@property (retain) PAImageRequestTileHint *tileHint;
@property unsigned char loadMode;

+ (id)defaultRequestService;
+ (void)setDefaultRequestService:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)submitSynchronous:(id)a0;
- (id)copyForReplay;
- (id)requestService;
- (void)setRequestService:(id)a0;

@end
