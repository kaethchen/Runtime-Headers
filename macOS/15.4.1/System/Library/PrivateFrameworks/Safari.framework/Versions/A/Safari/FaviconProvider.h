@class NSString, NSCache, FaviconProviderHistoryBookmarkAdapter;

@interface FaviconProvider : WBSFaviconProvider <FaviconProviderHistoryBookmarkAdapterDelegate> {
    FaviconProviderHistoryBookmarkAdapter *_historyAndBookmarksAdapter;
    NSCache *_monogramTitleToImageCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bookmarksPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_favoritesPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_historyPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_monogramForTitle:(id)a0 url:(id)a1;
- (id)_readingListPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_tabOverviewPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_topSitesPlaceholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)builtInIconForRequest:(id)a0;
- (id)fallbackIconForRequest:(id)a0;
- (void)faviconProviderHistoryBookmarkAdapter:(id)a0 didEstablishKnownURLStrings:(id)a1;
- (void)faviconProviderHistoryBookmarkAdapter:(id)a0 didFlushURLString:(id)a1;
- (void)faviconProviderHistoryBookmarkAdapterCouldNotEstablishKnownURLs:(id)a0;
- (id)initWithPersistenceBaseURL:(id)a0 persistenceName:(id)a1 preferredIconSize:(struct CGSize { double x0; double x1; })a2 atScale:(double)a3 allScales:(id)a4 isReadOnly:(BOOL)a5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)a6;

@end
