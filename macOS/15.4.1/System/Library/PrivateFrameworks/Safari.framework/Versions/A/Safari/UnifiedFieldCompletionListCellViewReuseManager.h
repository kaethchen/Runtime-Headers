@class NSCountedSet, NSMapTable, ParsecTableCellViewReuseManager, NSCache;

@interface UnifiedFieldCompletionListCellViewReuseManager : NSObject <ParsecTableCellViewDelegate> {
    NSMapTable *_viewArraysByClass;
    NSCountedSet *_viewIndicesByClass;
    ParsecTableCellViewReuseManager *_parsecCellReuseManager;
    NSCache *_iconImageCache;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)_createCellViewWithIdentifier:(id)a0 fromNib:(id)a1;
- (id)_createParsecCellView;
- (id)_nextCellViewOfClass:(Class)a0;
- (id)cachedImageForImageURL:(id)a0;
- (id)nextBannerCellView;
- (id)nextHeaderCellView;
- (id)nextTableCellView;
- (id)parsecCellView;
- (void)prepareForReload;
- (void)setCachedImage:(id)a0 forImageURL:(id)a1;

@end
