@class NSRecursiveLock, NSMutableDictionary, OFLRUCache, NSMutableArray, OKDocumentInfo;
@protocol OKDocumentDelegate, OKDocumentMediaItemLookupDelegate;

@interface OKDocument : NSDocument {
    NSMutableArray *_producerPlugins;
    NSRecursiveLock *_posterImageLock;
    NSMutableDictionary *_pageTemplates;
    NSMutableDictionary *_widgetTemplates;
    NSMutableDictionary *_pages;
    NSMutableDictionary *_navigators;
    NSMutableDictionary *_couches;
    NSMutableDictionary *_guidelines;
    OFLRUCache *_mediaItemsMemoryCache;
    OFLRUCache *_metadataMemoryCache;
    OFLRUCache *_lowThumbnailsMemoryCache;
    OFLRUCache *_intermediate1ThumbnailsMemoryCache;
    OFLRUCache *_intermediate2ThumbnailsMemoryCache;
}

@property BOOL hasPosterImageChanged;
@property BOOL haveTemplatesChanged;
@property BOOL havePagesChanged;
@property BOOL haveNavigatorsChanged;
@property BOOL haveCouchesChanged;
@property BOOL haveGuidelinesChanged;
@property BOOL canBeEdited;
@property BOOL isClosing;
@property BOOL enableDisplayDebugging;
@property BOOL stretchableWithoutReauthoring;
@property (readonly, retain) OKDocumentInfo *info;
@property struct CGImage { } *posterImage;
@property (nonatomic) id<OKDocumentDelegate> delegate;
@property id<OKDocumentMediaItemLookupDelegate> mediaItemLookupDelegate;

+ (BOOL)autosavesInPlace;
+ (BOOL)canConcurrentlyReadDocumentsOfType:(id)a0;
+ (struct CGImage { } *)retainedPosterImageForFileURL:(id)a0 withResolution:(unsigned long long)a1 coordinateReading:(BOOL)a2;
+ (id)_fileWrapperPosterImageFilenameKeyWithResolution:(unsigned long long)a0;
+ (id)_hashForImportedResourceURL:(id)a0;
+ (id)_importedMediaURLForImportedResourceURL:(id)a0 withDocumentURL:(id)a1 extension:(id)a2;
+ (id)_importedMetadataURLForImportedResourceURL:(id)a0 withDocumentURL:(id)a1;
+ (id)_importedResourceDirectoryURLForImportedResourceURL:(id)a0 withDocumentURL:(id)a1;
+ (id)_importedResourceURLWithHash:(id)a0;
+ (id)_importedResourcesDirectoryURLForDocumentURL:(id)a0;
+ (id)_importedThumbnailURLForImportedResourceURL:(id)a0 withDocumentURL:(id)a1 withExtension:(id)a2;
+ (id)_posterImageURLForFileURL:(id)a0 withResolution:(unsigned long long)a1;
+ (id)_scriptURLForDocumentURL:(id)a0;
+ (id)infoForFileURL:(id)a0 coordinateReading:(BOOL)a1;

- (void)dealloc;
- (id)init;
- (void)close;
- (id)localizedName;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)documentURL;
- (void)_commonInit;
- (BOOL)canAsynchronouslyWriteToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2;
- (void)canCloseDocumentWithDelegate:(id)a0 shouldCloseSelector:(SEL)a1 contextInfo:(void *)a2;
- (id)fileWrapperOfType:(id)a0 error:(id *)a1;
- (id)initWithFileURL:(id)a0;
- (BOOL)readFromFileWrapper:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)saveToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)writeSafelyToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 error:(id *)a3;
- (BOOL)writeToURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)script;
- (void)addPage:(id)a0;
- (id)contentsForType:(id)a0 error:(id *)a1;
- (BOOL)loadFromContents:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)guidelineAuthoringUserMediaURLs;
- (void)addGuideline:(id)a0;
- (id)allGuidelines;
- (id)guidelineAuthoringSynopsis;
- (id)guidelineForGlobalUniqueKey:(id)a0;
- (id)guidelinesForKey:(id)a0;
- (id)guidelinesForMediaItem:(id)a0 andKey:(id)a1;
- (id)mediaItemForURL:(id)a0;
- (id)mediaItemsForURLs:(id)a0;
- (void)removeGuidelineForGlobalUniqueKey:(id)a0;
- (void)removeGuidelines:(id)a0;
- (void)_didResignActiveNotification:(id)a0;
- (void)_willTerminateNotification:(id)a0;
- (id)guidelineAuthoringUserAudioURLs;
- (id)navigatorsNames;
- (void)_reloadTemplatesFromDictionary:(id)a0;
- (void)resolveIfNeeded;
- (void)_cleanupUnusedResources;
- (id)_extensionForImportedResourceURL:(id)a0;
- (id)_extensionForThumbnailImportedResourceURL:(id)a0;
- (BOOL)_hasThumbnailForImportedResourceURL:(id)a0;
- (BOOL)_hasThumbnailForImportedResourceURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_hasThumbnailFromMediaForImportedResourceURL:(id)a0;
- (BOOL)_hasUnusedResources;
- (id)_importedMediaURLForImportedResourceURL:(id)a0;
- (id)_importedMediaURLForImportedResourceURL:(id)a0 withImportedResourceDirectoryURL:(id)a1 withExtension:(id)a2;
- (id)_importedMetadataURLForImportedResourceURL:(id)a0;
- (id)_importedMetadataURLWithImportedResourceDirectoryURL:(id)a0;
- (id)_importedResourceDirectoryURLForImportedResourceURL:(id)a0;
- (id)_importedResourceDirectoryURLForImportedResourceURL:(id)a0 withImportedResourcesDirectoryURL:(id)a1;
- (id)_importedResourceURLForRessourceURL:(id)a0;
- (id)_importedResourcesDirectoryURL;
- (id)_importedThumbnailURLForImportedResourceURL:(id)a0;
- (id)_importedThumbnailURLForImportedResourceURL:(id)a0 resolution:(unsigned long long)a1;
- (id)_importedThumbnailURLForImportedResourceURL:(id)a0 withImportedResourceDirectoryURL:(id)a1 withExtension:(id)a2;
- (id)_importedThumbnailsDirectoryURLForImportedResourceURL:(id)a0;
- (id)_importedThumbnailsURLWithImportedResourceDirectoryURL:(id)a0;
- (id)_metadataForImportedResourceURL:(id)a0;
- (id)_metadataObjectForKey:(id)a0 forImportedResourceURL:(id)a1;
- (BOOL)_readImportedResourceURL:(id)a0 error:(id *)a1 byMediaAccessor:(id /* block */)a2;
- (BOOL)_readImportedResourceURL:(id)a0 error:(id *)a1 byMetadataAccessor:(id /* block */)a2;
- (BOOL)_readImportedResourceURL:(id)a0 error:(id *)a1 byThumbnailAccessor:(id /* block */)a2;
- (BOOL)_readImportedResourceURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id *)a2 byThumbnailAccessor:(id /* block */)a3;
- (void)_reloadCouchesFromDictionary:(id)a0;
- (void)_reloadGuidelinesFromArray:(id)a0;
- (void)_reloadNavigatorsFromDictionary:(id)a0;
- (void)_reloadPagesFromDictionary:(id)a0;
- (void)_saveThumbnailToDisk:(struct CGImage { } *)a0 forImportedResourceURL:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)_scriptURL;
- (struct CGImage { } *)_thumbnailForImportedResourceURL:(id)a0;
- (struct CGImage { } *)_thumbnailForImportedResourceURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)_thumbnailFromMediaForImportedResourceURL:(id)a0;
- (struct CGImage { } *)_thumbnailFromMediaForImportedResourceURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_updateChangeCount:(unsigned long long)a0;
- (BOOL)_updateImportedResourceURL:(id)a0 error:(id *)a1 byMetadataAccessor:(id /* block */)a2;
- (BOOL)_updateImportedResourceURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id *)a2 byThumbnailAccessor:(id /* block */)a3;
- (void)addCouch:(id)a0;
- (void)addGuidelines:(id)a0;
- (void)addNavigator:(id)a0;
- (void)addPageTemplate:(id)a0;
- (void)addScript:(id)a0 extend:(BOOL)a1;
- (void)addWidgetTemplate:(id)a0;
- (id)allGuidelineGlobalUniqueKeys;
- (struct CGSize { double x0; double x1; })bestResolutionSizeForDisplaySize:(struct CGSize { double x0; double x1; })a0 keepAspectRatio:(BOOL *)a1;
- (id)canvasForKeyPath:(id)a0;
- (id)couchWithName:(id)a0;
- (id)couchesNames;
- (BOOL)deleteImportedResourceURLs:(id)a0 progressBlock:(id /* block */)a1 error:(id *)a2;
- (void)documentModelChanged:(BOOL)a0;
- (id)guidelineAuthoringProducerMediaItems;
- (id)guidelineAuthoringProducerMediaURLs;
- (id)guidelineAuthoringUserAudioItems;
- (id)guidelineAuthoringUserMediaItems;
- (id)guidelineValueForGlobalUniqueKey:(id)a0;
- (id)guidelinesForDocumentCanvas:(id)a0;
- (id)guidelinesForDocumentCanvas:(id)a0 andKey:(id)a1;
- (id)guidelinesForMediaItem:(id)a0;
- (id)guidelinesForProducerPlugin:(id)a0;
- (id)guidelinesForType:(unsigned long long)a0;
- (BOOL)hasThumbnailImageInDiskCacheForMediaItem:(id)a0 andResolution:(unsigned long long)a1;
- (id)importResourceURL:(id)a0 opaque:(BOOL)a1 force:(BOOL)a2 progressBlock:(id /* block */)a3 error:(id *)a4;
- (id)importResourceURLs:(id)a0 opaque:(BOOL)a1 force:(BOOL)a2 progressBlock:(id /* block */)a3 error:(id *)a4;
- (id)importedResourceURLs;
- (void)invalidateMediaItem:(id)a0;
- (void)invalidateMediaItemDiskCaches:(id)a0;
- (void)invalidateMediaItemMemoryCaches:(id)a0;
- (BOOL)isImportedResourceURLEmbedded:(id)a0;
- (id)metadataInDiskForMediaItem:(id)a0;
- (id)metadataInMemoryForMediaItem:(id)a0;
- (id)navigatorWithName:(id)a0;
- (id)pageTemplateWithName:(id)a0;
- (id)pageTemplatesNames;
- (id)pageWithName:(id)a0;
- (id)pagesNames;
- (id)prepareMediaURL:(id)a0 force:(BOOL)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (id)prepareMediaURLs:(id)a0 force:(BOOL)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (BOOL)registerProducerPlugin:(id)a0;
- (id)registeredProducerPluginWithIdentifier:(id)a0;
- (void)removeAllCouches;
- (void)removeAllGuidelines;
- (void)removeAllNavigators;
- (void)removeAllPageTemplates;
- (void)removeAllPages;
- (void)removeAllTemplates;
- (void)removeAllWidgetTemplates;
- (void)removeCouchWithName:(id)a0;
- (void)removeGuideline:(id)a0;
- (void)removeNavigatorWithName:(id)a0;
- (void)removePageTemplateWithName:(id)a0;
- (void)removePageWithName:(id)a0;
- (void)removeScript;
- (void)removeWidgetTemplateWithName:(id)a0;
- (id)rootCouch;
- (id)rootNavigator;
- (void)saveMetadataToDiskCache:(id)a0 forMediaItem:(id)a1;
- (void)saveThumbnailImageToDiskCache:(id)a0 forMediaItem:(id)a1 andResolution:(unsigned long long)a2;
- (void)setGuidelines:(id)a0;
- (void)setMetadataToMemory:(id)a0 forMediaItem:(id)a1;
- (void)setThumbnailImageToMemoryCache:(id)a0 forMediaItem:(id)a1 andResolution:(unsigned long long)a2;
- (id)thumbnailImageInDiskCacheForMediaItem:(id)a0 andResolution:(unsigned long long)a1;
- (id)thumbnailImageInMemoryCacheForMediaItem:(id)a0 andResolution:(unsigned long long)a1;
- (id)trailerCouch;
- (id)trailerNavigator;
- (id)widgetTemplateWithName:(id)a0;
- (id)widgetTemplatesNames;

@end
