@class NSArray;

@interface NSBarLayoutSection : NSObject {
    NSArray *_items;
    BOOL _needsRegionUpdate;
    NSArray *_leadingItems;
    NSArray *_centerItems;
    NSArray *_trailingItems;
}

@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSArray *centerItems;
@property (readonly, copy) NSArray *leadingItems;
@property (readonly, copy) NSArray *trailingItems;

- (void)dealloc;
- (id)description;
- (void)_updateRegionsIfNecessary;
- (id)initWithItems:(id)a0;

@end
