@interface OKMediaImportedItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;

- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasMetadataAlreadyDiskCached;
- (BOOL)hasThumbnailAlreadyDiskCachedForResolution:(unsigned long long)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithImportedResourceURL:(id)a0;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;

@end
