@class NSMutableDictionary;

@interface BuddyImageCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *abPersonIDToImageData;
@property (readonly, nonatomic) NSMutableDictionary *abPersonIDToConsumeTag;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_abChanged:(id)a0;
- (id)_imageDataForPerson:(id)a0 linkedPerson:(id)a1;
- (void)_setImageData:(id)a0 forPerson:(id)a1;
- (void)_setImageData:(id)a0 person:(id)a1 linkedPerson:(id)a2;
- (id)blockingImageDataForPerson:(id)a0;
- (void)clearCacheForPerson:(id)a0;
- (id)imageDataForPerson:(id)a0;
- (id)imageDataWithoutLoadingForPerson:(id)a0;

@end
