@class NSArray, NSIndexPath;

@interface StickerKit.RecentStickerGlyphDataSource : StickerKit.StickerGlyphDataSource

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic) long long glyphType;

- (void)moveItemFromIndex:(long long)a0 toIndex:(long long)a1 completionHandler:(void (^)(BOOL))a2;
- (void)moveItemFromIndexPath:(NSIndexPath *)a0 toIndexPath:(NSIndexPath *)a1 completionHandler:(void (^)(BOOL))a2;

@end
