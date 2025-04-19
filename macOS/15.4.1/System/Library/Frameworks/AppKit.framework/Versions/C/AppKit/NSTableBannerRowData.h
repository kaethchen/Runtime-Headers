@class NSTableRowView, NSMutableDictionary, NSMutableIndexSet;

@interface NSTableBannerRowData : NSObject <NSCopying> {
    NSMutableIndexSet *_bannerRowIndexes;
    NSMutableIndexSet *_cachedRowIndexes;
    long long _floatingBannerRowIndex;
    NSTableRowView *_floatingBannerRowView;
    NSMutableDictionary *_bannerViewBackgrounds;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end
