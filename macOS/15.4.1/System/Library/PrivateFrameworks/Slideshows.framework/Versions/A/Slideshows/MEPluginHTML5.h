@class NSOperationQueue, NSMutableArray, NSArray;

@interface MEPluginHTML5 : MEPlugin <MEPluginRegistration, MEPluginTypeGeneric> {
    NSOperationQueue *_imageQueue;
    NSMutableArray *_imageOperations;
    NSArray *_sizesToCreate;
}

+ (BOOL)matchesOptions:(id)a0;
+ (void)registerPluginsToLoader:(id)a0;

- (void)dealloc;
- (id)_addTextLocationInfoWithEffectID:(id)a0 presetID:(id)a1 size:(struct CGSize { double x0; double x1; })a2 textDict:(id)a3 textASPFactor:(double)a4;
- (id)_addWordsLocationInfoWithEffectID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 textDict:(id)a2;
- (void)_cacheImageAtPath:(id)a0 toPath:(id)a1 withAssetInfo:(id)a2 referenceOriginal:(BOOL)a3 createCache:(BOOL)a4;
- (BOOL)_copyMediaPlayerURL:(id)a0 toURL:(id)a1;
- (void)_removePath:(id)a0;
- (id)_wordsLocationFromString:(id)a0;
- (BOOL)exportToFile:(id)a0 andOptions:(id)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 andDocument:(id)a1 andDelegate:(id)a2;

@end
