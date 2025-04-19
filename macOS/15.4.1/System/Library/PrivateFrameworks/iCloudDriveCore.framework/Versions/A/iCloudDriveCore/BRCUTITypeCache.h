@class NSNumber, NSCache;

@interface BRCUTITypeCache : NSObject {
    NSNumber *_lastUTIDatabaseGeneration;
    NSCache *_utiCache;
}

+ (id)defaultCache;

- (void).cxx_destruct;
- (id)_init;
- (id)UTIForExtension:(id)a0;
- (id)_getLaunchServicesDatabaseGeneration;
- (void)_invalidateCahceIfNeeded;
- (id)_utiForExtension:(id)a0;

@end
