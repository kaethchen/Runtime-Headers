@class WBSBlockedHighlightsBannerSQLiteStore, NSMutableDictionary;

@interface HighlightManager : WBSHighlightManager {
    NSMutableDictionary *_highlightToBackForwardListItemsMap;
    WBSBlockedHighlightsBannerSQLiteStore *_store;
    NSMutableDictionary *_blockedHighlightIdentifierToNumberOfTemporaryBanners;
}

@property (class, readonly, nonatomic) HighlightManager *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_handleRemovalOfHighlights:(id)a0;
- (void)_loadListOfBlockedBannerHighlights;
- (void)blockBannerForHighlight:(id)a0 inBrowserViewController:(id)a1;
- (void)clearBlockedBannerHighlightsAfterDate:(id)a0;
- (void)closeBlockedHighlightsBannerDatabase;
- (BOOL)isBannerBlockedForHighlight:(id)a0;
- (void)loadLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setHighlightItem:(id)a0 forBackForwardListItem:(const void *)a1;
- (void)userInteractedWithHighlight:(id)a0 inPrivateBrowsing:(BOOL)a1;

@end
