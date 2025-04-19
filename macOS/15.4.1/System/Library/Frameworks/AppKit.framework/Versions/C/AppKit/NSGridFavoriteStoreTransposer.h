@class NSFavoriteColorsStore;

@interface NSGridFavoriteStoreTransposer : NSFavoriteColorsStore <NSFavoriteColorsStoreConcreteSubclass> {
    NSFavoriteColorsStore *_backingStore;
    long long _numRows;
    long long _numColumns;
}

+ (BOOL)defersBackingUpdates;

- (void)dealloc;
- (void)baseStoreDidChange:(id)a0;
- (id)colorsFromBacking;
- (id)initWithGridStore:(id)a0 numRows:(long long)a1 numColumns:(long long)a2;
- (BOOL)writeColorsToBacking:(id)a0;

@end
