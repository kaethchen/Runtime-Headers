@class NSURL;

@interface _BKxPubMetadataInspector : NSObject

@property (nonatomic) BOOL includeCover;
@property (retain, nonatomic) NSURL *url;

+ (id)iTunesMetadataForBookAssetAtURL:(id)a0 error:(id *)a1;
+ (id)iTunesMetadataFromData:(id)a0 url:(id)a1 error:(id *)a2;
+ (id)iTunesMetadataFromZipArchive:(id)a0 url:(id)a1 error:(id *)a2;
+ (id)metadataForAssetAtURL:(id)a0 preloadedMetadata:(id)a1 includeCover:(BOOL)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)_metadataFromCompressedAssetWithPreloadedMetadata:(id)a0 error:(id *)a1;
- (id)_metadataFromUncompressedAssetWithPreloadedMetadata:(id)a0 error:(id *)a1;
- (id)_metadataWithPreloadedMetadata:(id)a0 error:(id *)a1;
- (id)_opfDataFromUncompressetAssetWithError:(id *)a0;
- (id)_opfDataFromZipArchive:(id)a0 error:(id *)a1;

@end
