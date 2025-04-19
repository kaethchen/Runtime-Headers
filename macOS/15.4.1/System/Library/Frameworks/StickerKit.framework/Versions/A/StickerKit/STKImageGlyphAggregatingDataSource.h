@class NSArray, NSImage, STKSticker, STKImageGlyph, NSIndexPath;

@interface STKImageGlyphAggregatingDataSource : NSObject <StickerKit.ImageGlyphDataSourceProtocol> {
    void /* unknown type, empty encoding */ dataSources;
}

@property (nonatomic) void /* unknown type, empty encoding */ isEnabled;
@property (nonatomic, readonly) BOOL isReady;
@property (nonatomic) void /* unknown type, empty encoding */ glyphType;
@property (nonatomic, readonly) NSArray *categories;

- (id)init;
- (void).cxx_destruct;
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
- (id)initWithDataSources:(id)a0;
- (void)moveItemFromIndexPath:(NSIndexPath *)a0 toIndexPath:(NSIndexPath *)a1 completionHandler:(void (^)(BOOL))a2;
- (long long)numberOfItemsInCategory:(id)a0;
- (long long)numberOfItemsInCategoryIndex:(long long)a0;
- (id)snapshotIdentifiersInSection:(long long)a0;
- (void)stickerAtIndexPath:(NSIndexPath *)a0 completionHandler:(void (^)(STKSticker *))a1;
- (void)stickerForImageGlyph:(STKImageGlyph *)a0 completionHandler:(void (^)(STKSticker *))a1;

@end
