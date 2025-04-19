@interface TemplateIconCache : WBSTemplateIconCache {
    BOOL _didLoadBookmarks;
}

- (void)dealloc;
- (id)_imageForRequest:(id)a0 getThemeColor:(id *)a1;
- (void)_bookmarksWereReloaded:(id)a0;
- (BOOL)_templateIconRetainerIsReadyForCleanUp;
- (void)_webBookmarkLeafURLStringDidChange:(id)a0;
- (id)initWithImageDirectoryURL:(id)a0;
- (BOOL)shouldRequestTemplateIconForURL:(id)a0 allowRefresh:(BOOL)a1;

@end
