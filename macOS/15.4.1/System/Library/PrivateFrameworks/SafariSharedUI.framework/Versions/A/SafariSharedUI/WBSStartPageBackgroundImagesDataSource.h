@class NSArray, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundImagesDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    NSArray *_defaultImageURLs;
    NSArray *_imageURLsWithLuminance;
    NSMutableDictionary *_pendingImageThumbnailRequests;
    NSMutableDictionary *_imageCache;
    NSURL *_thumbnailsPath;
}

@property (readonly, nonatomic) long long itemCount;

- (void).cxx_destruct;
- (void)imageThumbnailWithItemIndex:(long long)a0 completion:(id /* block */)a1;
- (id)imageURLAndLuminanceWithItemIndex:(long long)a0;
- (id)initWithBundle:(id)a0 localCachesDirectory:(id)a1;
- (long long)indexOfBackgroundImageWithName:(id)a0;
- (id)_createThumbnail:(id)a0 imageSource:(struct CGImageSource { } *)a1;
- (id)_thumbnailURLWithItemIndex:(long long)a0;
- (id)initWithBuiltInImageURLs:(id)a0 localCachesDirectory:(id)a1;

@end
