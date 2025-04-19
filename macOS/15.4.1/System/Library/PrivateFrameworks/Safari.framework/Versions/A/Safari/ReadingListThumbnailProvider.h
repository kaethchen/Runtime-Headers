@class WBSSiteMetadataManager, NSURL, NSMutableSet, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface ReadingListThumbnailProvider : NSObject {
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSMutableSet *_readingListItemUUIDsWithPendingThumbnailRequests;
    NSURL *_readingListWebArchivesDirectoryURL;
    WBSSiteMetadataManager *_siteMetadataManager;
    NSCache *_thumbnailsCache;
}

- (void).cxx_destruct;
- (void)_addThumbnailImageToCache:(id)a0 forItem:(id)a1;
- (id)_archiveFolderURLForReadingListItemUUID:(id)a0;
- (id)_thumbnailFileURLForReadingListItem:(id)a0;
- (id)_thumbnailFileURLForReadingListItemUUID:(id)a0;
- (void)cancelFallbackIconRequestForToken:(id)a0;
- (void)fetchThumbnailImageWithURL:(id)a0 forItem:(id)a1;
- (id)getFallbackIconForItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSiteMetadataManager:(id)a0 webArchivesDirectoryURL:(id)a1 fileIOQueue:(id)a2;
- (void)removeAllCachedThumbnails;
- (void)removedCachedThumbnailForItem:(id)a0;
- (void)saveThumbnailImage:(id)a0 forItem:(id)a1;
- (id)thumbnailImageForItem:(id)a0;
- (void)thumbnailImageForItem:(id)a0 completion:(id /* block */)a1;
- (void)thumbnailImageForUUID:(id)a0 completion:(id /* block */)a1;

@end
