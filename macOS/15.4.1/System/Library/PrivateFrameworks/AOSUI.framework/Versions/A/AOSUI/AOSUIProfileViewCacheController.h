@class NSString, NSArray, NSData;

@interface AOSUIProfileViewCacheController : NSObject

@property (retain) NSString *cachePath;
@property BOOL cacheIsValid;
@property BOOL cacheHideOverLay;
@property (retain) NSArray *cachePrefToHide;
@property (retain) NSData *cacheImageData;

+ (id)_cacheQueue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)readCache;
- (id)_currentLanguage;
- (void)writeCacheWithCompletion:(id /* block */)a0;

@end
