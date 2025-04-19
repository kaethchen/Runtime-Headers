@class TabSnapshotCacheWithPersistence, NSString, NSView, BrowserTabViewItem;

@interface FunctionBarTabItem : NSObject <VisualScrubberItem> {
    long long _currentThumbnailMode;
    NSView *_currentContentView;
}

@property (weak, nonatomic) BrowserTabViewItem *tabViewItem;
@property (readonly, nonatomic) TabSnapshotCacheWithPersistence *tabSnapshotCacheWithPersistence;
@property (readonly, copy, nonatomic) NSString *thumbnailSizeObservationKey;
@property (readonly, nonatomic) NSView *contentView;
@property (readonly, copy, nonatomic) NSString *accessibilityDescription;

- (void).cxx_destruct;
- (id)_generateGenericThumbnail;
- (id)_generateStartPageThumbnail;
- (id)_generateTabOverviewThumbnail;
- (id)_generateThumbnailImageViewWithImageNamed:(id)a0;
- (id)_generateWebViewThumbnail;
- (void)_refreshWebViewThumbnail;
- (void)_requestTabSnapshotWithCompletionHandler:(id /* block */)a0;
- (BOOL)_willGenerateWKThumbnailView;
- (id)initWithTabViewItem:(id)a0 tabSnapshotCacheWithPersistence:(id)a1;

@end
