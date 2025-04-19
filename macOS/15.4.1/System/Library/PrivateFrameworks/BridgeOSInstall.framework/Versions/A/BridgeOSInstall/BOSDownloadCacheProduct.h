@class NSURL, NSArray;

@interface BOSDownloadCacheProduct : PKProduct

@property (retain) NSURL *productURL;
@property (retain) NSArray *packageReferences;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)a0;
- (id)productType;
- (id)allPackageReferences;
- (id)_packageReferencesForDownloadCacheProductURL:(id)a0;

@end
