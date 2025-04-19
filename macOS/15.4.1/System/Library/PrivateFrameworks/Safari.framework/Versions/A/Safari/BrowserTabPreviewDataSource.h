@class UnifiedTabBarItem, NSString, NSView, TabSnapshotCacheWithPersistence, CustomViewSnapshotCache, BrowserTabViewItem;
@protocol TabBarViewItem, TabPreviewDataSourceDelegate;

@interface BrowserTabPreviewDataSource : NSObject <CustomViewSnapshotCacheUpdatesObserver, TabPreviewDataSource> {
    struct CGSize { double width; double height; } _cachedImageSize;
    CustomViewSnapshotCache *_customViewSnapshotCache;
    TabSnapshotCacheWithPersistence *_tabSnapshotCacheWithPersistence;
}

@property (readonly, weak, nonatomic) BrowserTabViewItem *browserTabViewItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TabPreviewDataSourceDelegate> tabPreviewDataSourceDelegate;
@property (readonly, nonatomic) id<TabBarViewItem> tabBarViewItem;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tabContentSize;
@property (readonly, nonatomic) NSView *tabThumbnailView;
@property (readonly, nonatomic) UnifiedTabBarItem *unifiedTabBarItem;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_representedBrowserTabViewItem;
- (void)_setUpCachedThumbnailView;
- (void)_setUpCustomViewThumbnailView;
- (void)_setUpLiveThumbnailView;
- (void)_setUpThumbnailView;
- (BOOL)_shouldShowThumbnailView;
- (unsigned long long)_thumbnailSnapshotTypeForRepresentedBrowserTabViewItem;
- (void)_updateCachedThumbnailViewSnapshot:(id)a0;
- (void)customViewSnapshotCache:(id)a0 didUpdateSnapshotForType:(long long)a1;
- (id)initWithBrowserTabViewItem:(id)a0 tabSnapshotCacheWithPersistence:(id)a1 customViewSnapshotCache:(id)a2;
- (void)updateThumbnailView;

@end
