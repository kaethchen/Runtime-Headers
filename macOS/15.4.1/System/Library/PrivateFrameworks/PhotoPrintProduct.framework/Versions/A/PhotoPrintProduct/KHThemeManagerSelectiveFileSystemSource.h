@class NSURL, NSMutableSet, NSMutableDictionary;

@interface KHThemeManagerSelectiveFileSystemSource : KHThemeManagerFileSystemSource {
    NSMutableSet *_knownThemeURLs;
    NSMutableDictionary *_bundles;
}

@property (retain, nonatomic) NSURL *sourceURL;

+ (id)sharedSelectiveFileSystemSource;

- (void).cxx_destruct;
- (void)removeAll;
- (id)_knownThemeURLs;
- (void)removeThemeURL:(id)a0;
- (id)_themeProvidersMatchingProductCodes:(id)a0 error:(id *)a1;
- (void)addThemeURL:(id)a0;
- (id)initWithSourceURL:(id)a0 manager:(id)a1;
- (id)knownThemeURLs;
- (BOOL)sourceIsAvailable;

@end
