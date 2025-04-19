@class NSURL, NSString;

@interface BCSBlastDoorPersistentStore : NSObject <BCSBlastDoorImageCache>

@property (copy, nonatomic) NSURL *cacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCacheURL:(id)a0;
- (void)_createCache;
- (void)deleteExpiredImages;
- (void)deleteImageWithName:(id)a0;
- (id)fileURLForImageWithName:(id)a0 error:(id *)a1;
- (id)updateImageWithName:(id)a0 error:(id *)a1;

@end
