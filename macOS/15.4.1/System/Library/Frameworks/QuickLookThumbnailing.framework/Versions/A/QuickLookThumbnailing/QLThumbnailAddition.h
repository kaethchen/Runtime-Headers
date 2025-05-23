@class GSAddition, NSDictionary, NSURL, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject {
    GSAddition *_addition;
    QLThumbnailVersion *_thumbnailVersion;
}

@property (readonly) GSAddition *genStoreAddition;
@property (retain) NSURL *additionURL;
@property (retain) NSDictionary *thumbnailDataDictionary;
@property (retain) NSDictionary *metadata;
@property long long additionURLSandboxToken;
@property (readonly) QLThumbnailVersion *thumbnailVersion;
@property (readonly) unsigned long long additionSize;

+ (BOOL)associateThumbnailImagesDictionary:(id)a0 serializedQuickLookMetadata:(id)a1 withImmutableDocument:(BOOL)a2 atURL:(id)a3 error:(id *)a4;
+ (BOOL)associateThumbnailsForDocumentAtURL:(id)a0 withDocumentAtURL:(id)a1 error:(id *)a2;
+ (BOOL)hasThumbnailOnImmutableDocumentAtURL:(id)a0;
+ (void)_hitAdditionsOnURL:(id)a0 size:(unsigned long long)a1 completionHandler:(id /* block */)a2;
+ (BOOL)_removeAdditionsOnURLDirectly:(id)a0 error:(id *)a1;
+ (BOOL)_removeAdditionsOnURLUsingDaemon:(id)a0 error:(id *)a1;
+ (BOOL)_removedAdditionsOnURL:(id)a0;
+ (BOOL)_removedAdditionsOnURLUsingDaemon:(id)a0;
+ (id)additionCreationInfo;
+ (void)adjustFileProtectionForThumbnail:(id)a0 fromOriginalDocument:(id)a1;
+ (BOOL)associateImage:(struct CGImage { } *)a0 metadata:(id)a1 automaticallyGenerated:(BOOL)a2 withURL:(id)a3 error:(id *)a4;
+ (BOOL)associateThumbnailImagesDictionary:(id)a0 serializedQuickLookMetadata:(id)a1 withDocumentAtURL:(id)a2 error:(id *)a3;
+ (BOOL)associateThumbnailsForDocumentAtURL:(id)a0 withImmutableDocument:(BOOL)a1 atURL:(id)a2 error:(id *)a3;
+ (void)downloadOrGenerateThumbnailAtTaggedURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)downloadOrGenerateThumbnailAtURL:(id)a0;
+ (void)downloadOrGenerateThumbnailAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)fpfsDownloadOrGenerateThumbnailAtTaggedURL:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)imageContainsAlpha:(struct CGImage { } *)a0;
+ (BOOL)imageContainsAlphaForOtherImages:(struct CGImage { } *)a0;
+ (id)imageNameFor1024ThumbnailAtURL:(id)a0 metadataDictionary:(id)a1;
+ (id)imageNameFor1024ThumbnailData:(id)a0 metadataDictionary:(id)a1;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)a0;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource { } *)a0;
+ (BOOL)makeAdditionFromStagingURL:(id)a0 metadata:(id)a1 inStorage:(id)a2 error:(id *)a3;
+ (id)metadataForGeneratedThumbnailForURL:(id)a0 maximumDimension:(double)a1;
+ (id)plistInExtendedAttributeNamed:(const char *)a0 flags:(unsigned long long)a1 onFileDescriptor:(int)a2 error:(id *)a3;
+ (void)preFPFSDownloadOrGenerateThumbnailAtTaggedURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)preFPFSDownloadThumbnailAtTaggedURL:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)removeAdditionsOnURL:(id)a0 error:(id *)a1;
+ (BOOL)removeExtendedAttributeNamed:(const char *)a0 flags:(unsigned long long)a1 onFileDescriptor:(int)a2 error:(id *)a3;
+ (BOOL)removeThumbnailsStoredInExtendedAttributesOnURL:(id)a0 error:(id *)a1;
+ (BOOL)setPropertyList:(id)a0 forExtendedAttributeNamed:(const char *)a1 flags:(unsigned long long)a2 onFileDescriptor:(int)a3 error:(id *)a4;
+ (BOOL)setThumbnailsDictionary:(id)a0 forURL:(id)a1 error:(id *)a2;
+ (BOOL)shouldUseXattrsToStoreThumbnailsOnURL:(id)a0;
+ (unsigned long long)sizeOfAdditionsPresentOnURL:(id)a0;
+ (BOOL)storeThumbnailDataDictionary:(id)a0 metadata:(id)a1 asExtendedAttributeOnURL:(id)a2 error:(id *)a3;
+ (id)thumbnailsDictionaryForURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_initWithAdditionsPresentOnURLDirectly:(id)a0 error:(id *)a1;
- (BOOL)_initWithAdditionsPresentOnURLUsingDaemon:(id)a0 error:(id *)a1;
- (BOOL)_initWithXattrsPresentOnURL:(id)a0 error:(id *)a1;
- (id)allImageURLs;
- (id)initWithAdditionsPresentOnURL:(id)a0 error:(id *)a1;
- (id)initWithAdditionsPresentOnURL:(id)a0 includingExtendedAttributes:(BOOL)a1 error:(id *)a2;
- (BOOL)shouldBeInvalidatedByThumbnailVersion:(id)a0;
- (id)thumbnailDataForKey:(id)a0;
- (id)thumbnailURLForKey:(id)a0;
- (struct CGImage { } *)thumbnailWithMaximumDimension:(double)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 flavor:(int *)a2 lowQuality:(BOOL *)a3 properties:(id *)a4;
- (id)thumbnailsDictionaryWithError:(id *)a0;

@end
