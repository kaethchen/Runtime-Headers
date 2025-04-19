@class OKProducerPlugin;

@interface OKMediaProducerItem : OKMediaItem {
    OKProducerPlugin *_plugin;
}

+ (id)scheme;
+ (id)urlForMediaObject:(id)a0;
+ (id)urlForProducerPluginIdentifier:(id)a0 andResourcePath:(id)a1;

- (void)dealloc;
- (id)parseDate:(id)a0;
- (id)_fileURL;
- (id)createMetadataWithCompletionHandler:(id /* block */)a0;
- (id)createThumbnailImageForResolution:(unsigned long long)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasMetadataAlreadyDiskCached;
- (BOOL)hasThumbnailAlreadyDiskCachedForResolution:(unsigned long long)a0;
- (id)importMediaToDirectoryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithProducerPluginIdentifier:(id)a0 andResourcePath:(id)a1;
- (id)resourceURLWithCompletionHandler:(id /* block */)a0;

@end
