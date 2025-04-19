@class NSArray, NSImage, STKSticker, STKImageGlyph, NSIndexPath;

@interface StickerKit.RecentImageGlyphDataSource : _TtCs12_SwiftObject <StickerKit.ImageGlyphDataSourceProtocol> {
    void /* unknown type, empty encoding */ recencyChangeObservers;
    void /* unknown type, empty encoding */ stickerStore;
    void /* unknown type, empty encoding */ emojiRecencyModel;
    void /* unknown type, empty encoding */ stickerIdentifiersCreatedInGuestMode;
    void /* unknown type, empty encoding */ recentEmojis;
    void /* unknown type, empty encoding */ _recentStickers;
    void /* unknown type, empty encoding */ recentStickersAreDirty;
    void /* unknown type, empty encoding */ stickerPropertyLock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uiConfig;
    void /* unknown type, empty encoding */ imageGlyphCache;
    void /* unknown type, empty encoding */ imageGlyphCacheAccessQueue;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic) void /* unknown type, empty encoding */ isEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isReady;
@property (nonatomic) void /* unknown type, empty encoding */ glyphType;

- (long long)numberOfItems;
- (id)indexPathForItem:(id)a0;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void)refresh;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)configureWith:(id)a0;
- (void)deleteItem:(STKImageGlyph *)a0 completionHandler:(void (^)(BOOL))a1;
- (id)indexPathForIdentifier:(id)a0 ofType:(long long)a1;
- (BOOL)isRestrictedImageGlyph:(id)a0;
- (void)moveItemFromIndex:(long long)a0 toIndex:(long long)a1 completionHandler:(void (^)(BOOL))a2;
- (id)sectionLayoutForSectionIndex:(long long)a0 environment:(id)a1;
- (id)accessibilityTextForItem:(id)a0;
- (long long)categoryIndexForIndexPath:(id)a0;
- (void)imageAtIndexPath:(NSIndexPath *)a0 completionHandler:(void (^)(NSImage *))a1;
- (void)imageForImageGlyph:(STKImageGlyph *)a0 completionHandler:(void (^)(NSImage *))a1;
- (id)indexPathForCategory:(id)a0;
- (id)indexPathForItemAtIndex:(long long)a0;
- (void)moveItemFromIndexPath:(NSIndexPath *)a0 toIndexPath:(NSIndexPath *)a1 completionHandler:(void (^)(BOOL))a2;
- (long long)numberOfItemsInCategory:(id)a0;
- (id)snapshotIdentifiersInSection:(long long)a0;
- (void)stickerAtIndexPath:(NSIndexPath *)a0 completionHandler:(void (^)(STKSticker *))a1;
- (void)stickerForImageGlyph:(STKImageGlyph *)a0 completionHandler:(void (^)(STKSticker *))a1;

@end
