@class NSArray, NSCountedSet;

@interface FavoritesPickerItemStyleResolver : NSObject {
    NSCountedSet *_hostCounts;
}

@property (copy, nonatomic) NSArray *favorites;

- (void).cxx_destruct;
- (id)_hostForFavorite:(id)a0;
- (void)_populateHostCountsIfNeeded;
- (int)styleForFavoriteAtIndex:(unsigned long long)a0;

@end
