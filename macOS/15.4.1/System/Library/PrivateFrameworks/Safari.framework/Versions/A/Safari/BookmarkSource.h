@interface BookmarkSource : NSObject <BookmarkSource>

- (void)refreshContents;
- (BOOL)canCopyContents;
- (id)addressStringForContentItem:(id)a0;
- (id)bookmarkFromContentItem:(id)a0;
- (id)bookmarkSourceImage;
- (id)bookmarksFromContentItems:(id)a0;
- (id)bookmarksFromHistoryItems:(id)a0;
- (BOOL)canDeleteContents;
- (BOOL)canGoToContentItem:(id)a0;
- (id)child:(unsigned int)a0 ofContentItem:(id)a1;
- (BOOL)contentItemCanBeSearchResult:(id)a0;
- (BOOL)contentItemCanHaveChildren:(id)a0;
- (id)contentItemsToExpandOnReload;
- (id)contentItemsToInitiallyExpand;
- (BOOL)deleteContentItems:(id)a0;
- (void)didCollapseContentItem:(id)a0;
- (void)didExpandContentItem:(id)a0;
- (void)goToContentItem:(id)a0 tabPlacementHint:(id)a1;
- (void)goToContentItemInNewTab:(id)a0 tabPlacementHint:(id)a1;
- (void)goToContentItemInNewTab:(id)a0 windowPolicy:(long long)a1 tabPlacementHint:(id)a2;
- (void)goToContentItemInNewWindow:(id)a0;
- (id)imageForContentItem:(id)a0;
- (id)imageURLStringForContentItem:(id)a0;
- (unsigned int)numberOfChildrenOfContentItem:(id)a0;
- (void)openDescendantsOfContentItemInNewTabs:(id)a0 tabPlacementHint:(id)a1;
- (id)parentOfContentItem:(id)a0;
- (void)replaceTabsWithDescendantsOfContentItem:(id)a0 tabPlacementHint:(id)a1;
- (id)titleStringForContentItem:(id)a0;

@end
