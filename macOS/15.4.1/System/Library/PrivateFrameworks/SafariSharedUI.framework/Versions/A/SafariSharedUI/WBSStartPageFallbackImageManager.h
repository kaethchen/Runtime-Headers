@class NSCache, NSMapTable;

@interface WBSStartPageFallbackImageManager : NSObject {
    NSCache *_identifiersToCachedImages;
    NSMapTable *_identifiersToLiveCachedImages;
}

@property (class, readonly, nonatomic) WBSStartPageFallbackImageManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)displayableImageForImage:(id)a0 withRequiredImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)displayableImageForImage:(id)a0 withRequiredImageSize:(struct CGSize { double x0; double x1; })a1 fallbackImageSize:(struct CGSize { double x0; double x1; })a2 fontSize:(double)a3 fontWeight:(long long)a4 fontDesign:(long long)a5 baselineOffset:(double)a6 backgroundColor:(id)a7 cornerRadius:(double)a8 title:(id)a9 url:(id)a10 shouldGenerateGlyph:(BOOL)a11;
- (id)displayableImageForImage:(id)a0 withRequiredImageSize:(struct CGSize { double x0; double x1; })a1 fontSize:(double)a2 fontWeight:(long long)a3 fontDesign:(long long)a4 baselineOffset:(double)a5 backgroundColor:(id)a6 cornerRadius:(double)a7 title:(id)a8 url:(id)a9;

@end
