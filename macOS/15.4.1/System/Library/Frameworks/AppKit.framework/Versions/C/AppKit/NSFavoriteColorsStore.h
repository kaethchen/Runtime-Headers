@class NSArray;

@interface NSFavoriteColorsStore : NSObject {
    NSArray *_colorEntries;
    BOOL _updatingFromBacking;
}

@property (class, readonly) NSFavoriteColorsStore *defaultStore;
@property (class, readonly) NSFavoriteColorsStore *defaultGridCompatibleStore;
@property (class, readonly) NSFavoriteColorsStore *defaultListCompatibleStore;

@property (copy) NSArray *colorEntries;
@property (readonly, copy) NSArray *colors;

+ (BOOL)defersBackingUpdates;

- (void)dealloc;
- (id)init;
- (void)addColor:(id)a0;
- (id)colorsFromBacking;
- (void)copyColorAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)deferredWriteColors;
- (void)insertColor:(id)a0 atIndex:(long long)a1;
- (void)moveColorAtIndex:(long long)a0 toIndex:(long long)a1 replacement:(BOOL)a2;
- (void)removeColorAtIndex:(long long)a0;
- (void)replaceColorAtIndex:(long long)a0 withColor:(id)a1;
- (void)updateColorsFromBacking;
- (void)updatingFromBacking:(id /* block */)a0;
- (void)writeColorsToBacking;
- (BOOL)writeColorsToBacking:(id)a0;

@end
